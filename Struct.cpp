void searchName(int numb, StudentList *tableT)
{
	int i;
	string Name;
	cout << "Enter the name of student that youre searching: ";
	cin >> Name;
	for (i = 0; i < numb; i++)
	{
		if (tableT->name == Name)
			searchtable = tableT;
	}

}
void searchSurname(int numb, StudentList *tableT)
{
	int i;
	string Surname;
	cout << "Enter the surname of student that youre searching: ";
	cin >> Surname;
	for (i = 0; i < numb; i++)
	{
		if (tableT->name == Surname)
			searchtable = tableT;
	}
}
void filters(int numb, StudentList *tableT)
{
	int k;
	cout << "Searching by Name(1) or Surname(2)??: ";
	cin >> k;
	switch (k)
	{
	case 1: searchName(numb, tableT);
		cout << "Searching complete " << endl;
		output(numb, tableT);
		break;
	case 2: searchSurname(numb, tableT);
		cout << "Searching complete " << endl;
		output(numb, tableT);
		break;
	}
}
