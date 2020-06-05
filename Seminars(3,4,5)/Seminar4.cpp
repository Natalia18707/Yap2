#include"Libraries.h"
#include"Prototypes.h"

void Seminar4()
{
	int col;
	int row;
	InputSize4(col, row);

	int** arr = new int* [col];
	for (int i = 0; i < col; i++)
	{
		arr[i] = new int[col];
	}

	InputElements4(arr, col, row);
	MenuSeminar4();

	while (true)
	{
		char section;

		cout << " \n Which section of seminar 4 do you want to choose? "
			<< "\n\tEnter number--> ";
		cin >> section;

		switch (section)
		{
		case '1':
			Seminar4_1(arr, col, row);
			break;
		case '2':
			Seminar4_2(arr, col, row);
			break;
		default:
			cout << "Eror";
			break;
		}
		char flag;

		cout << "\n Want to choose another section in the seminar(1),want to choose another seminar any\n ";
		cin >> flag;

		if (flag != '1')
			break;
		else
			MenuSeminar4();


	}

	for (int i = 0; i < col; i++)
		delete arr[i];
	delete[] arr;
	arr = NULL;

}
