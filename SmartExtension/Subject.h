#ifndef SMARTEXTENSION_SUBJECT
#define SMARTEXTENSION_SUBJECT

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
#include <memory>

class Subject {
public:
	virtual ~Subject() {}

	virtual std::auto_ptr<Extension> GetExtension(const std::string &extension_name) = 0;
	
	virtual std::string name() = 0;
private:
};


#endif