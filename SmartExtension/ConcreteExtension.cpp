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
#include "Subject.h"
#include <iostream>


ConcreteExtension::ConcreteExtension(Subject * owner)
	:owner_(owner) {
	std::cout << "  ConcreteExtension::Ctor" << std::endl;
}

ConcreteExtension::~ConcreteExtension() {
	std::cout << "  ConcreteExtension::Dtor" << std::endl;
}

void ConcreteExtension::DoSomething() {
	std::cout << "  ConcreteExtension::DoSomething" << std::endl;
	std::cout << "  Owner's name is " << owner_->name() << std::endl;
}