#ifndef EXTRENALEXTENSION_EXTENSION
#define EXTRENALEXTENSION_EXTENSION

/*
 * Extension Object Pattern with Extenal Extension
 * =================================================
 * In this demostration, the ConcreteSubject does not
 * know what extensions it will support, but provides
 * AddExtension and RemoveExtension to maitanence them.
 * We assume that, one concrete subject won't support
 * a certain type of concrete extension more than once.
 * 
 * Extension.h
 * - Extension Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

class Extension {
public:
	virtual ~Extension() {}
};

#endif