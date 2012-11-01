/*
 * Extension Pattern
 * ========================
 * 
 * ConcreteSubject.cpp
 * - Implementation of concrete subject
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "ConcreteSubject.h"
#include "ConcreteExtension.h"

ConcreteSubject::ConcreteSubject() 
	: extension_(){
}

ConcreteSubject::~ConcreteSubject() {
}

std::auto_ptr<Extension> ConcreteSubject::GetExtension(const std::string &extension_name) {
	if (extension_name == "ConcreteExtension") {
		if (extension_.get() == 0) {
			extension_.reset(new ConcreteExtension(this));
		}
		return extension_;
	}

	std::auto_ptr<Extension> ptr;
	return ptr;
}

std::string ConcreteSubject::name() {
	return "ConcreteSubject";
}