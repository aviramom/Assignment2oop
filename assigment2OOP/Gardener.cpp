#include "Gardener.h"
#include "FlowersBouqet.h"


Gardener::Gardener(std::string name) :Person(name, "Gardener") {}

FlowersBouqet* Gardener:: prepareOrder(std::vector<std::string> s)
{
	std::cout << getName() << "prepares flowers" << std::endl;
	return new FlowersBouqet(s);
	
};
