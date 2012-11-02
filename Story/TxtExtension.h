#ifndef STORY_TXTEXTENSION
#define STORY_TXTEXTENSION

/*
 * Story
 * ==============
 * In this demostration, the extension object pattern is 
 * implemented with a story. A file interface needs to be
 * extended with NotepadExtension and WordExtension.
 * 
 * TxtExtension.h
 * - Abstract Extension Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "Extension.h"

class TxtExtension : public Extension {
public:
	virtual void GetFirst() = 0;
	virtual void GetLast() = 0;

private:
};

#endif