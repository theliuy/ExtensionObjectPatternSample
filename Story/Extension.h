#ifndef STORY_EXTENSION
#define STORY_EXTENSION

/*
 * Extension Pattern
 * ========================
 * 
 * Extension.h
 * - Extension
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

class File;

class Extension {
public:
	Extension();
	virtual ~Extension();

	virtual void RegisterOwner(File *owner);

protected:
	File *owner_;
};

#endif