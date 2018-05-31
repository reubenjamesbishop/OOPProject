#include <iostream>
#include "bodypart.h"
#include "leg.h"
using namespace std;

leg::leg():bodypart() {
  hitRange=15;
  isFatal=false;
  hitsLeft=2;
  damageToPlayer=15;
}

leg::leg(std::string pName):bodypart(pName) {
  hitRange=15;
  isFatal=false;
  hitsLeft=2;
  damageToPlayer=15;
}


int leg::get_damageToPlayer()
{
  //std::cout << "TESTING: Returning get_damageToPlayer" << std::endl;
  return damageToPlayer; //Need to do something cool here
}

leg::~leg(){}
