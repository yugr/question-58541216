#ifndef STDWRITER_H
#define STDWRITER_H

#include <writer.h>

class StdStreamWriter : public IWriter {
public:
  virtual void write() override;
};

#endif
