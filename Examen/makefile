.PHONY: all clean

CC = gcc
#CFLAGS = -g
CFLAGS =
PROGS = intlist tconvert countchar1 countchar2 revert counting intlist

all: $(PROGS)

% : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(PROGS)

