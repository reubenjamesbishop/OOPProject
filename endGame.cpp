#include <iostream>
#include "person.h"
using namespace std;

void endGame (person* playerPointer, int round_counter) {

  //Ends the game / Tells the player how many rounds they have survived 
  cout << endl;
  cout << "You have died!" << endl;
  cout << "You survived for " << round_counter<< " rounds." << endl;

}
