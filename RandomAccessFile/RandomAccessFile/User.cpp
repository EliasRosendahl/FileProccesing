#include "User.h"



User::User(int ID, std::string name)
	:ID_(ID), name_(name)
{
}


User::~User()
{
}

int User::getID()
{
	return ID_;
}

std::string User::getName()
{
	return name_;
}

void User::setID(int ID)
{
	if(ID >= 0 && 99 <= ID)
	{
		ID_ = ID;
	}
}

void User::setName(std::string name)
{
	if(!name.empty())
	{
		name_ = name;
	}
}
