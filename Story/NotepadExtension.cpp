#include "NotepadExtension.h"
#include "File.h"
#include <iostream>

void NotepadExtension::GetFirst() {
	std::cout << "NotepadExtension::GetFirst" << std::endl;
	owner_->Open();
	owner_->GetByte(0);
	owner_->Close();
}

void NotepadExtension::GetLast() {
	std::cout << "NotepadExtension::GetLast" << std::endl;
	owner_->Open();
	owner_->GetByte(100);
	owner_->Close();
}

void NotepadExtension::ConnectFTP() {
	std::cout << "NotepadExtension::ConnectFTP" << std::endl;
}