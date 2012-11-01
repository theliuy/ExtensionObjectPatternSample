#ifndef SKELETON_CONCRETESUBJECT
#define SKELETON_CONCRETESUBJECT

/*
 * Extension Pattern
 * ========================
 * 
 * ConcreteSubject.h
 * - A concrete subject
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "Subject.h"
#include "Extension.h"
#include <string>


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