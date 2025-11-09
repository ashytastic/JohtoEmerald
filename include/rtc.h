#ifndef GUARD_RTC_UTIL_H
#define GUARD_RTC_UTIL_H

<<<<<<< HEAD
#include "siirtc.h"

#define RTC_INIT_ERROR         0x0001
#define RTC_INIT_WARNING       0x0002

#define RTC_ERR_12HOUR_CLOCK   0x0010
#define RTC_ERR_POWER_FAILURE  0x0020
#define RTC_ERR_INVALID_YEAR   0x0040
#define RTC_ERR_INVALID_MONTH  0x0080
#define RTC_ERR_INVALID_DAY    0x0100
#define RTC_ERR_INVALID_HOUR   0x0200
#define RTC_ERR_INVALID_MINUTE 0x0400
#define RTC_ERR_INVALID_SECOND 0x0800

#define RTC_ERR_FLAG_MASK      0x0FF0

extern struct Time gLocalTime;
=======
#include "global.h"
#include "siirtc.h"
#include "config/overworld.h"
#include "constants/rtc.h"

extern struct Time gLocalTime;
extern const s32 sNumDaysInMonths[MONTH_COUNT];
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

void RtcDisableInterrupts(void);
void RtcRestoreInterrupts(void);
u32 ConvertBcdToBinary(u8 bcd);
bool8 IsLeapYear(u32 year);
u16 ConvertDateToDayCount(u8 year, u8 month, u8 day);
u16 RtcGetDayCount(struct SiiRtcInfo *rtc);
void RtcInit(void);
u16 RtcGetErrorStatus(void);
void RtcGetInfo(struct SiiRtcInfo *rtc);
void RtcGetDateTime(struct SiiRtcInfo *rtc);
void RtcGetStatus(struct SiiRtcInfo *rtc);
void RtcGetRawInfo(struct SiiRtcInfo *rtc);
u16 RtcCheckInfo(struct SiiRtcInfo *rtc);
void RtcReset(void);
void FormatDecimalTime(u8 *dest, s32 hour, s32 minute, s32 second);
void FormatHexTime(u8 *dest, s32 hour, s32 minute, s32 second);
void FormatHexRtcTime(u8 *dest);
void FormatDecimalDate(u8 *dest, s32 year, s32 month, s32 day);
void FormatHexDate(u8 *dest, s32 year, s32 month, s32 day);
void RtcCalcTimeDifference(struct SiiRtcInfo *rtc, struct Time *result, struct Time *t);
void RtcCalcLocalTime(void);
<<<<<<< HEAD
=======
bool8 IsBetweenHours(s32 hours, s32 begin, s32 end);
enum TimeOfDay GetTimeOfDay(void);
enum TimeOfDay GetTimeOfDayForDex(void);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
void RtcInitLocalTimeOffset(s32 hour, s32 minute);
void RtcCalcLocalTimeOffset(s32 days, s32 hours, s32 minutes, s32 seconds);
void CalcTimeDifference(struct Time *result, struct Time *t1, struct Time *t2);
u32 RtcGetMinuteCount(void);
u32 RtcGetLocalDayCount(void);
<<<<<<< HEAD
/*void RtcAdvanceTime(u32 hours, u32 minutes, u32 seconds);
void RtcAdvanceTimeTo(u32 hour, u32 minute, u32 second);
u16 ConvertDateToDayCountFake(u8 year, u8 month, u8 day);
u16 RtcGetDayCountFake(struct SiiRtcInfo *rtc);
void RtcInitFake(void);
u16 RtcGetErrorStatusFake(void);
void RtcGetInfoFake(struct SiiRtcInfo *rtc);
u16 RtcCheckInfoFake(struct SiiRtcInfo *rtc);
void RtcResetFake(void);
void RtcCalcTimeDifferenceFake(struct SiiRtcInfo *rtc, struct Time *result, struct Time *t);*/
=======
void FormatDecimalTimeWithoutSeconds(u8 *dest, s8 hour, s8 minute, bool32 is24Hour);
u16 GetFullYear(void);
enum Month GetMonth(void);
u8 GetDay(void);
enum Weekday GetDayOfWeek(void);
enum TimeOfDay TryIncrementTimeOfDay(enum TimeOfDay timeOfDay);
enum TimeOfDay TryDecrementTimeOfDay(enum TimeOfDay timeOfDay);
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

#endif // GUARD_RTC_UTIL_H
