#pragma once
#include "Gardener.h"

class Grower : public Person
{
protected:
	Gardener* gardener;
public:
	Grower(std::string, Gardener*);
	FlowersBouqet* prepareOrder(std::vector<std::string>);
};

