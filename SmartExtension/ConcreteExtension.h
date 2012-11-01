#ifndef SMARTEXTENSION_CONCRETEEXTENSION
#define SMARTEXTENSION_CONCRETEEXTENSION

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
	ConcreteExtension(Subject * owner_);
	~ConcreteExtension();

	void DoSomething();

private:
	Subject *owner_;
};

#endif