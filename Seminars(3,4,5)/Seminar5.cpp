#include"Libraries.h"

void Seminar5()
{
	ifstream fin; // �������� ������ fin
	fin.open("file.txt");

	char* array = new char[500];
	fin.getline(array, 500);


	int size = strlen(array);
	if (array[2] > '�' && array[2] < '�')
		cout << "error!";///������� 


	if (size == 0)
	{
		cout << "\nError!!\nFile is empty! Check its contents.\n ";/// ���� ���� 
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