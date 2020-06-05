#include"Libraries.h"

void InputElements(float* arr, int size)
//  заполнение массива элементами 
{
	cout << " Enter array:\n";
	for (int i = 0; i < size; i++)
	{
		cout << "element[" << i << "]--> ";
		cin >> arr[i];
	}
}