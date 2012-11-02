#ifndef SMARTEXTENSION_EXTENSION
#define SMARTEXTENSION_EXTENSION

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
 * Extension.h
 * - Extension Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

class Subject;

class Extension {
public:
	Extension() {}

	// Combine the ctor with Register owner
	Extension(Subject *owner) {}
	virtual ~Extension() {}

protected:
};

#endif