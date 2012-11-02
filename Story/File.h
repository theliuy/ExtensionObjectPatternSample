#ifndef STORY_FILE
#define STORY_FILE

/*
 * Story
 * ==============
 * In this demostration, the extension object pattern is 
 * implemented with a story. A file interface needs to be
 * extended with NotepadExtension and WordExtension.
 * 
 * File.h
 * - The Subject Interface
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include <memory>

class Extension;

class File {
public:
	virtual ~File() {};

	virtual void Open() = 0;
	virtual void Close() = 0;
	virtual char GetByte(int index) = 0;

	virtual void AddExtension(Extension *extension) = 0;
	virtual Extension *GetExtension(const std::type_info &type) = 0;

private:
};

#endif