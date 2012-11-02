#include "ConcreteExtension.h"
#include "Subject.h"
#include <iostream>

ConcreteExtension::ConcreteExtension()
	:owner_(0) {

}

void ConcreteExtension::DoSomething() {
	std::cout << "ConcreteExtension::DoSomething" << std::endl;

	// The following sentence show how the extension
	// calls the subject's function.
	std::cout << "  Owner's name is " << owner_->name() << std::endl;
}

void ConcreteExtension::RegisterOwner(Subject *owner) {
	owner_ = owner;
}