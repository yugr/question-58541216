#include <log.h>

#include <dlfcn.h>
Log *log;

int main() {
  dlopen("./libfoo.so", RTLD_NOW);
  log = new Log(true);  // Force libutil
  return 0;
}
