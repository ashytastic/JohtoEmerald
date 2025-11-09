CXX ?= g++

CXXFLAGS := -std=c++11 -O2 -Wall -Wno-switch -Werror

SRCS := agb.cpp error.cpp main.cpp midi.cpp tables.cpp

HEADERS := agb.h error.h main.h midi.h tables.h

<<<<<<< HEAD
=======
# Needs to recompile for B_NUM_LOW_HEALTH_BEEPS in battle.h
EXPANSION_BATTLE_CONFIG := ../../include/config/battle.h

>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE :=
endif

.PHONY: all clean

all: mid2agb$(EXE)
	@:

<<<<<<< HEAD
mid2agb$(EXE): $(SRCS) $(HEADERS)
=======
mid2agb$(EXE): $(SRCS) $(HEADERS) $(EXPANSION_BATTLE_CONFIG)
>>>>>>> 8eea132406f53e5857d1eec72181867b469bddfc
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ $(LDFLAGS)

clean:
	$(RM) mid2agb mid2agb.exe
