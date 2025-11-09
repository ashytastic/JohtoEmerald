<<<<<<< HEAD
TOOLCHAIN := $(DEVKITARM)
COMPARE ?= 0
=======
# GBA rom header
TITLE       := POKEMON EMER
GAME_CODE   := BPEE
MAKER_CODE  := 01
REVISION    := 0
KEEP_TEMPS  ?= 0

# `File name`.gba
FILE_NAME := pokeemerald
BUILD_DIR := build

# Compares the ROM to a checksum of the original - only makes sense using when non-modern
COMPARE     ?= 0
# Executes the Test Runner System that checks that all mechanics work as expected
TEST         ?= 0
# Enables -fanalyzer C flag to analyze in depth potential UBs
ANALYZE      ?= 0
# Count unused warnings as errors. Used by RH-Hideout's repo
UNUSED_ERROR ?= 0
# Adds -Og and -g flags, which optimize the build for debugging and include debug info respectively
DEBUG        ?= 0
# Adds -flto flag, which increases link time but results in a more efficient binary (especially in audio processing)
LTO          ?= 0
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

ifeq (compare,$(MAKECMDGOALS))
  COMPARE := 1
endif
<<<<<<< HEAD

=======
ifeq (check,$(MAKECMDGOALS))
  TEST := 1
endif
ifeq (debug,$(MAKECMDGOALS))
  DEBUG := 1
endif

# Default make rule
all: rom

# Toolchain selection
TOOLCHAIN := $(DEVKITARM)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
# don't use dkP's base_tools anymore
# because the redefinition of $(CC) conflicts
# with when we want to use $(CC) to preprocess files
# thus, manually create the variables for the bin
# files, or use arm-none-eabi binaries on the system
# if dkP is not installed on this system
<<<<<<< HEAD

ifneq (,$(TOOLCHAIN))
ifneq ($(wildcard $(TOOLCHAIN)/bin),)
export PATH := $(TOOLCHAIN)/bin:$(PATH)
endif
=======
ifneq (,$(TOOLCHAIN))
  ifneq ($(wildcard $(TOOLCHAIN)/bin),)
    export PATH := $(TOOLCHAIN)/bin:$(PATH)
  endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
endif

PREFIX := arm-none-eabi-
OBJCOPY := $(PREFIX)objcopy
OBJDUMP := $(PREFIX)objdump
AS := $(PREFIX)as
<<<<<<< HEAD

LD := $(PREFIX)ld

# note: the makefile must be set up so MODERNCC is never called
# if MODERN=0
MODERNCC := $(PREFIX)gcc
PATH_MODERNCC := PATH="$(PATH)" $(MODERNCC)

ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

TITLE       := POKEMON EMER
GAME_CODE   := BPEE
MAKER_CODE  := 01
REVISION    := 0
MODERN      ?= 0

ifeq (modern,$(MAKECMDGOALS))
  MODERN := 1
endif

# use arm-none-eabi-cpp for macOS
# as macOS's default compiler is clang
# and clang's preprocessor will warn on \u
# when preprocessing asm files, expecting a unicode literal
# we can't unconditionally use arm-none-eabi-cpp
# as installations which install binutils-arm-none-eabi
# don't come with it
ifneq ($(MODERN),1)
  ifeq ($(shell uname -s),Darwin)
    CPP := $(PREFIX)cpp
  else
    CPP := $(CC) -E
  endif
else
  CPP := $(PREFIX)cpp
endif

ROM_NAME := pokeemerald.gba
ELF_NAME := $(ROM_NAME:.gba=.elf)
MAP_NAME := $(ROM_NAME:.gba=.map)
OBJ_DIR_NAME := build/emerald

MODERN_ROM_NAME := pokemonHnS.gba
MODERN_ELF_NAME := $(MODERN_ROM_NAME:.gba=.elf)
MODERN_MAP_NAME := $(MODERN_ROM_NAME:.gba=.map)
MODERN_OBJ_DIR_NAME := build/modern

SHELL := /bin/bash -o pipefail

ELF = $(ROM:.gba=.elf)
MAP = $(ROM:.gba=.map)
SYM = $(ROM:.gba=.sym)

C_SUBDIR = src
GFLIB_SUBDIR = gflib
=======
LD := $(PREFIX)ld

EXE :=
ifeq ($(OS),Windows_NT)
  EXE := .exe
endif

CPP := $(PREFIX)cpp

ROM_NAME := $(FILE_NAME).gba
OBJ_DIR_NAME := $(BUILD_DIR)/modern
OBJ_DIR_NAME_TEST := $(BUILD_DIR)/modern-test
OBJ_DIR_NAME_DEBUG := $(BUILD_DIR)/modern-debug

ELF_NAME := $(ROM_NAME:.gba=.elf)
MAP_NAME := $(ROM_NAME:.gba=.map)
TESTELF = $(ROM_NAME:.gba=-test.elf)
HEADLESSELF = $(ROM_NAME:.gba=-test-headless.elf)

# Pick our active variables
ROM := $(ROM_NAME)
ifeq ($(TESTELF),$(MAKECMDGOALS))
  TEST := 1
endif
ifeq ($(TEST), 0)
  OBJ_DIR := $(OBJ_DIR_NAME)
else
  OBJ_DIR := $(OBJ_DIR_NAME_TEST)
endif
ifeq ($(DEBUG),1)
  OBJ_DIR := $(OBJ_DIR_NAME_DEBUG)
endif
ELF := $(ROM:.gba=.elf)
MAP := $(ROM:.gba=.map)
SYM := $(ROM:.gba=.sym)

# Commonly used directories
C_SUBDIR = src
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
ASM_SUBDIR = asm
DATA_SRC_SUBDIR = src/data
DATA_ASM_SUBDIR = data
SONG_SUBDIR = sound/songs
MID_SUBDIR = sound/songs/midi
<<<<<<< HEAD
SAMPLE_SUBDIR = sound/direct_sound_samples
CRY_SUBDIR = sound/direct_sound_samples/cries

C_BUILDDIR = $(OBJ_DIR)/$(C_SUBDIR)
GFLIB_BUILDDIR = $(OBJ_DIR)/$(GFLIB_SUBDIR)
=======
TEST_SUBDIR = test

C_BUILDDIR = $(OBJ_DIR)/$(C_SUBDIR)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
ASM_BUILDDIR = $(OBJ_DIR)/$(ASM_SUBDIR)
DATA_ASM_BUILDDIR = $(OBJ_DIR)/$(DATA_ASM_SUBDIR)
SONG_BUILDDIR = $(OBJ_DIR)/$(SONG_SUBDIR)
MID_BUILDDIR = $(OBJ_DIR)/$(MID_SUBDIR)
<<<<<<< HEAD

