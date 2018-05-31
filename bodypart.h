#ifndef BODYPART_H
#define BODYPART_H
#include <string>

class bodypart
{
public:

	bodypart(); //default constructor
	bodypart(std::string pName); //typed constructor

	std::string partName; //The name of the bodypart
 	int damageToPlayer; //How much total damage a part will do to the person when hit
	int hitRange; //This is used in determining the probability that this part will be hit.
	bool isActive; //Whether the bodypart is able to get hit still
	bool isFatal; //True if losing it kills player
	int hitsLeft; //How many hits the parts can take before it falls off / becomes inactive

	void set_hitsLeft(); //Decrements hits left after it has been hit

	int get_hitRange();
	bool get_isActive();
	bool get_isFatal();
	std::string get_name();
	int get_hitsLeft();
	virtual int get_damageToPlayer() = 0; //Get's overriden in the instantiations 

	~bodypart();

protected:
private:
};

#endif //BODYPART_H
