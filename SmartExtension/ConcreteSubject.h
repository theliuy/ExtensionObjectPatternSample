#ifndef SMARTEXTENSION_CONCRETESUBJECT
#define SMARTEXTENSION_CONCRETESUBJECT

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

	std::auto_ptr<Extension> GetExtension(const std::string &extension_name);
	std::string name();

private:
	std::auto_ptr<Extension> extension_;
};

#endif