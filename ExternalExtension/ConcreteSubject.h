#ifndef EXTRENALEXTENSION_CONCRETESUBJECT
#define EXTRENALEXTENSION_CONCRETESUBJECT

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
#include <vector>


class ConcreteSubject : public Subject {
public:
	ConcreteSubject();
	~ConcreteSubject();

	virtual Extension * GetExtension(const type_info & type);
	virtual void AddExtension(Extension * extension);
	virtual void RemoveExtension(const type_info & type);

private:
	std::vector<Extension *> extensions_;
};

#endif