CC = clang
CFLAGS = -Wall -O2 -std=gnu99
LDFLAGS =

all: create_asm
%.o: %.c config.h
	$(CC) -c $(CFLAGS) $<
create_asm: io.o translate.o main.o
	$(CC) -o $@ $^ $(LDFLAGS)
clean:
	rm -f *.o create_asm
