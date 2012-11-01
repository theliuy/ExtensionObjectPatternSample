#ifndef STORY_NOTEPADEXTENSION
#define STORY_NOTEPADEXTENSION 

/*
 * Extension Pattern
 * ========================
 * 
 * NotepadExtension.h
 * - Concrete Extension
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "TxtExtension.h"

class NotepadExtension : public TxtExtension{
public:
	void GetFirst();
	void GetLast();

	void ConnectFTP();

private:
};

#endif