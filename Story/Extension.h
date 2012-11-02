#ifndef STORY_EXTENSION
#define STORY_EXTENSION

/*
 * Story
 * ==============
 * In this demostration, the extension object pattern is 
 * implemented with a story. A file interface needs to be
 * extended with NotepadExtension and WordExtension.
 * 
 * Extesion.h
 * - Extension Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

class File;

class Extension {
public:
	Extension();
	virtual ~Extension();

	// We implement RegisterOwner in Extension class,
	// since each concrete extension clss should do it
	// in this way.
	virtual void RegisterOwner(File *owner);

protected:
	File *owner_;
};

#endif