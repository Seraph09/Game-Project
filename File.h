#pragma once
#include <string>

class File
{
	virtual bool setProperty(std::string property, std::string value) { return false; }
	virtual bool setProperty(std::string property, int value)         { return false; }
protected:
	void load(std::string file);
public:
	File();
	File(std::string file);
};