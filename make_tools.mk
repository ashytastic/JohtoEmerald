<<<<<<< HEAD
=======
# This controls building executables in the `tools` folder.
# Can be invoked through the `Makefile` or standalone.
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc

MAKEFLAGS += --no-print-directory

# Inclusive list. If you don't want a tool to be built, don't add it here.
<<<<<<< HEAD
TOOLDIRS := tools/aif2pcm tools/bin2c tools/gbafix tools/gbagfx tools/jsonproc tools/mapjson tools/mid2agb tools/preproc tools/ramscrgen tools/rsfont tools/scaninc

.PHONY: all $(TOOLDIRS)

all: $(TOOLDIRS)

$(TOOLDIRS):
	@$(MAKE) -C $@
=======
TOOLS_DIR := tools
TOOL_NAMES := aif2pcm bin2c gbafix gbagfx jsonproc mapjson mid2agb preproc ramscrgen rsfont scaninc trainerproc compresSmol
CHECK_TOOL_NAMES = patchelf mgba-rom-test-hydra

TOOLDIRS := $(TOOL_NAMES:%=$(TOOLS_DIR)/%)
CHECKTOOLDIRS := $(CHECK_TOOL_NAMES:%=$(TOOLS_DIR)/%)

# Tool making doesnt require a pokeemerald dependency scan.
RULES_NO_SCAN += tools check-tools clean-tools clean-check-tools history $(TOOLDIRS) $(CHECKTOOLDIRS)
.PHONY: $(RULES_NO_SCAN)

tools: history $(TOOLDIRS)

check-tools: $(CHECKTOOLDIRS)

$(TOOLDIRS):
	@$(MAKE) -C $@

$(CHECKTOOLDIRS):
	@$(MAKE) -C $@

clean-tools:
	@$(foreach tooldir,$(TOOLDIRS),$(MAKE) clean -C $(tooldir);)

clean-check-tools:
	@$(foreach tooldir,$(CHECKTOOLDIRS),$(MAKE) clean -C $(tooldir);)

history:
	@$(SHELL) ./check_history.sh
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
