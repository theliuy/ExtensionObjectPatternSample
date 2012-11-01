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

ConcreteExtension::ConcreteExtension()
	:owner_(0) {

}

void ConcreteExtension::DoSomething() {
	std::cout << "ConcreteExtension::DoSomething" << std::endl;
	std::cout << "  Owner's name is " << owner_->name() << std::endl;
}

void ConcreteExtension::RegisterOwner(Subject *owner) {
	owner_ = owner;
}