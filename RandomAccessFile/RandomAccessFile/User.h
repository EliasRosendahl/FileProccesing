#pragma once
#include <string>

class User
{
public:
	User(int ID = 0, std::string name = "NN");
	~User();

	int getID();
	std::string getName();

	void setID(int ID);
	void setName(std::string name);
private:
	int ID_;
	std::string name_;
};

