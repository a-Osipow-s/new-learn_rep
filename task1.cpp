#include "pch.h"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prav(string str) {
	stack <int> stack;
	char krg_lft = '(', krg_right = ')'; char fig_lft = '{', fig_right = '}'; char kvad_lft = '[', kvad_right = ']';
	int err = 0;
	for (int i = 0; i < str.size() && !err; ++i) {
		if (str[i] == krg_lft) stack.push(i);
		else if (str[i] == krg_right) {
			if (stack.size() > 0) stack.pop();
			else err = -1;
		}
		if (str[i] == fig_lft) stack.push(i);
		else if (str[i] == fig_right) {
			if (stack.size() > 0) stack.pop();
			else err = -1;
		}
		if (str[i] == kvad_lft) stack.push(i);
		else if (str[i] == kvad_right) {
			if (stack.size() > 0) stack.pop();
			else err = -1;
		}
	}
	if (!err && stack.size() > 0) err = -1;
	return err;
}

int main()
{
	string scoba;
	cin >> scoba;
	cout << endl << scoba << ":" << prav(scoba) << endl;
	return 0;
}