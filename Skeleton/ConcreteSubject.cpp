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

	// We assume that the subject knows its extension, which is also called
	// as internal extension. By the way the ExternalExtension project will
	// show you how to implement the external extension.
	if (extension_name == "ConcreteExtension") {
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