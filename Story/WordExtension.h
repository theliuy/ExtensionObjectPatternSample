#ifndef STORY_WORDEXTENSION
#define STORY_WORDEXTENSION 

/*
 * Story
 * ==============
 * In this demostration, the extension object pattern is 
 * implemented with a story. A file interface needs to be
 * extended with NotepadExtension and WordExtension.
 * 
 * WordExtension.h
 * - Concrete Extension
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "TxtExtension.h"

class WordExtension : public TxtExtension{
public:
	void GetFirst();
	void GetLast();

	void NextPage();

private:
};

#endif