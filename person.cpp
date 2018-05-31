#include "person.h"
#include "bodypart.h"
#include "head.h"
#include "torso.h"
#include "arm.h"
#include "leg.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

person::person() {
	playerName = "?";
	playerHead = new head("Head");
	playerTorso = new torso("Torso");
	playerArm1 = new arm("Left Arm");
	playerArm2 = new arm("Right Arm");
	playerLeg1 = new leg("Left Leg");
	playerLeg2 = new leg("Right Leg");
	playerParts = new bodypart*[6];
	playerParts[0] = playerHead;
	playerParts[1] = playerTorso;
	playerParts[2] = playerArm1;
	playerParts[3] = playerArm2;
	playerParts[4] = playerLeg1;
	playerParts[5] = playerLeg2;
	missRange = 25;
	lifePoints = 100;
	alive = true;
}

person::person(std::string pName) {
	playerName=pName;
	playerHead = new head("Head");
	playerTorso = new torso("Torso");
	playerArm1 = new arm("Left Arm");
	playerArm2 = new arm("Right Arm");
	playerLeg1 = new leg("Left Leg");
	playerLeg2 = new leg("Right Leg");
	playerParts = new bodypart*[6];
	playerParts[0] = playerHead;
	playerParts[1] = playerTorso;
	playerParts[2] = playerArm1;
	playerParts[3] = playerArm2;
	playerParts[4] = playerLeg1;
	playerParts[5] = playerLeg2;
	missRange = 25;
	lifePoints=100;
	alive=true;
}


std::string person::get_playerName() { return playerName; }

int person::get_lifePoints() { return lifePoints; }

bool person::get_alive() { return alive; }

int person::get_missRange() { return missRange; }

bodypart** person::get_partList() { return playerParts; }


bodypart* person::determine_affectedPart()
{

	srand( time( NULL ) ); //Setting seed for true random number between 1-100
	int x = rand() % 100+1;

	//x=30; //Hardcoded for testing

	std::cout << std::endl;
	std::cout << "You rolled: ";
	std::cout << x << std::endl;

		//Number intervals determine which part has been hit
		if (x>0 && x<=25){ return NULL;} //25% chance of miss (returns null i.e. no part hit)
		if (x>25 && x<=45){ return playerTorso;} //20% chance of torso
		if (x>45 && x<=55){ return playerArm1;} //10% chance of left arm
		if (x>55 && x<=65){ return playerArm2;} //etc...
		if (x>65 && x<=80){ return playerLeg1;}
		if (x>80 && x<=95){ return playerLeg2;}
		if (x>95 && x<=100){ return playerHead;}
	}

void person::take_damage(bodypart* affectedPart)
{
	if(affectedPart != NULL && affectedPart->get_damageToPlayer()<0){
		affectedPart->set_hitsLeft();
		std::cout << std::endl; //If magic pickle has been activated tells player what happened
		std::cout << "You have been hit in the head by the magic pickle!" << std::endl;
		std::cout << "You will now receive extra life" << std::endl;
		std::cout << "You have sustained: " << affectedPart->get_damageToPlayer() << " damage." << std::endl;
		lifePoints -= affectedPart->get_damageToPlayer(); //NULL means miss so do not subtract health points
	}else{
		affectedPart->set_hitsLeft(); //Tells player what has happened in the turn
		std::cout << std::endl;
		std::cout << "You have sustained: " << affectedPart->get_damageToPlayer() << " damage." << std::endl;
		lifePoints -= affectedPart->get_damageToPlayer(); //NULL means miss so do not subtract health poin
	}
}

person::~person(){
	for (int i =0; i<6;i++) {
		delete playerParts[i]; //Memory management (used NEW so must use DELETE)
	}

}
