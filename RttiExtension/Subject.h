#ifndef RTTIEXTENSION_SUBJECT
#define RTTIEXTENSION_SUBJECT

/*
 * Extension Pattern
 * ========================
 * 
 * Subject.h
 * - A subject interface
 * - In this demo, Subject class is an
 *   interface, while it is not nessesary.
 * - Use RTTI
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "Extension.h"
#include <typeinfo>
#include <string>

class Subject {
public:
	virtual ~Subject() {};

	virtual Extension * GetExtension(const std::type_info & type) = 0;
private:
};


#endif