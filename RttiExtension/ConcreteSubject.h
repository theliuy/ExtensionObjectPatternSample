#ifndef RTTIEXTENSION_CONCRETESUBJECT
#define RTTIEXTENSION_CONCRETESUBJECT

/*
 * Extension Object Pattern with RTTI
 * =================================================
 * This project demostrates how to use Runtime type
 * identification to map extension.
 * 
 * ConcreteSubject.h
 * - Subject Subject
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

	Extension * GetExtension(const std::type_info & type);

private:
	Extension * extension_;
};

#endif