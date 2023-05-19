#include "FlowersBouqet.h"

FlowersBouqet::FlowersBouqet(std::vector<std::string> s)
{
	this->bouqet = s;
	this->is_arranged = false;
}
void FlowersBouqet::arrange()
{
	this->is_arranged = true;
}
