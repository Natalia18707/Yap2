#include"Libraries.h"

void InputSize4(int& col, int& row)
{
	while (true)
	{
		cout << "Enter a columns of the square matrix --> ";
		cin >> col;

		if (col <= 0)
			cout << "This size is invalid. Please, enter the size > 0" << endl;
		if (col > 32767)
			cout << "This size is invalid. Please, enter the size < 32768" << endl;
		if (col == 1)
			cout << "This size isn't suitable for matrix operations." << endl;
		else
			break;
	}

	row = col;
}