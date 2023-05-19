#include "Person.h"
#include "Florist.h"
#include <vector>
//#include <iostream>


Person::Person(std::string name, std::string role)
{
	this->name = name;
	this->role = role;
}
std::string Person::getName()
{
	return role + name;
}
void Person::orderFlowers(Florist* f, Person* p, std::vector<std::string> s) 
{
	std::string joined = "";
	std::cout << this->name << "order flowers to" << p->getName() << "from" << f->getName() << ":" << joined << std::endl;
	//f->acceptOrder(p, s);
}
void Person::acceptFlowers(FlowersBouqet* fb)
{
	std::cout << getName() <<"accept the flowers:"<< fb->to_string()<<std::endl;
}