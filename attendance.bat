:: Compilo c+odigo objeto
g++ -Wall -std=c++11 -I./include -c ./src/Student.cpp 
g++ -Wall -std=c++11 -I./include -c ./src/Course.cpp
g++ -Wall -std=c++11 -I./include -c ./src/AttendanceManagement.cpp
g++ -Wall -std=c++11 -I./include -c main.cpp 

:: Compilo el Binario
g++ -I./include Student.o Course.o AttendanceManagement.o main.o -o attendance_management.exe

:: Limpio los códigos objeto
DEL Student.o
DEL Course.o
DEL AttendanceManagement.o
DEL main.o

:: Ejecuto
attendance_management.exe