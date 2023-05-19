#pragma once
#include "Person.h"
#include "Wholesaler.h"
#include"FlowerArranger.h"
#include "DeliveryPerson.h"

class Florist : public Person
{
protected:
	Wholesaler*  wholesaler;
	FlowerArranger* flowerArranger;
	DeliveryPerson* deliveryPerson;
public:
	Florist(std::string, Wholesaler*, FlowerArranger*, DeliveryPerson*);
	void acceptOrder(Person*, std::vector<std::string>);




//wholesaler: W holesaler∗
//– flowerArranger : FlowerArranger∗
//– deliveryPerson : DeliveryP erson∗
//– acceptOrder(P erson∗
//	, std::vector < std::string >) : void
};

