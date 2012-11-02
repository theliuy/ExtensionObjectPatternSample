#ifndef RTTIEXTENSION_CONCRETEEXTENSION
#define RTTIEXTENSION_CONCRETEEXTENSION

/*
 * Extension Object Pattern with RTTI
 * =================================================
 * This project demostrates how to use Runtime type
 * identification to map extension.
 * 
 * ConcreteExtension.h
 * - ConcreteExtension
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "Extension.h"

class ConcreteExtension : public Extension {
public:
	void DoSomething();
};

#endif