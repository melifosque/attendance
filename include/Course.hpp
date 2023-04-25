#ifndef COURSE_HPP
#define COURSE_HPP
#include <iostream>
#include <string>
using namespace std;

class Course
{
    public:
        Course();
        ~Course();
        void setIdentifier(int identifier);
        void setName(string name);
        int getIdentifier();
        string getName();
        
    private:
        int Identifier;
        string Name;
};
#endif