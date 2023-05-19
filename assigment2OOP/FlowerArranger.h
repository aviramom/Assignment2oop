#pragma once
#include "Person.h"
#include<iostream>
class FlowerArranger : public Person
{
public:
	void arrangeFlowers(FlowersBouqet*);
	FlowerArranger(std::string);
};

