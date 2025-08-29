//! @file
//! @brief  Retargeting functions for standard I/O
//! @author Martin Cejp

#pragma once

#include <sys/stat.h>
#include <sys/types.h>

#ifdef __cplusplus
extern "C" {
#endif

int _isatty(int fd);
int _write(int fd, char* ptr, int len);
int _open(const char *pathname, int flags, mode_t mode);
int _close(int fd);
int _lseek(int fd, int ptr, int dir);
int _read(int fd, char* ptr, int len);
int _fstat(int fd, struct stat* st);
pid_t _getpid(void);
int _kill(pid_t pid, int sig);

#ifdef __cplusplus
}
#endif
