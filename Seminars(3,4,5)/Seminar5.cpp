#include"Libraries.h"

void Seminar5()
{
	ifstream fin; // создадим обьект fin
	fin.open("file.txt");

	char* array = new char[500];
	fin.getline(array, 500);


	int size = strlen(array);
	if (array[2] > 'А' && array[2] < 'я')
		cout << "error!";///русский 


	if (size == 0)
	{
		cout << "\nError!!\nFile is empty! Check its contents.\n ";/// файл пуст 
	}
	else
	{
		cout << "The words starting with vowels:" << endl;

		for (int i = 0; i < size; i++)
		{

			if (array[i - 1] == ' ' && (array[i] == 'a' || array[i] == 'o' || array[i] == 'e' || array[i] == 'u' || array[i] == 'i' || array[i] == 'A' || array[i] == 'O' ||
				array[i] == 'E' || array[i] == 'U' || array[i] == 'I'))
			{
				while (array[i] != ' ')
				{
					cout << array[i];
					i++;
				}
				cout << ' ';

			}

		}
	}
	delete[] array;
	array = NULL;

	fin.close();
}