#ifndef SKELETON_CONCRETEEXTENSION
#define SKELETON_CONCRETEEXTENSION

/*
 * Extension Pattern
 * ========================
 * 
 * ConcreteExtension.h
 * - A concrete extension
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

#include "Extension.h"

class ConcreteExtension : public Extension {
public:
	ConcreteExtension();
	void DoSomething();

	void RegisterOwner(Subject *owner);

private:
	Subject *owner_;
};

#endif