#ifndef _MAIN_H
#define _MAIN_H
/* close syscall */
#include <unistd.h>
/* malloc, free */
#include <stdlib.h>
/* open syscall */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
