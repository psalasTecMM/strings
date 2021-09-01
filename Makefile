SHELL = /bin/sh

srcdir = .

# Target Variables
target := strings

# Source files
csrcs := $(wildcard *.c)

# Object files
objects := $(csrcs:%.c=%.o)

CPPFLAGS += -Wall

# Make commands

all: $(target)

.PHONY : clean
clean:
	rm -rf $(target) $(objects)

# Build rules

$(target): $(objects)
	$(CC) $(LDFLAGS) $(LDLIBS) $^ $(OUTPUT_OPTION)

%.o : %.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< $(OUTPUT_OPTION)