#ifndef ARM_H
#define ARM_H
#include "bodypart.h"

class arm : public bodypart
{
public:
  arm();
  arm(std::string pName);

  int get_damageToPlayer();

  ~arm();

protected:
private:
};

#endif //ARM_H
