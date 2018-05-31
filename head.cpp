#include <iostream>
#include "bodypart.h"
#include "head.h"
#include <string>
using namespace std;

head::head()/*:bodypart()*/{
  hitRange=5;
  isFatal=true;
  hitsLeft=1;
  damageToPlayer=100;
}

head::head(std::string pName):bodypart(pName){
  hitRange=5;
  isFatal=true;
  hitsLeft=1;
  damageToPlayer=100;
} // This syntax here implements the parents functionaity without typing it explicitely.


int head::get_damageToPlayer()
{
  
    return (-damageToPlayer);
}

head::~head(){}
