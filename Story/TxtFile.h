#ifndef STORY_TXTFILE
#define STORY_TXTFILE

/*
 * Extension Pattern
 * ========================
 * 
 * TxtFile.h
 * - Concrete Subject
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
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