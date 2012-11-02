#ifndef SKELETON_CONCRETESUBJECT
#define SKELETON_CONCRETESUBJECT

/*
 * Skeleton Pattern
 * ========================
 * Skeleton code of Extension Object
 * Pattern sample.
 * 
 * ConcreteSubject.h
 * - A concrete subject
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "Subject.h"
#include <string>

class Extension;

class ConcreteSubject : public Subject {
public:
	ConcreteSubject();
	~ConcreteSubject();

	Extension * GetExtension(const std::string &extension_name);

	std::string name();

private:
	Extension * extension_;
};

#endif