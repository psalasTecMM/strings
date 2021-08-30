SHELL = /bin/sh

srcdir = .

# Target Variables
target := strings

# Source files
csrcs := $(wildcard *.c)
cxxsrcs := $(wildcard *.cpp)

# Object files
objects := $(csrcs:%.c=%.o)
objects += $(cxxsrcs:%.cpp=%.o)

CPPFLAGS += -Wall

CXXFLAGS += -std=c++11

# Make commands

all: $(target)

.PHONY : clean
clean:
	rm -rf $(target) $(objects)

# Build rules

$(target): $(objects)
	$(CXX) $(LDFLAGS) $(LDLIBS) $^ $(OUTPUT_OPTION)

%.o : %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< $(OUTPUT_OPTION)

%.o : %.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< $(OUTPUT_OPTION)