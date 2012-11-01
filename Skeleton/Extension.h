#ifndef SKELETON_EXTENSION
#define SKELETON_EXTENSION

/*
 * Extension Pattern
 * ========================
 * 
 * Extension.h
 * - A basic extension interface
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

class Subject;

class Extension {
public:

	virtual ~Extension() {}

	virtual void RegisterOwner(Subject *owner) = 0;

protected:
};

#endif