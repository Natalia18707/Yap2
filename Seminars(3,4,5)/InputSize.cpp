#include"Libraries.h"

void InputSize(int& size)

{
	while (true)
	{
		cout << "\n\tEnter size-->";
		cin >> size;
		if ((size < 1) || (size > 32767))
		{
			system("cls");
			cout << "\n\tIncorrect size!\n\tEnter a size greater than zero.";
		}
		else
			break;
	}

}