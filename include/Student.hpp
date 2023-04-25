#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
        Student();
        ~Student();
        void setIdentifier(int identifier);
        void setName(string name);
        void setSurname(string surname);
        int getIdentifier();
        string getName();
        string getSurname();
        
    private:
        int Identifier;
        string Name;
        string Surname;
};
#endif