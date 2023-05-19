#include "Grower.h"
#include "Gardener.h"
#include"FlowersBouqet.h"
#include"Person.h"
Grower::Grower(std::string name, Gardener* gardener) :Person(name,"Grower")
{
	this->gardener = gardener;
}
	

	FlowersBouqet* prepareOrder(std::vector<std::string> s)
	{
		Gardener g = this.gardener;
		return gardener.prepareOrder(s);
	};

