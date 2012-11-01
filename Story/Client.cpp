#include "File.h"
#include "TxtFile.h"
#include "NotepadExtension.h"
#include "WordExtension.h"
#include <typeinfo>
#include <iostream>


int main(int argc, char ** argv) {

	File *file = new TxtFile();
	file->AddExtension(new NotepadExtension());
	file->AddExtension(new WordExtension());

	std::cout << "Story Demostration" << std::endl
			  << "========================" << std::endl;
	TxtExtension * extension = dynamic_cast<TxtExtension *>
		(file->GetExtension(typeid(NotepadExtension)));

	if (extension != 0) {
		extension->GetFirst();
		extension->GetLast();

		NotepadExtension * notepad = dynamic_cast<NotepadExtension *>(extension);
		if (notepad != 0)
			notepad->ConnectFTP();
	}

	std::cout << std::endl << std::endl;

	extension = dynamic_cast<TxtExtension *>
		(file->GetExtension(typeid(WordExtension)));

	if (extension != 0) {
		extension->GetFirst();
		extension->GetLast();

		WordExtension * notepad = dynamic_cast<WordExtension *>(extension);
		if (notepad != 0)
			notepad->NextPage();
	}

	system("PAUSE");

	return 0;
}