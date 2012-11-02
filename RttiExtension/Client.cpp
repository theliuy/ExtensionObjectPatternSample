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
	// We pass the type_info object as identifier
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