# This is Bryony's testing makefile.
# Use 'make' command to compile.
# Run compiled programme with './bry'
# USE TAB NOT 4 SPACES WHEN REQUIRED!


# Use the GNU C compiler.
cc = gcc

# Flags.
CFLAGS = -g

# Shortcut for working directory.
$(shell basename $(WKDIR))


# Compile instructions.
all: bry clean


# Bryony's test build.
bry: main.o
	$(CC) $(CFLAGS) main.o -o bry

main.o: $(WKDIR)main.c $(WKDIR)../Arc/globals/global.h $(WKDIR)brysFuncs.h
	$(CC) $(CFLAGS) -c $(WKDIR)main.c


# Clean up.
.PHONY: clean

clean:
	rm -f $@ $(WKDIR)*.o $(WKDIR)*~ $(WKDIR)*#