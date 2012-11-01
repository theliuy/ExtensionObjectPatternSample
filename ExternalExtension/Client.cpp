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

int main(int argc, char ** argv) {

	Subject * subject;
	subject = new ConcreteSubject();

	std::cout << "External Extension Demostration" << std::endl
			  << "======================================" << std::endl;
	ConcreteExtension1 * extension1;
	ConcreteExtension2 * extension2;
	std::cout << "Add ConcreteExtension1" << std::endl;
	subject->AddExtension(new ConcreteExtension1());
	std::cout << "Add ConcreteExtension1" << std::endl;
	subject->AddExtension(new ConcreteExtension1());
	std::cout << "Add ConcreteExtension2" << std::endl;
	subject->AddExtension(new ConcreteExtension2());

	std::cout << "Using ConcreteExtension1" << std::endl;
	extension1 = dynamic_cast<ConcreteExtension1 *> (
		subject->GetExtension(typeid(ConcreteExtension1)));

	if (extension1) {
		extension1->DoSomething();
	} else {
		// Sorry, this subject doesn't support 
		// this extension.
	}

	std::cout << "Using ConcreteExtension2" << std::endl;
	extension2 = dynamic_cast<ConcreteExtension2 *> (
		subject->GetExtension(typeid(ConcreteExtension2)));

	if (extension2) {
		extension2->DoSomethingElse();
	} else {
		// Sorry, this subject doesn't support 
		// this extension.
	}

	std::cout << "Remove ConcreteExtension1" << std::endl;
	subject->RemoveExtension(typeid(ConcreteExtension1));

	system("PAUSE");

	return 0;
}