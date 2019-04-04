// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct stack {
	char bracket;
	stack *next;
};

bool isEmpty(stack *top) {
	if(top == NULL)
		return 1;
	else
		return 0;
}

char bktMapping(char bkt) {
	switch (bkt) {
	case ')':
		return '(';
		break;
	case ']':
		return '[';
		break;
	case '}':
		return '{';
		break;
	default:
		break;
	}
}

void stackPushElem(stack **top, char bkt) {
	stack *q = new stack;
	q -> bracket = bkt;
	q -> next = *top;
	*top = q;
}

void stackDeleteElem(stack **top) {
	stack *q = *top;
	*top = (*top) -> next;
	free(q);
}

void findTheOppositeBkt(stack **top, char bkt) {
	if((*top)->bracket == bktMapping(bkt)) 
		stackDeleteElem(top);
	else 
		stackPushElem(top, bkt);
}

int main()
{
	stack *top = NULL;
	//char bktStringTrue[20] = {'(','(', '[', '{', '}',']', ')', ')'};
	char bktStringFalse[20] = {'(', '(', ')','[', ']', '{', ')', '}'};
	for(int i = 0;i < 8;i++) {
		if(isEmpty(top))
			stackPushElem(&top, bktStringFalse[i]);
		else
			findTheOppositeBkt(&top, bktStringFalse[i]);
	}

	if(isEmpty(top))
		cout << "brackets are set right!" << endl;
	else
		cout << "brackets are placed incorrectly!" << endl;

	return 0;
}

