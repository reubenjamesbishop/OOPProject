#include <iostream>
#include "bodypart.h"
#include "arm.h"
#include <string>
using namespace std;



arm::arm()/*:bodypart()*/{
  hitRange=10;
  isFatal=false;
  hitsLeft=2;
  damageToPlayer=10;
}

arm::arm(std::string pName):bodypart(pName) {
  hitRange=10;
  isFatal=false;
  hitsLeft=2;
  damageToPlayer=10;
}


int arm::get_damageToPlayer()
{
  //std::cout << "TESTING(ARM): Returning: " << damageToPlayer << std::endl;
  return damageToPlayer;
}

arm::~arm(){}
