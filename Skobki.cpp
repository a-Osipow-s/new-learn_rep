#include "pch.h"
#include <string>

#include <iostream>
using namespace std;
int match(char str[])
{
	char *pair;

	while ((pair = strstr(str, "()")) || (pair = strstr(str, "[]")) || (pair = strstr(str, "{}")))
		memmove(pair, pair + 2, strlen(pair + 2) + 1);

	return *str == NULL;
	delete[]pair;
}

int main()
{
	char str[40];
	gets_s(str);
	if (match(str)) cout << "true";
	else cout << "false";
	
}