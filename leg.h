#ifndef LEG_H
#define LEG_H
#include "bodypart.h"

class leg : public bodypart
{
public:
  leg();
  leg(std::string pName);

  int get_damageToPlayer();

  ~leg();

protected:
private:
};

#endif //LEG_H
