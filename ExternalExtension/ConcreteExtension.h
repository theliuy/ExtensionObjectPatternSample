#ifndef EXTRENALEXTENSION_CONCRETEEXTENSION
#define EXTRENALEXTENSION_CONCRETEEXTENSION

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

class ConcreteExtension1 : public Extension {
public:
	void DoSomething();
};

class ConcreteExtension2 : public Extension {
public:
	void DoSomethingElse();
};

#endif