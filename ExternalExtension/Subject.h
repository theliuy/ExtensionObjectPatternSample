#ifndef EXTRENALEXTENSION_SUBJECT
#define EXTRENALEXTENSION_SUBJECT

/*
 * Extension Object Pattern with Extenal Extension
 * =================================================
 * In this demostration, the ConcreteSubject does not
 * know what extensions it will support, but provides
 * AddExtension and RemoveExtension to maitanence them.
 * We assume that, one concrete subject won't support
 * a certain type of concrete extension more than once.
 * 
 * Subject.h
 * - Subject Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "Extension.h"
#include <string>
#include <typeinfo>


class Subject {
public:
	virtual ~Subject() {};

	virtual Extension * GetExtension(const type_info & type) = 0;

	// Add a new extension
	virtual void AddExtension(Extension * extension) = 0;
	// Remove a extension
	virtual void RemoveExtension(const type_info & type) = 0;
private:
};

#endif