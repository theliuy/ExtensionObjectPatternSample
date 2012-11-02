#include "ConcreteSubject.h"
#include "ConcreteExtension.h"

ConcreteSubject::ConcreteSubject() 
	: extension_(){
}

ConcreteSubject::~ConcreteSubject() {
}

std::auto_ptr<Extension> ConcreteSubject::GetExtension(const std::string &extension_name) {
	if (extension_name == "ConcreteExtension") {

		// If the pointer is not initialized, 
		// initialize it.
		if (extension_.get() == 0) {
			extension_.reset(new ConcreteExtension(this));
		}

		// When it returns, the reference counter in
		// the smart pointer increments by one.
		return extension_;
		// After the stack is released, the reference
		// counter decrements by one.
	}

	// Return a smart pointer of base class,
	// if the ConcreteSubject doesn't support
	// the request extension.
	// It will failed to dynamic_cast the pointer
	// to ConcreteExtension type.
	std::auto_ptr<Extension> ptr;
	return ptr;
}

std::string ConcreteSubject::name() {
	return "ConcreteSubject";
}