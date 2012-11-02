#include "ConcreteSubject.h"
#include "ConcreteExtension.h"

ConcreteSubject::ConcreteSubject()
	:extension_(0) {
}

ConcreteSubject::~ConcreteSubject() {
	if (0 != extension_)
		delete extension_;
}

Extension * ConcreteSubject::GetExtension(const std::type_info & type) {
	// The following lines show how the extensions
	// are mapped.
	if (type == typeid(ConcreteExtension)) {
		if (0 == extension_)
			extension_ = new ConcreteExtension();

		return extension_;
	}

	return 0;
}