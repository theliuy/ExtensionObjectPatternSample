#ifndef STORY_TXTEXTENSION
#define STORY_TXTEXTENSION

/*
 * Extension Pattern
 * ========================
 * 
 * TxtExtension.h
 * - Abstract Extension
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "Extension.h"

class TxtExtension : public Extension {
public:
	virtual void GetFirst() = 0;
	virtual void GetLast() = 0;

private:
};

#endif