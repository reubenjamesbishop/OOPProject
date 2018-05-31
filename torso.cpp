#include "bodypart.h"
#include "torso.h"
#include <string>
#include <iostream>

torso::torso():bodypart(){
  hitRange=20;
  isFatal=false;
  hitsLeft=3;
  damageToPlayer=50;
}

torso::torso(std::string pName):bodypart(pName) {
  hitRange=20;
  isFatal=false;
  hitsLeft=3;
  damageToPlayer=50;
}

int torso::get_damageToPlayer()
{
  //std::cout << "TESTING: returning " << damageToPlayer << std::endl;
  return damageToPlayer;
}

torso::~torso(){}
