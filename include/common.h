#ifndef COMMON
#define COMMON

#include <stdio.h>

#define COMMON_BACKLOG 10

#define FILE_PERMISSION_COMMON (S_IRUSR | S_IWUSR | S_IRGRP |S_IWGRP)

#define NOTIFY_SIG SIGUSR1

#define CHECK_FUNC_COMMON(m,corpo) if(m == -1) {corpo}

#define ERROR_COMMON(m)	perror("Si è verificato un errore mentre: "#m); \
  return -1;

#define ERROR_COMMON_POINTER(m) perror("Si è verificato un errore mentre: "#m); \
  return NULL;

#endif