#include"Libraries.h"

void Seminar3_2(float* arr, int n)
{
	float sum2 = 0;
	int first = -1;
	int last = -10;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0.0)
		{
			first = i;
			break;
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0.0)
		{
			last = i;

		}

	}

	if (first == last)
	{
		cout << "Error. There is one negative element in the array." << endl;
	}
	if (1 + first == last)
	{
		cout << "Error. There are no elements between first and last negative elements." << endl;
	}
	if (2 + first == last)
	{
		cout << "Error. There is one element between first and last elements." << endl;
	}
	if (first == -1)
	{
		cout << "\n Error. There are no negative elements in the array.\n";
	}

	else
	{
		for (int i = first + 1; i < last; i++)
			sum2 += arr[i];


		cout << "The number of the first negative element: " << first << "  The number of the last negative element: " << last << endl;
		cout << "The sum: " << sum2 << endl;
	}

}