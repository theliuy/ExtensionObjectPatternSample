#include "TxtFile.h"
#include "Extension.h"
#include <iostream>
#include <typeinfo>

TxtFile::~TxtFile() {
	for (size_t index = 0;
		 index < extensions_.size();
		 ++ index)
		 if (extensions_[index] != 0)
			 delete extensions_[index];
}

void TxtFile::Open() {
	std::cout << "TxtFile::Open()" << std::endl;
}

void TxtFile::Close() {
	std::cout << "TxtFile::Close()" << std::endl;
}

char TxtFile::GetByte(int index) {
	std::cout << "TxtFile::GetByte()" << std::endl
		<< "  Get the " << index << "-th char" << std::endl;
	return 'a';
}

void TxtFile::AddExtension(Extension *extension) {
	size_t index = 0;
	for (; index < extensions_.size(); ++index) {
		if (extensions_[index] != 0 &&
			typeid(*(extensions_[index])) == typeid(*extension)) {
				break;
		}
	}

	if (index == extensions_.size()) {
		extension->RegisterOwner(this);
		extensions_.push_back(extension);
	}
	else
		delete extension;
}

Extension *TxtFile::GetExtension(const std::type_info &type) {
	for (size_t index = 0;
		index < extensions_.size();
		++index) {
			if (extensions_[index] != 0 &&
				typeid(*(extensions_[index])) == type)
				return extensions_[index];
	}

	return 0;
}