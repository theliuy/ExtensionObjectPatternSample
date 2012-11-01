#ifndef RTTIEXTENSION_CONCRETESUBJECT
#define RTTIEXTENSION_CONCRETESUBJECT

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

	Extension * GetExtension(const std::type_info & type);

private:
	Extension * extension_;
};

#endif