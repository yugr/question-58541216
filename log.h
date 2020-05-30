#ifndef UTIL_H
#define UTIL_H

#include <writer.h>

class Log {
  IWriter *writer;
public:
  Log(bool flag);
  IWriter *getWriter();
};

#endif
