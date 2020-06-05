#include"Libraries.h"

void Seminar3_1(float* arr, int size)
{


	float sum1 = 0;
	int size1;
	if (size <= 3)
	{
		cout << "This size can not be used in this option. Please, enter the size > 3" << endl;
		///cout << "его размер не может быть использован в этом варианте. Пожалуйста, введите размер> 3" << endl;
		cin >> size1;
		float* arr1 = new float[size1];
		cout << "enter the elements:" << endl;
		for (int i = 0; i < size1; i++)
			cin >> arr1[i];
		cout << endl;
		for (int i = 0; i < size1; i++)
		{
			if (i % 2 == 1)
			{
				sum1 += arr1[i];

				cout << "The element: " << arr1[i] << " The number: " << i << endl;
			}
		}
		cout << "The sum: " << sum1 << endl;
		delete[] arr1;
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			if (i % 2 == 1)
			{
				sum1 += arr[i];

				cout << "The element: " << arr[i] << " The number: " << i << endl;
			}
		}

		cout << "The sum: " << sum1 << endl;

	}
}
