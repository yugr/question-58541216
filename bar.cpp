#include <log.h>

__attribute__((visibility("default"))) Log *bar() {
  return new Log(false);
}
