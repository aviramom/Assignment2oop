#pragma once
#include "Grower.h"
#include "Person.h"
#include<iostream>

class Wholesaler : public Person
{
protected:
	Grower* grower;
public:
	Wholesaler(std::string , Grower*);
	FlowersBouqet* acceptOrder(std::vector<std::string>);
};

