#include <log.h>
#include <stdwriter.h>

Log::Log(bool flag) {
  writer = flag ? new StdStreamWriter : 0;
}

IWriter *Log::getWriter() {
  return writer;
}
