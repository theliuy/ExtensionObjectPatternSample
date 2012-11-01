#ifndef STORY_WORDEXTENSION
#define STORY_WORDEXTENSION 

/*
 * Extension Pattern
 * ========================
 * 
 * WordExtension.h
 * - Concrete Extension
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
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