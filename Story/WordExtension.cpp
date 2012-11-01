#include "WordExtension.h"
#include "File.h"
#include <iostream>

void WordExtension::GetFirst() {
	std::cout << "WordExtension::GetFirst" << std::endl;
	owner_->Open();
	owner_->GetByte(0);
	owner_->Close();
}

void WordExtension::GetLast() {
	std::cout << "WordExtension::GetLast" << std::endl;
	owner_->Open();
	owner_->GetByte(100);
	owner_->Close();
}

void WordExtension::NextPage() {
	std::cout << "WordExtension::NextPage" << std::endl;
}