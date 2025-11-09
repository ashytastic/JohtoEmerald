#include "global.h"
<<<<<<< HEAD
#include "rtc.h"
#include "string_util.h"
#include "text.h"
#include "rtc_include.h"
=======
#include "battle_pike.h"
#include "battle_pyramid.h"
#include "datetime.h"
#include "rtc.h"
#include "string_util.h"
#include "strings.h"
#include "text.h"
#include "fake_rtc.h"
#include "overworld.h"
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

// iwram bss
static u16 sErrorStatus;
static struct SiiRtcInfo sRtc;
static u8 sProbeResult;
static u16 sSavedIme;

// iwram common
<<<<<<< HEAD
struct Time gLocalTime;
=======
COMMON_DATA struct Time gLocalTime = {0};
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

// const rom

static const struct SiiRtcInfo sRtcDummy = {0, MONTH_JAN, 1}; // 2000 Jan 1

<<<<<<< HEAD
static const s32 sNumDaysInMonths[MONTH_COUNT] =
=======
const s32 sNumDaysInMonths[MONTH_COUNT] =
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
{
    [MONTH_JAN - 1] = 31,
    [MONTH_FEB - 1] = 28,
    [MONTH_MAR - 1] = 31,
    [MONTH_APR - 1] = 30,
    [MONTH_MAY - 1] = 31,
    [MONTH_JUN - 1] = 30,
    [MONTH_JUL - 1] = 31,
    [MONTH_AUG - 1] = 31,
    [MONTH_SEP - 1] = 30,
    [MONTH_OCT - 1] = 31,
    [MONTH_NOV - 1] = 30,
    [MONTH_DEC - 1] = 31,
};

void RtcDisableInterrupts(void)
{
    sSavedIme = REG_IME;
    REG_IME = 0;
}

void RtcRestoreInterrupts(void)
{
    REG_IME = sSavedIme;
}

u32 ConvertBcdToBinary(u8 bcd)
{
<<<<<<< HEAD
=======
    if (OW_USE_FAKE_RTC)
        return bcd;

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    if (bcd > 0x9F)
        return 0xFF;

    if ((bcd & 0xF) <= 9)
        return (10 * ((bcd >> 4) & 0xF)) + (bcd & 0xF);
    else
        return 0xFF;
}

bool8 IsLeapYear(u32 year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return TRUE;

    return FALSE;
}

u16 ConvertDateToDayCount(u8 year, u8 month, u8 day)
{
    s32 i;
    u16 dayCount = 0;

    for (i = year - 1; i >= 0; i--)
    {
        dayCount += 365;

        if (IsLeapYear(i) == TRUE)
            dayCount++;
    }

    for (i = 0; i < month - 1; i++)
        dayCount += sNumDaysInMonths[i];

    if (month > MONTH_FEB && IsLeapYear(year) == TRUE)
        dayCount++;

    dayCount += day;

    return dayCount;
}

u16 RtcGetDayCount(struct SiiRtcInfo *rtc)
{
<<<<<<< HEAD
    u8 year = ConvertBcdToBinary(rtc->year);
    u8 month = ConvertBcdToBinary(rtc->month);
    u8 day = ConvertBcdToBinary(rtc->day);
=======
    u8 year, month, day;

    year = ConvertBcdToBinary(rtc->year);
    month = ConvertBcdToBinary(rtc->month);
    day = ConvertBcdToBinary(rtc->day);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    return ConvertDateToDayCount(year, month, day);
}

void RtcInit(void)
{
<<<<<<< HEAD
=======
    if (OW_USE_FAKE_RTC)
        return;

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    sErrorStatus = 0;

    RtcDisableInterrupts();
    SiiRtcUnprotect();
    sProbeResult = SiiRtcProbe();
    RtcRestoreInterrupts();

    if ((sProbeResult & 0xF) != 1)
    {
        sErrorStatus = RTC_INIT_ERROR;
        return;
    }

    if (sProbeResult & 0xF0)
        sErrorStatus = RTC_INIT_WARNING;
    else
        sErrorStatus = 0;

    RtcGetRawInfo(&sRtc);
    sErrorStatus = RtcCheckInfo(&sRtc);
}

