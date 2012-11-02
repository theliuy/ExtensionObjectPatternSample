#ifndef SKELETON_CONCRETEEXTENSION
#define SKELETON_CONCRETEEXTENSION

/*
 * Skeleton Pattern
 * ========================
 * Skeleton code of Extension Object
 * Pattern sample.
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
	ConcreteExtension();

	// A new function.
	// By using extension object pattern, it can be
	// seen as, the existing interface is extended
	// by this function.
	void DoSomething();

	void RegisterOwner(Subject *owner);

private:
	Subject *owner_;
};

#endif