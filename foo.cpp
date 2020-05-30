#include <log.h>

__attribute__((visibility("default"))) Log *foo() {
  return new Log(true);
}
