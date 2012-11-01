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
	
	ConcreteExtension * extension;
	std::cout << "Extension Demostration using RTTI" << std::endl
			  << "=====================================" << std::endl; 
	// PAY ATTENSION
	extension = dynamic_cast<ConcreteExtension *> (
		subject->GetExtension(typeid(ConcreteExtension)));

	if (extension) {
		extension->DoSomething();
	} else {
		// Sorry, this subject doesn't support 
		// this extension.
	}

	system("PAUSE");

	return 0;
}