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
	:extension_(0) {
}

ConcreteSubject::~ConcreteSubject() {
	if (0 != extension_)
		delete extension_;
}

Extension * ConcreteSubject::GetExtension(const std::string &extension_name) {
	if (extension_name == "myextension") {
		if (0 == extension_) {
			extension_ = new ConcreteExtension();
			extension_->RegisterOwner(this);
		}
		return extension_;
	}

	return 0;
}

std::string ConcreteSubject::name() {
	return "ConcreteSubject";
}