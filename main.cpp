#include <iostream>
#include "person.h"
#include "bodypart.h"
#include <string>

using namespace std;

extern person* setupGame();
extern void endGame(person* playerPointer, int round_counter);

 int main()
 {
   person* player;
   player = setupGame();
   int counter = 0; //Keeps track of how many rounds you survived

   //Here is where the game loop goes
   bodypart* affectedPart;
   string turn;
   while(player->get_lifePoints() > 0){

     //user input section
     do {
       cout << endl;
       cout << "Press (y) to take a hit!" << endl;
       cin >> turn;
     } while (turn !="y" && player->get_lifePoints()>0);
        counter++; //Keep track of how many rounds the player survives

    //Determines the affected Part
    affectedPart = player->determine_affectedPart();
    if(affectedPart != NULL){
    cout << "The following bodypart has been hit: " << affectedPart->get_name() << endl;
     player->take_damage(affectedPart);
   }else{
     cout << "Looks like they missed..." << endl;
   }

  cout << "Your remaining life points are: " << player->get_lifePoints() << endl;
   }

   //Calls function to end the game
   endGame(player, counter);

   delete player; //Memory management (used NEW so must use DELETE)
   return 0;
 }
