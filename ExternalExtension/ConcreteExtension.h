#ifndef EXTRENALEXTENSION_CONCRETEEXTENSION
#define EXTRENALEXTENSION_CONCRETEEXTENSION

/*
 * Extension Object Pattern with Extenal Extension
 * =================================================
 * In this demostration, the ConcreteSubject does not
 * know what extensions it will support, but provides
 * AddExtension and RemoveExtension to maitanence them.
 * We assume that, one concrete subject won't support
 * a certain type of concrete extension more than once.
 * 
 * ConcreteExtension.h
 * - Concrete Extension
 *
 * For demostration of adding and removing, we have
 * two concrete extension classes.
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
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