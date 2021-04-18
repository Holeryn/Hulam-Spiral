#ifndef UNIX_SOCKET
#define UNIX_SOCKET

#include <sys/socket.h>
/*
 * Create and bind a SOKC_DGRAM unix socket

 * Return : -1 on error, file descriptor on success
 */
int SUnixConnect(const char *name,const struct sockaddr_un addr);

#endif
