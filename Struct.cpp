
void AddStudent(int numb, int num)
{
	int i;
	int sum = numb + num;
	StudentList *table2 = new StudentList[sum];
	for (i = 0; i < numb; i++)
	{
		addtable[i] = table[i];
	}
	for (i = numb, i < sum; i++)
	{
		cout << "input name " << endl;
		cin >> addtable->name;
		cout << "input surname " << endl;
		cin >> addtable->surname;
		cout << "input patronym " << endl;
		cin >> addtable->patronym;
		cout << "Input Marks: " << endl;
		cout << "Drawing: ";
		cin >> addtable->drwing;
		cout << "Physics: ";
		cin >> addtable->phys;
		cout << "Programming: ";
		cin >> addtable->progr;
		cout << "Maths: ";
		cin >> addtable->maths;
	}
}
void AddRequest(int numb)
{

	int k;
	cout << "Want to add students? " << endl;
	cout << "1-yes,2-no " << endl;
	cin >> k;
	switch (k)
	{
	case 1:
	{
		cout << "How many students to add?" << endl;
		int num;
		cin >> num;
		AddStudent(numb, num);
	}
	break;
	case 2:break;
	}



}