#include <iostream>
#include <string>

std::string uppercase(std::string enter)
{
	for (int i =0; enter[i] != 0; i++)
	{
		enter[i] = toupper(enter[i]);
	}
	return enter;
}
bool ifcorrect(int x, int* a, int y)
{
	for(int t = 0 ; t < y; t++)
	{
		if(a[t] == x)
			return true;
	}
	return false;
}
std::string return_type(int * a, int* b, int n)
{
	for(int x = 0; x < n; x++)
	{
		if(a[x] != b[x])
			return "FALSE";
	}
	return "TRUE";
}

