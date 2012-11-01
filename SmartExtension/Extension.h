#ifndef SMARTEXTENSION_EXTENSION
#define SMARTEXTENSION_EXTENSION

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
	Extension() {}
	Extension(Subject *owner) {}
	virtual ~Extension() {}

protected:
};

#endif