ASFLAGS := -mcpu=arm7tdmi --defsym MODERN=$(MODERN)

ifeq ($(MODERN),0)
CC1             := tools/agbcc/bin/agbcc$(EXE)
override CFLAGS += -mthumb-interwork -Wimplicit -Wparentheses -Werror -O2 -fhex-asm -g
ROM := $(ROM_NAME)
OBJ_DIR := $(OBJ_DIR_NAME)
LIBPATH := -L ../../tools/agbcc/lib
LIB := $(LIBPATH) -lgcc -lc -L../../libagbsyscall -lagbsyscall
else
CC1              = $(shell $(PATH_MODERNCC) --print-prog-name=cc1) -quiet
override CFLAGS += -mthumb -mthumb-interwork -O2 -mabi=apcs-gnu -mtune=arm7tdmi -march=armv4t -fno-toplevel-reorder -Wno-pointer-to-int-cast
ROM := $(MODERN_ROM_NAME)
OBJ_DIR := $(MODERN_OBJ_DIR_NAME)
LIBPATH := -L "$(dir $(shell $(PATH_MODERNCC) -mthumb -print-file-name=libgcc.a))" -L "$(dir $(shell $(PATH_MODERNCC) -mthumb -print-file-name=libnosys.a))" -L "$(dir $(shell $(PATH_MODERNCC) -mthumb -print-file-name=libc.a))"
LIB := $(LIBPATH) -lc -lnosys -lgcc -L../../libagbsyscall -lagbsyscall
endif

CPPFLAGS := -iquote include -iquote $(GFLIB_SUBDIR) -Wno-trigraphs -DMODERN=$(MODERN)
ifneq ($(MODERN),1)
CPPFLAGS += -I tools/agbcc/include -I tools/agbcc -nostdinc -undef
endif

SHA1 := $(shell { command -v sha1sum || command -v shasum; } 2>/dev/null) -c
GFX := tools/gbagfx/gbagfx$(EXE)
AIF := tools/aif2pcm/aif2pcm$(EXE)
MID := tools/mid2agb/mid2agb$(EXE)
SCANINC := tools/scaninc/scaninc$(EXE)
PREPROC := tools/preproc/preproc$(EXE)
RAMSCRGEN := tools/ramscrgen/ramscrgen$(EXE)
FIX := tools/gbafix/gbafix$(EXE)
MAPJSON := tools/mapjson/mapjson$(EXE)
JSONPROC := tools/jsonproc/jsonproc$(EXE)

PERL := perl

# Inclusive list. If you don't want a tool to be built, don't add it here.
TOOLDIRS := tools/aif2pcm tools/bin2c tools/gbafix tools/gbagfx tools/jsonproc tools/mapjson tools/mid2agb tools/preproc tools/ramscrgen tools/rsfont tools/scaninc
TOOLBASE = $(TOOLDIRS:tools/%=%)
TOOLS = $(foreach tool,$(TOOLBASE),tools/$(tool)/$(tool)$(EXE))
=======
TEST_BUILDDIR = $(OBJ_DIR)/$(TEST_SUBDIR)

SHELL := bash -o pipefail

# Set flags for tools
ASFLAGS := -mcpu=arm7tdmi -march=armv4t -meabi=5 --defsym MODERN=1

INCLUDE_DIRS := include
INCLUDE_CPP_ARGS := $(INCLUDE_DIRS:%=-iquote %)
INCLUDE_SCANINC_ARGS := $(INCLUDE_DIRS:%=-I %)

ifeq ($(DEBUG),1)
O_LEVEL ?= g
else
O_LEVEL ?= 2
endif
CPPFLAGS := $(INCLUDE_CPP_ARGS) -Wno-trigraphs -DMODERN=1 -DTESTING=$(TEST) -std=gnu17
ARMCC := $(PREFIX)gcc
PATH_ARMCC := PATH="$(PATH)" $(ARMCC)
CC1 := $(shell $(PATH_ARMCC) --print-prog-name=cc1) -quiet

override CFLAGS += -mthumb -mthumb-interwork -O$(O_LEVEL) -mabi=apcs-gnu -mtune=arm7tdmi -march=armv4t -Wno-pointer-to-int-cast -std=gnu17 -Werror -Wall -Wno-strict-aliasing -Wno-attribute-alias -Woverride-init -Wnonnull -Wenum-conversion

ifneq ($(LTO),0)
  ifneq ($(TEST),1)
    override CFLAGS += -flto=auto -fno-fat-lto-objects -fno-asynchronous-unwind-tables -ffunction-sections -fdata-sections
  endif
endif

ifeq ($(ANALYZE),1)
  override CFLAGS += -fanalyzer
endif
# Only throw an error for unused elements if its RH-Hideout's repo
ifeq ($(UNUSED_ERROR),0)
  ifneq ($(GITHUB_REPOSITORY_OWNER),rh-hideout)
    override CFLAGS += -Wno-error=unused-variable -Wno-error=unused-const-variable -Wno-error=unused-parameter -Wno-error=unused-function -Wno-error=unused-but-set-parameter -Wno-error=unused-but-set-variable -Wno-error=unused-value -Wno-error=unused-local-typedefs
  endif
endif
LIBPATH := -L "$(dir $(shell $(PATH_ARMCC) -mthumb -print-file-name=libgcc.a))" -L "$(dir $(shell $(PATH_ARMCC) -mthumb -print-file-name=libnosys.a))" -L "$(dir $(shell $(PATH_ARMCC) -mthumb -print-file-name=libc.a))"
LIB := $(LIBPATH) -lc -lnosys -lgcc -L../../libagbsyscall -lagbsyscall
# Enable debug info if set
ifeq ($(DINFO),1)
  override CFLAGS += -g
else
  ifeq ($(DEBUG),1)
    override CFLAGS += -g
  endif
endif

ifeq ($(NOOPT),1)
override CFLAGS := $(filter-out -O1 -Og -O2,$(CFLAGS))
override CFLAGS += -O0
endif

