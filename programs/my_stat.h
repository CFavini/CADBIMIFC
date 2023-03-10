#ifndef MY_STAT_H
#define MY_STAT_H

#include "../src/config.h"

#ifdef HAVE_SYS_STAT_H
#  include <sys/stat.h>
#else
#  include <stdint.h>
#  if defined _MSC_VER
struct _stat
#  else
struct stat
#  endif
{
  uint32_t st_dev;
  uint32_t st_ino;
  uint16_t st_mode;
  int16_t st_nlink;
  int16_t st_uid;
  int16_t st_gid;
  uint32_t st_rdev;
  size_t st_size;
  size_t st_atime;
  size_t st_mtime;
  size_t st_ctime;
};
#endif

#if defined _MSC_VER
typedef struct _stat struct_stat_t;
int _access (const char *path, int mode);

#  define access(fn, m) _access (fn, m)
#  define S_ISREG(m) ((m & 0170000) == _S_IFREG)
#  ifndef W_OK
#    define W_OK 0
#  endif

#else
typedef struct stat struct_stat_t;
#endif // _MSC_VER

#endif // MY_STAT_H
