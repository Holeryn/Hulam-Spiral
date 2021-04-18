SRC_FILES = primes.c Uspiral.c include/gfx.c
CC_FLAGS = -std=c99 -Wall -g -Wextra -lX11
CC = gcc

all:
	${CC} ${SRC_FILES} ${CC_FLAGS} -o hulam_spiral.o

clean:
	rm -rf *~ *.o *.out output
