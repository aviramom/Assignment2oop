#pragma once
#include<iostream>
#include<vector>
class FlowersBouqet
{
protected:
	std::vector<std::string> bouqet;
	bool is_arranged;
public:
	FlowersBouqet(std::vector<std::string>);
	void arrange();



};

