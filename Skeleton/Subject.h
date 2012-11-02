#ifndef SKELETON_SUBJECT
#define SKELETON_SUBJECT

/*
 * Skeleton Pattern
 * ========================
 * Skeleton code of Extension Object
 * Pattern sample.
 * 
 * Subject.h
 * - Subject Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include <string>
#include "Extension.h"

class Subject {
public:
	virtual ~Subject() {};

	// Get Extension by a string
	// In this sample, the extension is identified by
	// string. If the Concrete Subject doesn't support 
	// this extension, it will return 0;
	virtual Extension * GetExtension(const std::string &extension_name) = 0;
	
	// An exisiting function
	virtual std::string name() = 0;
private:
};


#endif