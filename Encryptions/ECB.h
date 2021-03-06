// Electronic Codebook
#ifndef __ECB__
#define __ECB__

#include "../common/includes.h"
#include "SymAlg.h"

class ECB{
  private:
    SymAlg * algo;
    uint8_t blocksize;

  public:
    ECB(SymAlg * instance, const std::string & iv = "");
    std::string encrypt(const std::string & data);
    std::string decrypt(const std::string & data);
};
#endif