# Variable filled out in other make files
AUTO_GEN_TARGETS :=
include make_tools.mk
# Tool executables
SMOLTM       := $(TOOLS_DIR)/compresSmol/compresSmolTilemap$(EXE)
SMOL         := $(TOOLS_DIR)/compresSmol/compresSmol$(EXE)
GFX          := $(TOOLS_DIR)/gbagfx/gbagfx$(EXE)
AIF          := $(TOOLS_DIR)/aif2pcm/aif2pcm$(EXE)
MID          := $(TOOLS_DIR)/mid2agb/mid2agb$(EXE)
SCANINC      := $(TOOLS_DIR)/scaninc/scaninc$(EXE)
PREPROC      := $(TOOLS_DIR)/preproc/preproc$(EXE)
RAMSCRGEN    := $(TOOLS_DIR)/ramscrgen/ramscrgen$(EXE)
FIX          := $(TOOLS_DIR)/gbafix/gbafix$(EXE)
MAPJSON      := $(TOOLS_DIR)/mapjson/mapjson$(EXE)
JSONPROC     := $(TOOLS_DIR)/jsonproc/jsonproc$(EXE)
TRAINERPROC  := $(TOOLS_DIR)/trainerproc/trainerproc$(EXE)
PATCHELF     := $(TOOLS_DIR)/patchelf/patchelf$(EXE)
ifeq ($(shell uname),Darwin)
    ROMTEST ?= $(shell command -v mgba-rom-test-mac 2>/dev/null || echo $(TOOLS_DIR)/mgba/mgba-rom-test-mac)
    ROMTESTHYDRA := $(shell command -v mgba-rom-test-hydra 2>/dev/null || echo $(TOOLS_DIR)/mgba-rom-test-hydra/mgba-rom-test-hydra)
else ifeq ($(shell uname),Linux)
    ROMTEST ?= $(shell command -v mgba-rom-test 2>/dev/null || echo $(TOOLS_DIR)/mgba/mgba-rom-test)
    ROMTESTHYDRA := $(shell command -v mgba-rom-test-hydra 2>/dev/null || echo $(TOOLS_DIR)/mgba-rom-test-hydra/mgba-rom-test-hydra)
else
    ROMTEST ?= $(TOOLS_DIR)/mgba/mgba-rom-test$(EXE)
    ROMTESTHYDRA := $(TOOLS_DIR)/mgba-rom-test-hydra/mgba-rom-test-hydra$(EXE)
endif

# Learnset helper is a Python script
LEARNSET_HELPERS_DIR := $(TOOLS_DIR)/learnset_helpers
LEARNSET_HELPERS_DATA_DIR := $(LEARNSET_HELPERS_DIR)/porymoves_files
LEARNSET_HELPERS_BUILD_DIR := $(LEARNSET_HELPERS_DIR)/build
ALL_LEARNABLES_JSON := $(LEARNSET_HELPERS_BUILD_DIR)/all_learnables.json

# wild_encounters.h is generated by a Python script
WILD_ENCOUNTERS_TOOL_DIR := $(TOOLS_DIR)/wild_encounters
AUTO_GEN_TARGETS += $(DATA_SRC_SUBDIR)/wild_encounters.h

MISC_TOOL_DIR := $(TOOLS_DIR)/misc
AUTO_GEN_TARGETS +=  $(INCLUDE_DIRS)/constants/script_commands.h

$(DATA_SRC_SUBDIR)/wild_encounters.h: $(DATA_SRC_SUBDIR)/wild_encounters.json $(WILD_ENCOUNTERS_TOOL_DIR)/wild_encounters_to_header.py $(INCLUDE_DIRS)/config/overworld.h $(INCLUDE_DIRS)/config/dexnav.h
	python3 $(WILD_ENCOUNTERS_TOOL_DIR)/wild_encounters_to_header.py > $@

$(INCLUDE_DIRS)/constants/script_commands.h: $(MISC_TOOL_DIR)/make_scr_cmd_constants.py $(DATA_ASM_SUBDIR)/script_cmd_table.inc
	python3  $(MISC_TOOL_DIR)/make_scr_cmd_constants.py

$(C_BUILDDIR)/wild_encounter.o: c_dep += $(DATA_SRC_SUBDIR)/wild_encounters.h
$(C_BUILDDIR)/trainer_see.o: c_dep += $(INCLUDE_DIRS)/constants/script_commands.h
$(C_BUILDDIR)/vs_seeker.o: c_dep += $(INCLUDE_DIRS)/constants/script_commands.h

PERL := perl
SHA1 := $(shell { command -v sha1sum || command -v shasum; } 2>/dev/null) -c
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

MAKEFLAGS += --no-print-directory

# Clear the default suffixes
.SUFFIXES:
# Don't delete intermediate files
.SECONDARY:
# Delete files that weren't built properly
.DELETE_ON_ERROR:

<<<<<<< HEAD
# Secondary expansion is required for dependency variables in object rules.
.SECONDEXPANSION:

.PHONY: all rom clean compare tidy tools mostlyclean clean-tools $(TOOLDIRS) libagbsyscall modern tidymodern tidynonmodern

infoshell = $(foreach line, $(shell $1 | sed "s/ /__SPACE__/g"), $(info $(subst __SPACE__, ,$(line))))

# Build tools when building the rom
# Disable dependency scanning for clean/tidy/tools
# Use a separate minimal makefile for speed
# Since we don't need to reload most of this makefile
ifeq (,$(filter-out all rom compare modern libagbsyscall syms,$(MAKECMDGOALS)))
$(call infoshell, $(MAKE) -f make_tools.mk)
else
NODEP ?= 1
endif

# check if we need to scan dependencies based on the rule
ifeq (,$(MAKECMDGOALS))
  SCAN_DEPS ?= 1
else
  # clean, tidy, tools, mostlyclean, clean-tools, $(TOOLDIRS), tidymodern, tidynonmodern don't even build the ROM
  # libagbsyscall does its own thing
  ifeq (,$(filter-out clean tidy tools mostlyclean clean-tools $(TOOLDIRS) tidymodern tidynonmodern libagbsyscall,$(MAKECMDGOALS)))
    SCAN_DEPS ?= 0
  else
    SCAN_DEPS ?= 1
  endif
endif

ifeq ($(SCAN_DEPS),1)
=======
RULES_NO_SCAN += libagbsyscall clean clean-assets tidy tidymodern tidycheck generated clean-generated
.PHONY: all rom agbcc modern compare check debug
.PHONY: $(RULES_NO_SCAN)

infoshell = $(foreach line, $(shell $1 | sed "s/ /__SPACE__/g"), $(info $(subst __SPACE__, ,$(line))))

# Check if we need to scan dependencies based on the chosen rule OR user preference
NODEP ?= 0
# Check if we need to pre-build tools and generate assets based on the chosen rule.
SETUP_PREREQS ?= 1
# Disable dependency scanning for rules that don't need it.
ifneq (,$(MAKECMDGOALS))
  ifeq (,$(filter-out $(RULES_NO_SCAN),$(MAKECMDGOALS)))
    NODEP := 1
    SETUP_PREREQS := 0
  endif
