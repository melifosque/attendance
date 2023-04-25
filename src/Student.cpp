#include <Student.hpp>

Student::Student(){};

Student::~Student(){};

void Student::setIdentifier(int identifier)
{
    Identifier=identifier;
}

void Student::setName(string name)
{
    Name=name;
}

void Student::setSurname(string surname)
{
    Surname=surname;
}
int Student:: getIdentifier()
{
    return Identifier;
}

string Student::getName()
{
    return Name;
}

string Student::getSurname()
{
    return Surname;
}