#pragma once
#include <iostream>
#include <vector>
#include "person.h"
using namespace std;

class Company {
    //Maas Hesaplama 
public:
   void addEmployee(Person calisan) {
        employee.push_back(calisan);
    }
    int totalSalary() {
        int salary=0;
        for (size_t i = 0; i <employee.size(); i++)
        {
            salary += employee[i].maas;
        }
        return salary;

    }
    //Yas Hesaplama
    double averageAge() {
        int total = 0;
        double average = 0.0;
        for (size_t i = 0; i < employee.size(); i++)
        {
            total += employee[i].getAge();

        }
        average = total / employee.size();
        return average;
    }

private:
    vector<Person> employee;
    
};
