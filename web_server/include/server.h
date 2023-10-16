/*
server.h
*/
#ifndef Server_H
#define Server_H

#include <sys/types.h>
#include <sys/socket.h>
#include <stdbool.h>

struct Server
{
    int domain;
    int protocol;
    sa_family_t sa_family;


}

int sum_two(int, int);



#endif
