#pragma once
#include <iostream>
#include <vector>
class FlowersBouqet;
class Florist;

class Person
{
protected:
	std::string name;
	std::string role;
public:
	Person(std::string, std::string);
	void orderFlowers(Florist*, Person*, std::vector<std::string>);
	std::string getName();
	void acceptFlowers(FlowersBouqet*);
};

