#ifndef PERSON_H
#define PERSON_H
#include "bodypart.h"
#include "head.h"
#include "torso.h"
#include "arm.h"
#include "leg.h"
#include <string>

class person
{
public:

	person();
	person(std::string pName);


	std::string playerName; //The players name (Private because once made can't be changed)
	bool alive;
	int lifePoints; //The players total health can only be influenced by it's children (i.e. bodyparts)
	int missRange;

	bodypart** playerParts;
	head* playerHead; //Declare objects for each of the parts
	torso* playerTorso;
	arm* playerArm1;
	arm* playerArm2;
	leg* playerLeg1;
	leg* playerLeg2;

	std::string get_playerName();
	int get_lifePoints();
	bool get_alive();
	int get_missRange();
	bodypart** get_partList();

	void take_damage(bodypart* affectedPart); //When limbs are hit they affect the lifepoints
	bodypart* determine_affectedPart();

	~person();

protected:
private:
};

#endif //PERSON_H
