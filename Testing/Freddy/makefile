# This is Freddy's testing makefile.
# Use 'make' command to compile.
# Run compiled programme with './frd'
# USE TAB NOT SPACES WHEN REQUIRED!


# Use the GNU C compiler.
CC = gcc-4.9.2

# Flags.
CFLAGS = -g -fopenmp

# Shortcut for working directory.
$(shell basename $(WKDIR))


# Compile instructions.
all: frd clean


# Freddy's test build.
frd: main.o
	$(CC) $(CFLAGS) main.o -o frd

main.o: $(WKDIR)main.c $(WKDIR)frdsFuncs.h
	$(CC) $(CFLAGS) -c $(WKDIR)main.c


# Clean up.
.PHONY: clean

clean:
	rm -f $@ $(WKDIR)*.o $(WKDIR)*~ $(WKDIR)*#