#include "ConcreteExtension.h"
#include <iostream>

void ConcreteExtension1::DoSomething() {
	std::cout << "  ConcreteExtension1::DoSomething" << std::endl;
}

void ConcreteExtension2::DoSomethingElse() {
	std::cout << "  ConcreteExtension2::DoSomethingElse" << std::endl;
}