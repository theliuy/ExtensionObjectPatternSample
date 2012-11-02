#ifndef RTTIEXTENSION_SUBJECT
#define RTTIEXTENSION_SUBJECT

/*
 * Extension Object Pattern with RTTI
 * =================================================
 * This project demostrates how to use Runtime type
 * identification to map extension.
 * 
 * Subject.h
 * - Subject Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "Extension.h"
#include <typeinfo>
#include <string>

class Subject {
public:
	virtual ~Subject() {};

	// type_info contains the type information,
	// which is used to identify extensions.
	virtual Extension * GetExtension(const std::type_info & type) = 0;
private:
};


#endif