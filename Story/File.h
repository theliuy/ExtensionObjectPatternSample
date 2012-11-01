#ifndef STORY_FILE
#define STORY_FILE

/*
 * Extension Pattern
 * ========================
 * 
 * File.h
 * - Subject
 *
 * Yang Liu, Wei Gu, Shuang Li
 * Syracuse University
 */

class Extension;
class type_info;

class File {
public:
	virtual ~File() {};

	virtual void Open() = 0;
	virtual void Close() = 0;
	virtual char GetByte(int index) = 0;

	virtual void AddExtension(Extension *extension) = 0;
	virtual Extension *GetExtension(const type_info &type) = 0;

private:
};

#endif