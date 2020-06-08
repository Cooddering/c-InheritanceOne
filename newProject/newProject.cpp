#include <iostream>
#include "person.h"
#include "MathsTeacher.h"
#include "Footballer.h"
#include "Manager.h"


#pragma once
using namespace std;


int main()
{
    MathsTeacher teacher;
    teacher.profession = "Teacher";
    teacher.age = 23;
    teacher.maas = 4000;
    teacher.display();
    teacher.teachMaths();

    /**********************************/

    Footballer footballer;
    footballer.profession = "Footballer";
    footballer.age = 19;
    footballer.maas = 20000;
    footballer.display();
    footballer.playFootball();

    /**********************************/

    Manager manager;
    manager.profession = "Manager";
    manager.age = 50;
    manager.maas = 8000;
    manager.display();
    manager.schoolManager();

    return 0;
}