endif

.SHELLSTATUS ?= 0

ifeq ($(SETUP_PREREQS),1)
  # If set on: Default target or a rule requiring a scan
  # Forcibly execute `make tools` since we need them for what we are doing.
  $(foreach line, $(shell $(MAKE) -f make_tools.mk | sed "s/ /__SPACE__/g"), $(info $(subst __SPACE__, ,$(line))))
  ifneq ($(.SHELLSTATUS),0)
    $(error Errors occurred while building tools. See error messages above for more details)
  endif
  # Oh and also generate mapjson sources before we use `SCANINC`.
  $(foreach line, $(shell $(MAKE) generated | sed "s/ /__SPACE__/g"), $(info $(subst __SPACE__, ,$(line))))
  ifneq ($(.SHELLSTATUS),0)
    $(error Errors occurred while generating map-related sources. See error messages above for more details)
  endif
endif

# Collect sources
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
C_SRCS_IN := $(wildcard $(C_SUBDIR)/*.c $(C_SUBDIR)/*/*.c $(C_SUBDIR)/*/*/*.c)
C_SRCS := $(foreach src,$(C_SRCS_IN),$(if $(findstring .inc.c,$(src)),,$(src)))
C_OBJS := $(patsubst $(C_SUBDIR)/%.c,$(C_BUILDDIR)/%.o,$(C_SRCS))

<<<<<<< HEAD
GFLIB_SRCS := $(wildcard $(GFLIB_SUBDIR)/*.c)
GFLIB_OBJS := $(patsubst $(GFLIB_SUBDIR)/%.c,$(GFLIB_BUILDDIR)/%.o,$(GFLIB_SRCS))

C_ASM_SRCS += $(wildcard $(C_SUBDIR)/*.s $(C_SUBDIR)/*/*.s $(C_SUBDIR)/*/*/*.s)
=======
TEST_SRCS_IN := $(wildcard $(TEST_SUBDIR)/*.c $(TEST_SUBDIR)/*/*.c $(TEST_SUBDIR)/*/*/*.c)
TEST_SRCS := $(foreach src,$(TEST_SRCS_IN),$(if $(findstring .inc.c,$(src)),,$(src)))
TEST_OBJS := $(patsubst $(TEST_SUBDIR)/%.c,$(TEST_BUILDDIR)/%.o,$(TEST_SRCS))
TEST_OBJS_REL := $(patsubst $(OBJ_DIR)/%,%,$(TEST_OBJS))

C_ASM_SRCS := $(wildcard $(C_SUBDIR)/*.s $(C_SUBDIR)/*/*.s $(C_SUBDIR)/*/*/*.s)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
C_ASM_OBJS := $(patsubst $(C_SUBDIR)/%.s,$(C_BUILDDIR)/%.o,$(C_ASM_SRCS))

