#ifndef ATTENDANCEMANAGEMENT_HPP
#define ATTENDANCEMANAGEMENT_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <Course.hpp>
#include <Student.hpp>
using namespace std;

class AttendanceManagement
{
    public:
        AttendanceManagement();
        ~AttendanceManagement();
        void takeAttendance(Student* student, Course* course, string datetime, bool state);
        void showAttendance();

    private:
};
#endif