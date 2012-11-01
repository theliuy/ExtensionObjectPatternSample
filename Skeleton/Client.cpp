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

	std::cout << "Skeleton Demostration" << std::endl
			  << "=========================" << std::endl; 
	ConcreteExtension * extension;
	extension = dynamic_cast<ConcreteExtension *> (
		subject->GetExtension("myextension"));

	if (extension) {
		extension->DoSomething();
	} else {
		// Sorry, this subject doesn't support 
		// this extension.
	}

	system("PAUSE");

	return 0;
}