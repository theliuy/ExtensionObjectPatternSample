#ifndef RTTIEXTENSION_CONCRETEEXTENSION
#define RTTIEXTENSION_CONCRETEEXTENSION

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
	void DoSomething();
};

#endif