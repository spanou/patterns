//============================================================================
// Name        : Patterns.cpp
// Author      : sakis.panou@qlogica.com
// Version     :
// Copyright   : Apache V2
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "singleton/singleton.h"
#include "singleton/QSingletonTemplate.h"
#include "Blah.h"

using namespace std;

int main() {


	cout << "Greetings! " << endl; // prints Greetings! 

	QSingleton& theSingleton = QSingleton::getInstance();
	cout << theSingleton.sayHi()<<endl;

	return 0;
}