u16 RtcGetErrorStatus(void)
{
<<<<<<< HEAD
    return sErrorStatus;
=======
    return (OW_USE_FAKE_RTC) ? 0 : sErrorStatus;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void RtcGetInfo(struct SiiRtcInfo *rtc)
{
<<<<<<< HEAD
    if (sErrorStatus & RTC_ERR_FLAG_MASK)
=======
    if (OW_USE_FAKE_RTC)
        FakeRtc_GetRawInfo(rtc);
    else if (sErrorStatus & RTC_ERR_FLAG_MASK)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
        *rtc = sRtcDummy;
    else
        RtcGetRawInfo(rtc);
}

void RtcGetDateTime(struct SiiRtcInfo *rtc)
{
    RtcDisableInterrupts();
    SiiRtcGetDateTime(rtc);
    RtcRestoreInterrupts();
}

void RtcGetStatus(struct SiiRtcInfo *rtc)
{
    RtcDisableInterrupts();
    SiiRtcGetStatus(rtc);
    RtcRestoreInterrupts();
}

void RtcGetRawInfo(struct SiiRtcInfo *rtc)
{
    RtcGetStatus(rtc);
    RtcGetDateTime(rtc);
}

u16 RtcCheckInfo(struct SiiRtcInfo *rtc)
{
    u16 errorFlags = 0;
    s32 year;
    s32 month;
    s32 value;

<<<<<<< HEAD
=======
    if (OW_USE_FAKE_RTC)
        return 0;

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    if (rtc->status & SIIRTCINFO_POWER)
        errorFlags |= RTC_ERR_POWER_FAILURE;

    if (!(rtc->status & SIIRTCINFO_24HOUR))
        errorFlags |= RTC_ERR_12HOUR_CLOCK;

    year = ConvertBcdToBinary(rtc->year);

    if (year == 0xFF)
        errorFlags |= RTC_ERR_INVALID_YEAR;

    month = ConvertBcdToBinary(rtc->month);

    if (month == 0xFF || month == 0 || month > MONTH_COUNT)
        errorFlags |= RTC_ERR_INVALID_MONTH;

    value = ConvertBcdToBinary(rtc->day);

    if (value == 0xFF)
        errorFlags |= RTC_ERR_INVALID_DAY;

    if (month == MONTH_FEB)
    {
        if (value > IsLeapYear(year) + sNumDaysInMonths[month - 1])
            errorFlags |= RTC_ERR_INVALID_DAY;
    }
    else
    {
        if (value > sNumDaysInMonths[month - 1])
            errorFlags |= RTC_ERR_INVALID_DAY;
    }

    value = ConvertBcdToBinary(rtc->hour);

    if (value > HOURS_PER_DAY)
        errorFlags |= RTC_ERR_INVALID_HOUR;

    value = ConvertBcdToBinary(rtc->minute);

    if (value > MINUTES_PER_HOUR)
        errorFlags |= RTC_ERR_INVALID_MINUTE;

    value = ConvertBcdToBinary(rtc->second);

    if (value > SECONDS_PER_MINUTE)
        errorFlags |= RTC_ERR_INVALID_SECOND;

    return errorFlags;
}

void RtcReset(void)
{
<<<<<<< HEAD
=======
    if (OW_USE_FAKE_RTC)
    {
        FakeRtc_Reset();
        return;
    }

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
    RtcDisableInterrupts();
    SiiRtcReset();
    RtcRestoreInterrupts();
}

void FormatDecimalTime(u8 *dest, s32 hour, s32 minute, s32 second)
{
    dest = ConvertIntToDecimalStringN(dest, hour, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToDecimalStringN(dest, minute, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToDecimalStringN(dest, second, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest = EOS;
}

void FormatHexTime(u8 *dest, s32 hour, s32 minute, s32 second)
{
    dest = ConvertIntToHexStringN(dest, hour, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToHexStringN(dest, minute, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToHexStringN(dest, second, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest = EOS;
}

void FormatHexRtcTime(u8 *dest)
{
    FormatHexTime(dest, sRtc.hour, sRtc.minute, sRtc.second);
}

void FormatDecimalDate(u8 *dest, s32 year, s32 month, s32 day)
{
    dest = ConvertIntToDecimalStringN(dest, year, STR_CONV_MODE_LEADING_ZEROS, 4);
    *dest++ = CHAR_HYPHEN;
    dest = ConvertIntToDecimalStringN(dest, month, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_HYPHEN;
    dest = ConvertIntToDecimalStringN(dest, day, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest = EOS;
}

void FormatHexDate(u8 *dest, s32 year, s32 month, s32 day)
{
    dest = ConvertIntToHexStringN(dest, year, STR_CONV_MODE_LEADING_ZEROS, 4);
    *dest++ = CHAR_HYPHEN;
    dest = ConvertIntToHexStringN(dest, month, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_HYPHEN;
    dest = ConvertIntToHexStringN(dest, day, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest = EOS;
}

void RtcCalcTimeDifference(struct SiiRtcInfo *rtc, struct Time *result, struct Time *t)
{
    u16 days = RtcGetDayCount(rtc);
    result->seconds = ConvertBcdToBinary(rtc->second) - t->seconds;
    result->minutes = ConvertBcdToBinary(rtc->minute) - t->minutes;
    result->hours = ConvertBcdToBinary(rtc->hour) - t->hours;
    result->days = days - t->days;

    if (result->seconds < 0)
    {
        result->seconds += SECONDS_PER_MINUTE;
        --result->minutes;
    }

    if (result->minutes < 0)
    {
        result->minutes += MINUTES_PER_HOUR;
        --result->hours;
    }

    if (result->hours < 0)
    {
        result->hours += HOURS_PER_DAY;
        --result->days;
    }
}

void RtcCalcLocalTime(void)
{
<<<<<<< HEAD
    if (gSaveBlock1Ptr->tx_Features_RTCType == 1)
    {
        RtcGetInfoFake(&sRtc);
        RtcCalcTimeDifferenceFake(&sRtc, &gLocalTime, &gSaveBlock2Ptr->localTimeOffset);
    }
    else
    {
        RtcGetInfo(&sRtc);
        RtcCalcTimeDifference(&sRtc, &gLocalTime, &gSaveBlock2Ptr->localTimeOffset);
    }
}

=======
    RtcGetInfo(&sRtc);
    RtcCalcTimeDifference(&sRtc, &gLocalTime, &gSaveBlock2Ptr->localTimeOffset);
}

bool8 IsBetweenHours(s32 hours, s32 begin, s32 end)
{
    if (end < begin)
        return hours >= begin || hours < end;
    else
        return hours >= begin && hours < end;
}

enum TimeOfDay GetTimeOfDay(void)
{
    UpdateTimeOfDay();
    return gTimeOfDay;
}

enum TimeOfDay GetTimeOfDayForDex(void)
{
    return OW_TIME_OF_DAY_ENCOUNTERS ? GetTimeOfDay() : TIME_OF_DAY_DEFAULT;
}
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

void RtcInitLocalTimeOffset(s32 hour, s32 minute)
{
    RtcCalcLocalTimeOffset(0, hour, minute, 0);
}

void RtcCalcLocalTimeOffset(s32 days, s32 hours, s32 minutes, s32 seconds)
{
    gLocalTime.days = days;
    gLocalTime.hours = hours;
    gLocalTime.minutes = minutes;
    gLocalTime.seconds = seconds;
<<<<<<< HEAD
    if (gSaveBlock1Ptr->tx_Features_RTCType == 1)
    {
        RtcGetInfoFake(&sRtc);
        RtcCalcTimeDifferenceFake(&sRtc, &gSaveBlock2Ptr->localTimeOffset, &gLocalTime);
    }
    else
    {
        RtcGetInfo(&sRtc);
        RtcCalcTimeDifference(&sRtc, &gSaveBlock2Ptr->localTimeOffset, &gLocalTime);
    }
    
=======
    FakeRtc_ManuallySetTime(gLocalTime.days, gLocalTime.hours, gLocalTime.minutes, seconds);
    RtcGetInfo(&sRtc);
    RtcCalcTimeDifference(&sRtc, &gSaveBlock2Ptr->localTimeOffset, &gLocalTime);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}

void CalcTimeDifference(struct Time *result, struct Time *t1, struct Time *t2)
{
    result->seconds = t2->seconds - t1->seconds;
    result->minutes = t2->minutes - t1->minutes;
    result->hours = t2->hours - t1->hours;
    result->days = t2->days - t1->days;

    if (result->seconds < 0)
    {
        result->seconds += SECONDS_PER_MINUTE;
        --result->minutes;
    }

    if (result->minutes < 0)
    {
        result->minutes += MINUTES_PER_HOUR;
        --result->hours;
    }

    if (result->hours < 0)
    {
        result->hours += HOURS_PER_DAY;
        --result->days;
    }
}

u32 RtcGetMinuteCount(void)
{
    RtcGetInfo(&sRtc);
    return (HOURS_PER_DAY * MINUTES_PER_HOUR) * RtcGetDayCount(&sRtc) + MINUTES_PER_HOUR * sRtc.hour + sRtc.minute;
}

u32 RtcGetLocalDayCount(void)
{
    return RtcGetDayCount(&sRtc);
}

<<<<<<< HEAD
struct Time* GetFakeRtc(void)
{
    return &gSaveBlock2Ptr->fakeRTC;
}

u16 ConvertDateToDayCountFake(u8 year, u8 month, u8 day)
{
    // Since year, month, and day do not exist, let's use 'days'
    return gSaveBlock2Ptr->fakeRTC.days;  // Adjust this line based on actual use case
}




u16 RtcGetDayCountFake(struct SiiRtcInfo *rtc)
{
    return rtc->day;
}

void RtcInitFake(void)
{

}

u16 RtcGetErrorStatusFake(void)
{
    return 0;
}

void RtcGetInfoFake(struct SiiRtcInfo *rtc)
{
    struct Time* time = GetFakeRtc();
    rtc->second = time->seconds;
    rtc->minute = time->minutes;
    rtc->hour = time->hours;
    rtc->day = time->days;
}

u16 RtcCheckInfoFake(struct SiiRtcInfo *rtc)
{
    return 0;
}

void RtcResetFake(void)
{
    memset(GetFakeRtc(), 0, sizeof(struct Time));
}

void RtcCalcTimeDifferenceFake(struct SiiRtcInfo *rtc, struct Time *result, struct Time *t)
{
    u16 days = RtcGetDayCountFake(rtc);
    result->seconds = rtc->second - t->seconds;
    result->minutes = rtc->minute - t->minutes;
    result->hours = rtc->hour - t->hours;
    result->days = days - t->days;

    if (result->seconds < 0)
    {
        result->seconds += 60;
        --result->minutes;
    }

    if (result->minutes < 0)
    {
        result->minutes += 60;
        --result->hours;
    }

    if (result->hours < 0)
    {
        result->hours += 24;
        --result->days;
    }
}

void RtcAdvanceTime(int hours, int minutes, int seconds) // fake rtc
{
    struct Time* time = GetFakeRtc();
    seconds += time->seconds;
    minutes += time->minutes;
    hours += time->hours;

    while (seconds >= 60)
    {
        minutes++;
        seconds -= 60;
    }

    while (minutes >= 60)
    {
        hours++;
        minutes -= 60;
    }

    while (hours >= 24)
    {
        time->days++;
        hours -= 24;
    }

    time->seconds = seconds;
    time->minutes = minutes;
    time->hours = hours;
}


void RtcAdvanceTimeTo(u32 hour, u32 minute, u32 second) //fake rtc
{
    struct Time diff, target;
    RtcCalcLocalTime();
    
    target.hours = hour;
    target.minutes = minute;
    target.seconds = second;
    target.days = gLocalTime.days;
    
    CalcTimeDifference(&diff, &gLocalTime, &target);
    RtcAdvanceTime(diff.hours, diff.minutes, diff.seconds);
=======
void FormatDecimalTimeWithoutSeconds(u8 *txtPtr, s8 hour, s8 minute, bool32 is24Hour)
{
    if (is24Hour)
    {
        txtPtr = ConvertIntToDecimalStringN(txtPtr, hour, STR_CONV_MODE_LEADING_ZEROS, 2);
        *txtPtr++ = CHAR_COLON;
        txtPtr = ConvertIntToDecimalStringN(txtPtr, minute, STR_CONV_MODE_LEADING_ZEROS, 2);
    }
    else
    {
        if (hour == 0)
            txtPtr = ConvertIntToDecimalStringN(txtPtr, 12, STR_CONV_MODE_LEADING_ZEROS, 2);
        else if (hour < 13)
            txtPtr = ConvertIntToDecimalStringN(txtPtr, hour, STR_CONV_MODE_LEADING_ZEROS, 2);
        else
            txtPtr = ConvertIntToDecimalStringN(txtPtr, hour - 12, STR_CONV_MODE_LEADING_ZEROS, 2);

        *txtPtr++ = CHAR_COLON;
        txtPtr = ConvertIntToDecimalStringN(txtPtr, minute, STR_CONV_MODE_LEADING_ZEROS, 2);
        txtPtr = StringAppend(txtPtr, gText_Space);
        if (hour < 12)
            txtPtr = StringAppend(txtPtr, gText_AM);
        else
            txtPtr = StringAppend(txtPtr, gText_PM);
    }

    *txtPtr++ = EOS;
    *txtPtr = EOS;
}

u16 GetFullYear(void)
{
    struct DateTime dateTime;
    RtcCalcLocalTime();
    ConvertTimeToDateTime(&dateTime, &gLocalTime);

    return dateTime.year;
}

enum Month GetMonth(void)
{
    struct DateTime dateTime;
    RtcCalcLocalTime();
    ConvertTimeToDateTime(&dateTime, &gLocalTime);

    return dateTime.month;
}

u8 GetDay(void)
{
    struct DateTime dateTime;
    RtcCalcLocalTime();
    ConvertTimeToDateTime(&dateTime, &gLocalTime);

    return dateTime.day;
}

enum Weekday GetDayOfWeek(void)
{
    struct DateTime dateTime;
    RtcCalcLocalTime();
    ConvertTimeToDateTime(&dateTime, &gLocalTime);

    return dateTime.dayOfWeek;
}

enum TimeOfDay TryIncrementTimeOfDay(enum TimeOfDay timeOfDay)
{
    return timeOfDay == TIME_NIGHT ? TIME_MORNING : timeOfDay + 1;
}

enum TimeOfDay TryDecrementTimeOfDay(enum TimeOfDay timeOfDay)
{
    return timeOfDay == TIME_MORNING ? TIME_NIGHT : timeOfDay - 1;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
}
