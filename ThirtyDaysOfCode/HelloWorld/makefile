CC := $(CXX)

CXXFLAGS += -MMD -MP

CXXFLAGS += -std=c++0x
CXXFLAGS += -fdiagnostics-show-option -fmessage-length=0 -W -Wall -Werror
CXXFLAGS += -Wformat=2 -Wformat-y2k
CXXFLAGS += -Wignored-qualifiers
CXXFLAGS += -Wmissing-include-dirs
CXXFLAGS += -Wunused-parameter
CXXFLAGS += -Wfloat-equal
CXXFLAGS += -Wundef
CXXFLAGS += -Wshadow
CXXFLAGS += -Wpointer-arith
CXXFLAGS += -Wcast-qual
CXXFLAGS += -Wcast-align
CXXFLAGS += -Wconversion
CXXFLAGS += -Wsign-conversion
CXXFLAGS += -Wlogical-op
CXXFLAGS += -Wmissing-declarations
CXXFLAGS += -Wmissing-field-initializers
CXXFLAGS += -Wmissing-format-attribute
CXXFLAGS += -Wredundant-decls

application: application.o solution.o

application.o: | run_test

test: test.o solution.o
test: LDLIBS += -lgtest -lpthread
test: LDFLAGS += -L/usr/lib64/gtest

run_test: test
	./test

clean:
	$(RM) application test *.[do]

 -include *.d

.PHONY: clean run_test
