#ifndef TORSO_H
#define TORSO_H
#include <string>

class torso :public bodypart
{
  public:
    torso();
    torso(std::string pName);

    int get_damageToPlayer();
    ~torso();

  protected:
  private:
};

#endif //TORSO_H
