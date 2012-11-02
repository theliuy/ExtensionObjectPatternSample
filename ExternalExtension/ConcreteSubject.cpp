#include "ConcreteSubject.h"

#include <iostream>

ConcreteSubject::ConcreteSubject()
{
}

ConcreteSubject::~ConcreteSubject() {
	for (size_t index = 0;
		index < extensions_.size();
		++index) {
			if (0 != extensions_[index])
				delete extensions_[index];
	}
}

Extension * ConcreteSubject::GetExtension(const type_info & type) {
	for (size_t index = 0;
		index < extensions_.size();
		++index) {
			if (0 != extensions_[index] &&
				type == typeid(*(extensions_[index]))) {
					std::cout << "  Success to get extension " << type.name() << std::endl;
					return extensions_[index];
			}
	}

	std::cout << "  Failed to get extension " << type.name() << std::endl;
	return 0;
}

void ConcreteSubject::AddExtension(Extension * extension){
	if (0 == extension)
		return;

	size_t index = 0;
	while (index < extensions_.size()) {
		if (0 != extensions_[index] &&
			typeid(*(extensions_[index])) == typeid(*extension))
			break;

		++index;
	}

	if (index == extensions_.size()) {
		std::cout << "  Success to add extension " << typeid(*extension).name() << std::endl;
		extensions_.push_back(extension);
	} else {
		std::cout << "  Failed to add extension " << typeid(*extension).name() << std::endl;
		delete extension;
	}
}

void ConcreteSubject::RemoveExtension(const type_info & type) {
	size_t index = 0;
	for (;
		index < extensions_.size();
		++index) {
			if (0 != extensions_[index] &&
				type == typeid(*(extensions_[index]))) {
					extensions_.erase(extensions_.begin() + index);
					std::cout << "  Success to remove extension " << type.name() << std::endl;
					break;
			}
	}
	if (index == extensions_.size())
		std::cout << "  Failed to remove extension " << type.name() << std::endl;
}