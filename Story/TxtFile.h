#ifndef STORY_TXTFILE
#define STORY_TXTFILE

/*
 * Story
 * ==============
 * In this demostration, the extension object pattern is 
 * implemented with a story. A file interface needs to be
 * extended with NotepadExtension and WordExtension.
 * 
 * TxtFile.h
 * - Concrete Subject
 *
 * Yang Liu
 * Syracuse University
 * yliu#theliuy.com
 */

#include "File.h"
#include <vector>

class TxtFile : public File{
public:
	virtual ~TxtFile();

	virtual void Open();
	virtual void Close();
	virtual char GetByte(int index);

	virtual void AddExtension(Extension *extension);
	virtual Extension *GetExtension(const type_info &type);

private:
	std::vector<Extension *> extensions_;
};

#endif