void Averagemark(int numb, StudentList *tableT)
{
	for (int i = 0; i < numb; i++)
	{
		tableT[i].averageball = (tableT[i].drwing + tableT[i].phys + tableT[i].progr + tableT[i].maths) / 4.;
		cout << endl;
	}
}
void sort(int numb, StudentList *tableT)
{
	int i, j;
	StudentList temporary;
	for (int i = 0; i < numb; i++)
		for (int j = i + 1; j < numb; j++)
			if ((&tableT[i])->averageball < (&tableT[j])->averageball)
			{
				temporary = tableT[i];
				tableT[i] = tableT[j];
				tableT[j] = temporary;
			}
}