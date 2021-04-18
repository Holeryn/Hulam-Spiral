#include "primes.h"

// I stand for insecure, to much test can
// increase too much the time complexity
// Return :
// -1 : in case of error
// 0 : end of file
// other : length of the line in bytes
// Reading line after recevied 0 or -1 is probaably UB
static int Iread_line(int fd, char *line);

int Gprimes(int primes[LENGTH]){
  int fd;
  int i;

  char *line;
  line = malloc(sizeof(char) * 5); // The biggest number in the file is 5 digit long

  assert((fd = open(FILE_NAME, O_RDONLY)) != -1);

  puts("Collecting the primes...");
  for(i = 0; Iread_line(fd,line) != 0; i++)
    primes[i] = strtol(line, NULL, 10);

  free(line);
  assert(close(fd) != -1);

  return i;
}


static int Iread_line(int fd, char *line){
  ssize_t numRead;
  char ch;

  int bytes = 0;

  for(;;){
    numRead = read(fd,&ch,1);

    if(numRead == -1){
      return -1;
    }

    if(numRead == 0){ // EOF
      return 0;
    }

    if(ch == '\n'){
      *line = '\0';
      return bytes;
    }

    bytes++;
    *line++ = ch;
  }
}
