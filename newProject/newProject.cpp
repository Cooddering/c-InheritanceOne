#include <iostream>
#include "person.h"
#include "MathsTeacher.h"
#include "Footballer.h"
#include "Manager.h"
#include "Company.h"

#pragma once
using namespace std;


int main()
{
    MathsTeacher teacher;
    teacher.profession = "Teacher";
    teacher.setAge(34);
    teacher.maas = 4000;
    teacher.display();
    teacher.teachMaths();

    cout << "/**********************************/" << endl;

    Footballer footballer;
    footballer.profession = "Footballer";
    footballer.setAge(34);
    footballer.maas = 20000;
    footballer.display();
    footballer.playFootball();

    cout << "/**********************************/" << endl;

    Manager manager;
    manager.profession = "Manager";
    manager.setAge(45);
    manager.maas = 8000;
    manager.display();
    manager.schoolManager();


    cout << "/**********************************/" << endl;

    Company company;
    company.addEmployee(manager);
    company.addEmployee(footballer);
    company.addEmployee(teacher);
   
    cout << "Gider" << company.totalSalary();

    return 0;

   
}

