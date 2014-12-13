#include "File.h"

void File::load(std::string file)
{
	ifstream fin(file.c_str());

	if (fin.fail())
		cerr << "File not found: " << file << endl;

	else while (!fin.eof())
	{
		//Read file here and parse input
	}
}