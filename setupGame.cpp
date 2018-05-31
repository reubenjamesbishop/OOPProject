#include <iostream>
#include "person.h"
#include <string>
using namespace std;

//Runs the inital game set up / creates a pointer to a person called player
person* setupGame() {

  string startIn;
  cout << "Are you ready to play?" << endl;
  cout << "Please type yes (y) or no (n): " << endl;
  cin >> startIn;
  while (startIn !="y") {
    cout << "Sorry, I said are you ready to play?" << endl;
    cin >> startIn;
  }

  string myName;
  cout << endl;
  cout << "Okay sweet yeah, let's go..." << endl;
  cout << endl;
  cout << "Please input your name:" << endl;
  cin >> myName;
  cout << endl;
  cout << "Well, " << myName << ". Let's play...";
  person* player  = new person(myName);
  cout << endl;
  cout << endl;
  cout  << "Your life points are " << player->get_lifePoints() << "." << endl;

  //THE FOLLOWING IS A TESTING BLOCK TO DISPLAY THAT THE ARRAY OF OBJECTS IS WORKING
  /*cout << "TESTING: The name and stats of all your body parts are listed below (name, hitRange, isActive, isFatal, hitsLeft, damageToPlayer): " << endl;
  for (int i=0;i<6;i++) {
    bodypart* currentPart = (player->get_partList())[i];
    cout << currentPart->get_name() << ", " << currentPart->get_hitRange() << ", " << currentPart->get_isActive() << ", " << currentPart->get_isFatal() << ", " << currentPart->get_hitsLeft() << ", " << currentPart->get_damageToPlayer() << "." << endl;
  }
  cout << endl;*/

  return player;
}
