/*
 * Extension Pattern
 * ========================
 * 
 * Client.cpp
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "Subject.h"
#include "ConcreteSubject.h"
#include "ConcreteExtension.h"
#include <iostream>

void func(Subject * subject);

int main(int argc, char ** argv) {

	Subject * subject;
	subject = new ConcreteSubject();

	std::cout << "Smart Extension Demostration" << std::endl
			  << "=========================" << std::endl; 
	int num = 3;
	while (num--) {
		func(subject);

		std::cout << std::endl;
	}

	delete subject;

	system("PAUSE");

	return 0;
}

void func(Subject *subject) {

	std::cout << std::endl 
			  << "func" << std::endl
			  << "==============" << std::endl;

	std::auto_ptr<Extension> extension = subject->GetExtension("ConcreteExtension");

	ConcreteExtension *ce = dynamic_cast<ConcreteExtension *>(extension.get());
	if (ce) {
		ce->DoSomething();
	} else {
		std::cout << "Failed to dynamic_cast" << std::endl;
	}
}