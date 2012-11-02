#ifndef STORY_NOTEPADEXTENSION
#define STORY_NOTEPADEXTENSION 

/*
 * Story
 * ==============
 * In this demostration, the extension object pattern is 
 * implemented with a story. A file interface needs to be
 * extended with NotepadExtension and WordExtension.
 * 
 * NotepadExtension.h
 * - A concrete extension
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
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