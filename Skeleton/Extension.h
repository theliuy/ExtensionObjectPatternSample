#ifndef SKELETON_EXTENSION
#define SKELETON_EXTENSION

/*
 * Skeleton Pattern
 * ========================
 * Skeleton code of Extension Object
 * Pattern sample.
 * 
 * Extension.h
 * - Extension Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

class Subject;

class Extension {
public:

	virtual ~Extension() {}

	virtual void RegisterOwner(Subject *owner) = 0;

protected:
};

#endif