ASM_SRCS := $(wildcard $(ASM_SUBDIR)/*.s)
ASM_OBJS := $(patsubst $(ASM_SUBDIR)/%.s,$(ASM_BUILDDIR)/%.o,$(ASM_SRCS))

# get all the data/*.s files EXCEPT the ones with specific rules
REGULAR_DATA_ASM_SRCS := $(filter-out $(DATA_ASM_SUBDIR)/maps.s $(DATA_ASM_SUBDIR)/map_events.s, $(wildcard $(DATA_ASM_SUBDIR)/*.s))

DATA_ASM_SRCS := $(wildcard $(DATA_ASM_SUBDIR)/*.s)
DATA_ASM_OBJS := $(patsubst $(DATA_ASM_SUBDIR)/%.s,$(DATA_ASM_BUILDDIR)/%.o,$(DATA_ASM_SRCS))

SONG_SRCS := $(wildcard $(SONG_SUBDIR)/*.s)
SONG_OBJS := $(patsubst $(SONG_SUBDIR)/%.s,$(SONG_BUILDDIR)/%.o,$(SONG_SRCS))

MID_SRCS := $(wildcard $(MID_SUBDIR)/*.mid)
MID_OBJS := $(patsubst $(MID_SUBDIR)/%.mid,$(MID_BUILDDIR)/%.o,$(MID_SRCS))

<<<<<<< HEAD
OBJS     := $(C_OBJS) $(GFLIB_OBJS) $(C_ASM_OBJS) $(ASM_OBJS) $(DATA_ASM_OBJS) $(SONG_OBJS) $(MID_OBJS)
OBJS_REL := $(patsubst $(OBJ_DIR)/%,%,$(OBJS))

SUBDIRS  := $(sort $(dir $(OBJS)))
$(shell mkdir -p $(SUBDIRS))
endif

AUTO_GEN_TARGETS :=

all: rom

tools: $(TOOLDIRS)

syms: $(SYM)

$(TOOLDIRS):
	@$(MAKE) -C $@

=======
OBJS     := $(C_OBJS) $(C_ASM_OBJS) $(ASM_OBJS) $(DATA_ASM_OBJS) $(SONG_OBJS) $(MID_OBJS)
OBJS_REL := $(patsubst $(OBJ_DIR)/%,%,$(OBJS))

SUBDIRS  := $(sort $(dir $(OBJS) $(dir $(TEST_OBJS))))
$(shell mkdir -p $(SUBDIRS))

# Pretend rules that are actually flags defer to `make all`
modern: all
compare: all
debug: all
# Uncomment the next line, and then comment the 4 lines after it to reenable agbcc.
#agbcc: all
agbcc:
	@echo "'make agbcc' is deprecated as of pokeemerald-expansion 1.9 and will be removed in 1.10."
	@echo "Search for 'agbcc: all' in Makefile to reenable agbcc."
	@exit 1

LD_SCRIPT_TEST := ld_script_test.ld

$(OBJ_DIR)/ld_script_test.ld: $(LD_SCRIPT_TEST)
	cd $(OBJ_DIR) && sed "s#tools/#../../tools/#g" ../../$(LD_SCRIPT_TEST) > ld_script_test.ld

$(TESTELF): $(OBJ_DIR)/ld_script_test.ld $(OBJS) $(TEST_OBJS) libagbsyscall tools check-tools
	@echo "cd $(OBJ_DIR) && $(LD) -T ld_script_test.ld -o ../../$@ <objects> <test-objects> <lib>"
	@cd $(OBJ_DIR) && $(LD) $(TESTLDFLAGS) -T ld_script_test.ld -o ../../$@ $(OBJS_REL) $(TEST_OBJS_REL) $(LIB)
	$(FIX) $@ -t"$(TITLE)" -c$(GAME_CODE) -m$(MAKER_CODE) -r$(REVISION) -d0 --silent
	$(PATCHELF) $(TESTELF) gTestRunnerArgv "$(TESTS:%*=%)\0"

ifeq ($(GITHUB_REPOSITORY_OWNER),rh-hideout)
TEST_SKIP_IS_FAIL := \x01
else
TEST_SKIP_IS_FAIL := \x00
endif

check: $(TESTELF)
	@cp $< $(HEADLESSELF)
	$(PATCHELF) $(HEADLESSELF) gTestRunnerHeadless '\x01' gTestRunnerSkipIsFail "$(TEST_SKIP_IS_FAIL)"
	$(ROMTESTHYDRA) $(ROMTEST) $(OBJCOPY) $(HEADLESSELF)

# Other rules
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
rom: $(ROM)
ifeq ($(COMPARE),1)
	@$(SHA1) rom.sha1
endif

<<<<<<< HEAD
# For contributors to make sure a change didn't affect the contents of the ROM.
compare: all

clean: mostlyclean clean-tools

clean-tools:
	@$(foreach tooldir,$(TOOLDIRS),$(MAKE) clean -C $(tooldir);)

mostlyclean: tidynonmodern tidymodern
	find sound -iname '*.bin' -exec rm {} +
	rm -f $(MID_SUBDIR)/*.s
	find . \( -iname '*.1bpp' -o -iname '*.4bpp' -o -iname '*.8bpp' -o -iname '*.gbapal' -o -iname '*.lz' -o -iname '*.rl' -o -iname '*.latfont' -o -iname '*.hwjpnfont' -o -iname '*.fwjpnfont' \) -exec rm {} +
	rm -f $(DATA_ASM_SUBDIR)/layouts/layouts.inc $(DATA_ASM_SUBDIR)/layouts/layouts_table.inc
	rm -f $(DATA_ASM_SUBDIR)/maps/connections.inc $(DATA_ASM_SUBDIR)/maps/events.inc $(DATA_ASM_SUBDIR)/maps/groups.inc $(DATA_ASM_SUBDIR)/maps/headers.inc
	find $(DATA_ASM_SUBDIR)/maps \( -iname 'connections.inc' -o -iname 'events.inc' -o -iname 'header.inc' \) -exec rm {} +
	rm -f $(AUTO_GEN_TARGETS)
	@$(MAKE) clean -C libagbsyscall

tidy: tidynonmodern tidymodern

tidynonmodern:
	rm -f $(ROM_NAME) $(ELF_NAME) $(MAP_NAME)
	rm -rf $(OBJ_DIR_NAME)

tidymodern:
	rm -f $(MODERN_ROM_NAME) $(MODERN_ELF_NAME) $(MODERN_MAP_NAME)
	rm -rf $(MODERN_OBJ_DIR_NAME)

ifneq ($(MODERN),0)
$(C_BUILDDIR)/berry_crush.o: override CFLAGS += -Wno-address-of-packed-member
endif

=======
syms: $(SYM)

clean: tidy clean-tools clean-check-tools clean-generated clean-assets
	@$(MAKE) clean -C libagbsyscall

clean-assets:
	rm -f $(MID_SUBDIR)/*.s
	rm -f $(DATA_ASM_SUBDIR)/layouts/layouts.inc $(DATA_ASM_SUBDIR)/layouts/layouts_table.inc
	rm -f $(DATA_ASM_SUBDIR)/maps/connections.inc $(DATA_ASM_SUBDIR)/maps/events.inc $(DATA_ASM_SUBDIR)/maps/groups.inc $(DATA_ASM_SUBDIR)/maps/headers.inc $(DATA_SRC_SUBDIR)/map_group_count.h
	find sound -iname '*.bin' -exec rm {} +
	find . \( -iname '*.1bpp' -o -iname '*.4bpp' -o -iname '*.8bpp' -o -iname '*.gbapal' -o -iname '*.lz' -o -iname '*.smol' -o -iname '*.fastSmol' -o -iname '*.smolTM' -o -iname '*.rl' -o -iname '*.latfont' -o -iname '*.hwjpnfont' -o -iname '*.fwjpnfont' \) -exec rm {} +
	find $(DATA_ASM_SUBDIR)/maps \( -iname 'connections.inc' -o -iname 'events.inc' -o -iname 'header.inc' \) -exec rm {} +

tidy: tidymodern tidycheck tidydebug

tidymodern:
	rm -f $(ROM_NAME) $(ELF_NAME) $(MAP_NAME)
	rm -rf $(OBJ_DIR_NAME)

tidycheck:
	rm -f $(TESTELF) $(HEADLESSELF)
	rm -rf $(OBJ_DIR_NAME_TEST)

tidydebug:
	rm -rf $(DEBUG_OBJ_DIR_NAME)

# Other rules
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
include graphics_file_rules.mk
include map_data_rules.mk
include spritesheet_rules.mk
include json_data_rules.mk
<<<<<<< HEAD
include songs.mk

%.s: ;
=======
include audio_rules.mk
include trainer_rules.mk

# NOTE: Tools must have been built prior (FIXME)
# so you can't really call this rule directly
generated: $(AUTO_GEN_TARGETS)
	@: # Silence the "Nothing to be done for `generated'" message, which some people were confusing for an error.


%.s:   ;
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
%.png: ;
%.pal: ;
%.aif: ;

<<<<<<< HEAD
%.1bpp: %.png  ; $(GFX) $< $@
%.4bpp: %.png  ; $(GFX) $< $@
%.8bpp: %.png  ; $(GFX) $< $@
%.gbapal: %.pal ; $(GFX) $< $@
%.gbapal: %.png ; $(GFX) $< $@
%.lz: % ; $(GFX) $< $@
%.rl: % ; $(GFX) $< $@
$(CRY_SUBDIR)/%.bin: $(CRY_SUBDIR)/%.aif ; $(AIF) $< $@ --compress
sound/%.bin: sound/%.aif ; $(AIF) $< $@


ifeq ($(MODERN),0)
$(C_BUILDDIR)/libc.o: CC1 := tools/agbcc/bin/old_agbcc$(EXE)
$(C_BUILDDIR)/libc.o: CFLAGS := -O2

$(C_BUILDDIR)/siirtc.o: CFLAGS := -mthumb-interwork

$(C_BUILDDIR)/agb_flash.o: CFLAGS := -O -mthumb-interwork
$(C_BUILDDIR)/agb_flash_1m.o: CFLAGS := -O -mthumb-interwork
$(C_BUILDDIR)/agb_flash_mx.o: CFLAGS := -O -mthumb-interwork

$(C_BUILDDIR)/m4a.o: CC1 := tools/agbcc/bin/old_agbcc$(EXE)

$(C_BUILDDIR)/record_mixing.o: CFLAGS += -ffreestanding
$(C_BUILDDIR)/librfu_intr.o: CC1 := tools/agbcc/bin/agbcc_arm$(EXE)
$(C_BUILDDIR)/librfu_intr.o: CFLAGS := -O2 -mthumb-interwork -quiet
else
$(C_BUILDDIR)/librfu_intr.o: CFLAGS := -mthumb-interwork -O2 -mabi=apcs-gnu -mtune=arm7tdmi -march=armv4t -fno-toplevel-reorder -Wno-pointer-to-int-cast
endif

ifeq ($(DINFO),1)
override CFLAGS += -g
endif

ifeq ($(DEBUG),1)
override ASFLAGS += --defsym DEBUG=1
override CPPFLAGS += -D DEBUG=1
override CFLAGS += -D DEBUG=1
endif

# The dep rules have to be explicit or else missing files won't be reported.
# As a side effect, they're evaluated immediately instead of when the rule is invoked.
# It doesn't look like $(shell) can be deferred so there might not be a better way.

ifeq ($(SCAN_DEPS),1)
ifeq ($(NODEP),1)
$(C_BUILDDIR)/%.o: $(C_SUBDIR)/%.c
ifeq (,$(KEEP_TEMPS))
	@echo "$(CC1) <flags> -o $@ $<"
	@$(CPP) $(CPPFLAGS) $< | $(PREPROC) $< charmap.txt -i | $(CC1) $(CFLAGS) -o - - | cat - <(echo -e ".text\n\t.align\t2, 0") | $(AS) $(ASFLAGS) -o $@ -
=======
%.1bpp:     %.png  ; $(GFX) $< $@
%.4bpp:     %.png  ; $(GFX) $< $@
%.8bpp:     %.png  ; $(GFX) $< $@
%.gbapal:   %.pal  ; $(GFX) $< $@
%.gbapal:   %.png  ; $(GFX) $< $@
%.lz:       %      ; $(GFX) $< $@
%.smolTM:   %      ; $(SMOLTM) $< $@
%.fastSmol: %      ; $(SMOL) -w $< $@ false false false
%.smol:     %      ; $(SMOL) -w $< $@
%.rl:       %      ; $(GFX) $< $@

clean-generated:
	@rm -f $(AUTO_GEN_TARGETS)
	@echo "rm -f <AUTO_GEN_TARGETS>"
	@rm -f $(ALL_LEARNABLES_JSON)
	@echo "rm -f <ALL_LEARNABLES_JSON>"

$(C_BUILDDIR)/librfu_intr.o: CFLAGS := -mthumb-interwork -O2 -mabi=apcs-gnu -mtune=arm7tdmi -march=armv4t -fno-toplevel-reorder -Wno-pointer-to-int-cast
$(C_BUILDDIR)/berry_crush.o: override CFLAGS += -Wno-address-of-packed-member
$(C_BUILDDIR)/agb_flash.o: override CFLAGS += -fno-toplevel-reorder
$(C_BUILDDIR)/pokedex_plus_hgss.o: CFLAGS := -mthumb -mthumb-interwork -O2 -mabi=apcs-gnu -mtune=arm7tdmi -march=armv4t -Wno-pointer-to-int-cast -std=gnu17 -Werror -Wall -Wno-strict-aliasing -Wno-attribute-alias -Woverride-init
# Annoyingly we can't turn this on just for src/data/trainers.h
$(C_BUILDDIR)/data.o: CFLAGS += -fno-show-column -fno-diagnostics-show-caret

# Needed for parity with pret
$(C_BUILDDIR)/graphics.o: override CFLAGS += -Wno-missing-braces

$(TEST_BUILDDIR)/%.o: CFLAGS := -mthumb -mthumb-interwork -O2 -mabi=apcs-gnu -mtune=arm7tdmi -march=armv4t -Wno-pointer-to-int-cast -Werror -Wall -Wno-strict-aliasing -Wno-attribute-alias -Woverride-init

# Dependency rules (for the *.c & *.s sources to .o files)
# Have to be explicit or else missing files won't be reported.

# As a side effect, they're evaluated immediately instead of when the rule is invoked.
# It doesn't look like $(shell) can be deferred so there might not be a better way (Icedude_907: there is soon).

$(C_BUILDDIR)/%.o: $(C_SUBDIR)/%.c
ifneq ($(KEEP_TEMPS),1)
	@echo "$(CC1) <flags> -o $@ $<"
	@$(CPP) $(CPPFLAGS) $< | $(PREPROC) -i $< charmap.txt | $(CC1) $(CFLAGS) -o - - | cat - <(echo -e ".text\n\t.align\t2, 0") | $(AS) $(ASFLAGS) -o $@ -
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
else
	@$(CPP) $(CPPFLAGS) $< -o $(C_BUILDDIR)/$*.i
	@$(PREPROC) $(C_BUILDDIR)/$*.i charmap.txt | $(CC1) $(CFLAGS) -o $(C_BUILDDIR)/$*.s
	@echo -e ".text\n\t.align\t2, 0\n" >> $(C_BUILDDIR)/$*.s
	$(AS) $(ASFLAGS) -o $@ $(C_BUILDDIR)/$*.s
endif
<<<<<<< HEAD
else
define C_DEP
$1: $2 $$(shell $(SCANINC) -I include -I tools/agbcc/include -I gflib $2)
ifeq (,$$(KEEP_TEMPS))
	@echo "$$(CC1) <flags> -o $$@ $$<"
	@$$(CPP) $$(CPPFLAGS) $$< | $$(PREPROC) $$< charmap.txt -i | $$(CC1) $$(CFLAGS) -o - - | cat - <(echo -e ".text\n\t.align\t2, 0") | $$(AS) $$(ASFLAGS) -o $$@ -
else
	@$$(CPP) $$(CPPFLAGS) $$< -o $$(C_BUILDDIR)/$3.i
	@$$(PREPROC) $$(C_BUILDDIR)/$3.i charmap.txt | $$(CC1) $$(CFLAGS) -o $$(C_BUILDDIR)/$3.s
	@echo -e ".text\n\t.align\t2, 0\n" >> $$(C_BUILDDIR)/$3.s
	$$(AS) $$(ASFLAGS) -o $$@ $$(C_BUILDDIR)/$3.s
endif
endef
$(foreach src, $(C_SRCS), $(eval $(call C_DEP,$(patsubst $(C_SUBDIR)/%.c,$(C_BUILDDIR)/%.o,$(src)),$(src),$(patsubst $(C_SUBDIR)/%.c,%,$(src)))))
endif

ifeq ($(NODEP),1)
$(GFLIB_BUILDDIR)/%.o: $(GFLIB_SUBDIR)/%.c $$(c_dep)
ifeq (,$(KEEP_TEMPS))
	@echo "$(CC1) <flags> -o $@ $<"
	@$(CPP) $(CPPFLAGS) $< | $(PREPROC) $< charmap.txt -i | $(CC1) $(CFLAGS) -o - - | cat - <(echo -e ".text\n\t.align\t2, 0") | $(AS) $(ASFLAGS) -o $@ -
else
	@$(CPP) $(CPPFLAGS) $< -o $(GFLIB_BUILDDIR)/$*.i
	@$(PREPROC) $(GFLIB_BUILDDIR)/$*.i charmap.txt | $(CC1) $(CFLAGS) -o $(GFLIB_BUILDDIR)/$*.s
	@echo -e ".text\n\t.align\t2, 0\n" >> $(GFLIB_BUILDDIR)/$*.s
	$(AS) $(ASFLAGS) -o $@ $(GFLIB_BUILDDIR)/$*.s
endif
else
define GFLIB_DEP
$1: $2 $$(shell $(SCANINC) -I include -I tools/agbcc/include -I gflib $2)
ifeq (,$$(KEEP_TEMPS))
	@echo "$$(CC1) <flags> -o $$@ $$<"
	@$$(CPP) $$(CPPFLAGS) $$< | $$(PREPROC) $$< charmap.txt -i | $$(CC1) $$(CFLAGS) -o - - | cat - <(echo -e ".text\n\t.align\t2, 0") | $$(AS) $$(ASFLAGS) -o $$@ -
else
	@$$(CPP) $$(CPPFLAGS) $$< -o $$(GFLIB_BUILDDIR)/$3.i
	@$$(PREPROC) $$(GFLIB_BUILDDIR)/$3.i charmap.txt | $$(CC1) $$(CFLAGS) -o $$(GFLIB_BUILDDIR)/$3.s
	@echo -e ".text\n\t.align\t2, 0\n" >> $$(GFLIB_BUILDDIR)/$3.s
	$$(AS) $$(ASFLAGS) -o $$@ $$(GFLIB_BUILDDIR)/$3.s
endif
endef
$(foreach src, $(GFLIB_SRCS), $(eval $(call GFLIB_DEP,$(patsubst $(GFLIB_SUBDIR)/%.c,$(GFLIB_BUILDDIR)/%.o, $(src)),$(src),$(patsubst $(GFLIB_SUBDIR)/%.c,%, $(src)))))
endif

ifeq ($(NODEP),1)
$(C_BUILDDIR)/%.o: $(C_SUBDIR)/%.s
	$(PREPROC) $< charmap.txt | $(CPP) -I include - | $(AS) $(ASFLAGS) -o $@
else
define SRC_ASM_DATA_DEP
$1: $2 $$(shell $(SCANINC) -I include -I "" $2)
	$$(PREPROC) $$< charmap.txt | $$(CPP) -I include - | $$(AS) $$(ASFLAGS) -o $$@
endef
$(foreach src, $(C_ASM_SRCS), $(eval $(call SRC_ASM_DATA_DEP,$(patsubst $(C_SUBDIR)/%.s,$(C_BUILDDIR)/%.o, $(src)),$(src))))
endif

ifeq ($(NODEP),1)
$(ASM_BUILDDIR)/%.o: $(ASM_SUBDIR)/%.s
	$(AS) $(ASFLAGS) -o $@ $<
else
define ASM_DEP
$1: $2 $$(shell $(SCANINC) -I include -I "" $2)
	$$(AS) $$(ASFLAGS) -o $$@ $$<
endef
$(foreach src, $(ASM_SRCS), $(eval $(call ASM_DEP,$(patsubst $(ASM_SUBDIR)/%.s,$(ASM_BUILDDIR)/%.o, $(src)),$(src))))
endif

ifeq ($(NODEP),1)
$(DATA_ASM_BUILDDIR)/%.o: $(DATA_ASM_SUBDIR)/%.s
	$(PREPROC) $< charmap.txt | $(CPP) -I include - | $(AS) $(ASFLAGS) -o $@
else
$(foreach src, $(REGULAR_DATA_ASM_SRCS), $(eval $(call SRC_ASM_DATA_DEP,$(patsubst $(DATA_ASM_SUBDIR)/%.s,$(DATA_ASM_BUILDDIR)/%.o, $(src)),$(src))))
endif
endif

$(SONG_BUILDDIR)/%.o: $(SONG_SUBDIR)/%.s
	$(AS) $(ASFLAGS) -I sound -o $@ $<
=======

$(C_BUILDDIR)/%.d: $(C_SUBDIR)/%.c
	$(SCANINC) -M $@ $(INCLUDE_SCANINC_ARGS) -I tools/agbcc/include $<

ifneq ($(NODEP),1)
-include $(addprefix $(OBJ_DIR)/,$(C_SRCS:.c=.d))
endif

ifeq ($(TEST),1)
$(TEST_BUILDDIR)/%.o: $(TEST_SUBDIR)/%.c
	@echo "$(CC1) <flags> -o $@ $<"
	@$(CPP) $(CPPFLAGS) $< | $(PREPROC) -i $< charmap.txt | $(CC1) $(CFLAGS) -o - - | cat - <(echo -e ".text\n\t.align\t2, 0") | $(AS) $(ASFLAGS) -o $@ -

$(TEST_BUILDDIR)/%.d: $(TEST_SUBDIR)/%.c
	$(SCANINC) -M $@ $(INCLUDE_SCANINC_ARGS) -I tools/agbcc/include $<

ifneq ($(NODEP),1)
-include $(addprefix $(OBJ_DIR)/,$(TEST_SRCS:.c=.d))
endif
endif

$(ASM_BUILDDIR)/%.o: $(ASM_SUBDIR)/%.s
	$(AS) $(ASFLAGS) -o $@ $<

$(ASM_BUILDDIR)/%.d: $(ASM_SUBDIR)/%.s
	$(SCANINC) -M $@ $(INCLUDE_SCANINC_ARGS) -I "" $<

ifneq ($(NODEP),1)
-include $(addprefix $(OBJ_DIR)/,$(ASM_SRCS:.s=.d))
endif

$(C_BUILDDIR)/%.o: $(C_SUBDIR)/%.s
	$(PREPROC) $< charmap.txt | $(CPP) $(INCLUDE_SCANINC_ARGS) - | $(PREPROC) -ie $< charmap.txt | $(AS) $(ASFLAGS) -o $@

$(C_BUILDDIR)/%.d: $(C_SUBDIR)/%.s
	$(SCANINC) -M $@ $(INCLUDE_SCANINC_ARGS) -I "" $<

ifneq ($(NODEP),1)
-include $(addprefix $(OBJ_DIR)/,$(C_ASM_SRCS:.s=.d))
endif

$(DATA_ASM_BUILDDIR)/%.o: $(DATA_ASM_SUBDIR)/%.s
	$(PREPROC) $< charmap.txt | $(CPP) $(INCLUDE_SCANINC_ARGS) - | $(PREPROC) -ie $< charmap.txt | $(AS) $(ASFLAGS) -o $@

$(DATA_ASM_BUILDDIR)/%.d: $(DATA_ASM_SUBDIR)/%.s
	$(SCANINC) -M $@ $(INCLUDE_SCANINC_ARGS) -I "" $<

ifneq ($(NODEP),1)
-include $(addprefix $(OBJ_DIR)/,$(REGULAR_DATA_ASM_SRCS:.s=.d))
endif
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

$(OBJ_DIR)/sym_bss.ld: sym_bss.txt
	$(RAMSCRGEN) .bss $< ENGLISH > $@

$(OBJ_DIR)/sym_common.ld: sym_common.txt $(C_OBJS) $(wildcard common_syms/*.txt)
	$(RAMSCRGEN) COMMON $< ENGLISH -c $(C_BUILDDIR),common_syms > $@

$(OBJ_DIR)/sym_ewram.ld: sym_ewram.txt
	$(RAMSCRGEN) ewram_data $< ENGLISH > $@

<<<<<<< HEAD
ifeq ($(MODERN),0)
LD_SCRIPT := ld_script.ld
LD_SCRIPT_DEPS := $(OBJ_DIR)/sym_bss.ld $(OBJ_DIR)/sym_common.ld $(OBJ_DIR)/sym_ewram.ld
else
LD_SCRIPT := ld_script_modern.ld
LD_SCRIPT_DEPS :=
endif

$(OBJ_DIR)/ld_script.ld: $(LD_SCRIPT) $(LD_SCRIPT_DEPS)
	cd $(OBJ_DIR) && sed "s#tools/#../../tools/#g" ../../$(LD_SCRIPT) > ld_script.ld

LDFLAGS = -Map ../../$(MAP)
$(ELF): $(OBJ_DIR)/ld_script.ld $(OBJS) libagbsyscall
	@echo "cd $(OBJ_DIR) && $(LD) $(LDFLAGS) -T ld_script.ld -o ../../$@ <objects> <lib>"
	@cd $(OBJ_DIR) && $(LD) $(LDFLAGS) -T ld_script.ld --print-memory-usage -o ../../$@ $(OBJS_REL) $(LIB) | cat
	$(FIX) $@ -t"$(TITLE)" -c$(GAME_CODE) -m$(MAKER_CODE) -r$(REVISION) --silent

=======
TEACHABLE_DEPS := $(ALL_LEARNABLES_JSON) $(shell find data/ -type f -name '*.inc') $(INCLUDE_DIRS)/constants/tms_hms.h $(INCLUDE_DIRS)/config/pokemon.h $(C_SUBDIR)/pokemon.c

$(LEARNSET_HELPERS_BUILD_DIR):
	@mkdir -p $@

$(ALL_LEARNABLES_JSON): $(wildcard $(LEARNSET_HELPERS_DATA_DIR)/*.json) | $(LEARNSET_HELPERS_BUILD_DIR)
	python3 $(LEARNSET_HELPERS_DIR)/make_learnables.py $(LEARNSET_HELPERS_DATA_DIR) $@

$(DATA_SRC_SUBDIR)/pokemon/teachable_learnsets.h: $(TEACHABLE_DEPS)
	python3 $(LEARNSET_HELPERS_DIR)/make_teachables.py $<

# Linker script
LD_SCRIPT := ld_script_modern.ld

# Final rules

libagbsyscall:
	@$(MAKE) -C libagbsyscall TOOLCHAIN=$(TOOLCHAIN) MODERN=1

# Enable LTO LDFLAGS if set
ifneq ($(LTO),0)
LDFLAGS := -march=armv4t -mabi=apcs-gnu -mcpu=arm7tdmi -Xlinker -Map=../../$(MAP) -Xlinker --print-memory-usage -Xassembler -meabi=5 -Xassembler -march=armv4t -Xassembler -mcpu=arm7tdmi -Xlinker --gc-sections
LDFLAGS += -Xlinker -flto=auto
$(ELF): $(LD_SCRIPT) $(OBJS) libagbsyscall
	@echo "cd $(OBJ_DIR) && $(ARMCC) $(LDFLAGS) -T ../../$< -o ../../$@ <objs> <libs>"
	+@cd $(OBJ_DIR) && $(ARMCC) $(LDFLAGS) -T ../../$< -o ../../$@ $(OBJS_REL) $(LIB)
	$(FIX) $@ -t"$(TITLE)" -c$(GAME_CODE) -m$(MAKER_CODE) -r$(REVISION) --silent
else
# Output .map file, memory usage readout and gc sections to clean-up unused data
LDFLAGS = -Map ../../$(MAP) --print-memory-usage --gc-sections
$(ELF): $(LD_SCRIPT) $(OBJS) libagbsyscall
	@cd $(OBJ_DIR) && $(LD) $(LDFLAGS) -T ../../$<  -o ../../$@ $(OBJS_REL) $(LIB) | cat
	@echo "cd $(OBJ_DIR) && $(LD) $(LDFLAGS) -T ../../$< -o ../../$@ <objs> <libs> | cat"
	$(FIX) $@ -t"$(TITLE)" -c$(GAME_CODE) -m$(MAKER_CODE) -r$(REVISION) --silent
endif

# Builds the rom from the elf file
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
$(ROM): $(ELF)
	$(OBJCOPY) -O binary $< $@
	$(FIX) $@ -p --silent

<<<<<<< HEAD
modern: all

libagbsyscall:
	@$(MAKE) -C libagbsyscall TOOLCHAIN=$(TOOLCHAIN) MODERN=$(MODERN)

###################
### Symbol file ###
###################

=======
# Symbol file (`make syms`)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
$(SYM): $(ELF)
	$(OBJDUMP) -t $< | sort -u | grep -E "^0[2389]" | $(PERL) -p -e 's/^(\w{8}) (\w).{6} \S+\t(\w{8}) (\S+)$$/\1 \2 \3 \4/g' > $@
