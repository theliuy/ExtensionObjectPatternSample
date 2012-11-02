#ifndef SMARTEXTENSION_CONCRETESUBJECT
#define SMARTEXTENSION_CONCRETESUBJECT

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
 * ConcreteSubject.h
 * - Concrete Subject
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

	std::auto_ptr<Extension> GetExtension(const std::string &extension_name);
	std::string name();

private:
	// auto_ptr is a smart pointer supported by C++
	// standard library. We use this to control
	// extension's lifetime automatically.
	std::auto_ptr<Extension> extension_;
};

#endif