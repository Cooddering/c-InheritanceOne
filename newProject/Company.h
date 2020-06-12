#pragma once
#include <iostream>
#include <vector>
#include "person.h"
using namespace std;

class Company {
public:
    virtual void salaryMantlh(int day, int dailyWages)
    {

    }
    virtual void shiftMontlh(int countsClock, int clockWages)
    {

    }
    void addEmployee(Person calisan) {
        employee.push_back(calisan);
    }
    int totalSalary() {
        int salary=0;
        for (size_t i = 0; i < employee.size(); i++)
        {
            salary += employee[i].maas;
        }
        return salary;

    }
private:
    vector<Person> employee;
    
};
