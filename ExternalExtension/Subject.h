#ifndef EXTRENALEXTENSION_SUBJECT
#define EXTRENALEXTENSION_SUBJECT

/*
 * Extension Pattern
 * ========================
 * 
 * Subject.h
 * - A subject interface
 * - In this demo, Subject class is an
 *   interface, while it is not nessesary.
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "Extension.h"
#include <string>
#include <typeinfo>


class Subject {
public:
	virtual ~Subject() {};

	virtual Extension * GetExtension(const type_info & type) = 0;
	virtual void AddExtension(Extension * extension) = 0;
	virtual void RemoveExtension(const type_info & type) = 0;
private:
};

#endif