#include "bodypart.h"
#include "person.h"
#include <string>
using namespace std;

bodypart::bodypart()
{
	isActive=true;
	partName = "?";

}

bodypart::bodypart(std::string pName)
{
	isActive = true;
	partName = pName;

}

void bodypart::set_hitsLeft() { hitsLeft--;}

int bodypart::get_hitRange() { return hitRange; }

bool bodypart::get_isActive() { return isActive; }

bool bodypart::get_isFatal() { return isFatal; }

int bodypart::get_hitsLeft() { return hitsLeft; }

string bodypart::get_name() { return partName; }

bodypart::~bodypart(){}
