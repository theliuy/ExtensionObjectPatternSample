#ifndef SMARTEXTENSION_SUBJECT
#define SMARTEXTENSION_SUBJECT

/*
 * Extension Object Pattern with Smart Extension
 * =================================================
 * Here is a solution of how to control extension's
 * lifetime.
 * The extension is managed by a smart pointer. If 
 * the extension object is released, it will create
 * an instance. One the reference counter is down to
 * 0, the instance will be released. Thus, the 
 * extension object is constructed and destructed 
 * automatically.
 * Another solution is shown in Skeleton project, the
 * extension object is created and destroy with
 * the subject object.
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
#include <memory>

class Subject {
public:
	virtual ~Subject() {}

	virtual std::auto_ptr<Extension> GetExtension(const std::string &extension_name) = 0;
	
	virtual std::string name() = 0;
private:
};


#endif