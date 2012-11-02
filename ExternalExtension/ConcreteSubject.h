#ifndef EXTRENALEXTENSION_CONCRETESUBJECT
#define EXTRENALEXTENSION_CONCRETESUBJECT

/*
 * Extension Object Pattern with Extenal Extension
 * =================================================
 * In this demostration, the ConcreteSubject does not
 * know what extensions it will support, but provides
 * AddExtension and RemoveExtension to maitanence them.
 * We assume that, one concrete subject won't support
 * a certain type of concrete extension more than once.
 * 
 * Concrete Subject.h
 * - Concrete Subject
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "Subject.h"
#include <vector>

class Extension;

class ConcreteSubject : public Subject {
public:
	ConcreteSubject();
	~ConcreteSubject();

	virtual Extension * GetExtension(const type_info & type);
	virtual void AddExtension(Extension * extension);
	virtual void RemoveExtension(const type_info & type);

private:
	// For the reason that, we assume one concrete subject
	// wont support a certain type of concrete extension
	// more than once. And we use RTTI to map extensions.
	// The extensions can be stored in a vectore, instead
	// of using map.
	std::vector<Extension *> extensions_;
};

#endif