/*
 * Extension Pattern
 * ========================
 * 
 * ConcreteExtension.cpp
 * - Implement of ConcreteExtension class
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "ConcreteExtension.h"
#include <iostream>

void ConcreteExtension1::DoSomething() {
	std::cout << "  ConcreteExtension1::DoSomething" << std::endl;
}

void ConcreteExtension2::DoSomethingElse() {
	std::cout << "  ConcreteExtension2::DoSomethingElse" << std::endl;
}