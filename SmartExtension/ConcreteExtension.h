#ifndef SMARTEXTENSION_CONCRETEEXTENSION
#define SMARTEXTENSION_CONCRETEEXTENSION

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
 * ConcreteExtension.h
 * - Concrete Extension
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "Extension.h"

class ConcreteExtension : public Extension {
public:
	ConcreteExtension(Subject * owner_);
	~ConcreteExtension();

	void DoSomething();

private:
	Subject *owner_;
};

#endif