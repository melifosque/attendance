#include <AttendanceManagement.hpp>

AttendanceManagement::AttendanceManagement(){};

AttendanceManagement::~AttendanceManagement(){};

void AttendanceManagement::takeAttendance(Student* student, Course* course, string datetime, bool state)
{
    ofstream listStudent;

    listStudent.open("attendance.csv");
    if (listStudent)
    {
        listStudent << "Id de estudiante, "
                    << "Apellido, "
                    << "Nombre, "
                    << "Id Materia, "
                    << "Nombre de la materia, "
                    << "Fecha, "
                    << "Presente" << endl;
    }
    listStudent << student->getIdentifier() << ", "
                << student->getSurname() << ", "
                << student->getName() << ", "
                << course->getIdentifier() << ", "
                << course->getName() << ", "
                << datetime << ", "
                << state << endl;

    listStudent.close(); 
}

void AttendanceManagement::showAttendance()
{
    ifstream listStudent("attendance.csv");
    string linea;

    if (!listStudent)
    {
        cout << "Lista de alumnos no encontrada!" << endl;
    }
    else
    {
        while (getline(listStudent, linea))
        {
            cout << linea << endl;
        }
    }
    
    listStudent.close();
}