#ifndef PRIMES
#define PRIMES

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <fcntl.h>


#define LENGTH 1000000
#define FILE_NAME "primes-to-100k.txt"


// Get a primes vector from "primes-to-100k.txt"
// return the number of primes readed
int Gprimes(int primes[LENGTH]);

#endif
