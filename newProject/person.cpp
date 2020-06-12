#include <iostream>
#include "person.h"

using namespace std;

void Person::setAge(int yas) {
	if (yas > 0) {
		age = yas;
	}
}

int Person::getAge() {
	
	return age;
}
