#pragma once
#include"Person.h"

class Gardener : public Person
{
public:
	Gardener(std::string);
	FlowersBouqet* prepareOrder(std::vector<std::string>);
};

