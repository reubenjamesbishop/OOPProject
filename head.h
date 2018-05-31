#ifndef HEAD_H
#define HEAD_H
#include "bodypart.h"
#include <string>

class head : public bodypart
{
public:
  head();
  head(std::string pName);

  int get_damageToPlayer();

  ~head();
protected:
private:
};

#endif //HEAD_H
