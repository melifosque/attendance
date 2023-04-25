#include <Course.hpp>

Course::Course(){};

Course::~Course(){};

void Course::setIdentifier(int identifier)
{
    Identifier=identifier;
}

void Course::setName(string name)
{
    Name=name;
}

int Course:: getIdentifier()
{
    return Identifier;
}

string Course::getName()
{
    return Name;
}