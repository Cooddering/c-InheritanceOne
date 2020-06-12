#pragma once
#include <iostream>
using namespace std;


class Person
{
public:
    string profession;
    int maas;
    Person() : profession("unemployed"), age(16) { }
    void display()
    {
        cout << "My profession is: " << profession << endl;
        cout << "My age is: " << age << endl;
        cout << "My Salary: " << maas << endl;
        walk();
        talk();
    }
    void walk() { cout << "I can walk." << endl; }
    void talk() { cout << "I can talk." << endl; }
    void setAge(int yas);
    int getAge();

private:
    int age;


};
