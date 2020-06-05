#include"Libraries.h"

void Seminar4_2(int** arr, int col, int row)
{
	int max1 = INT_MIN;
	int max2 = INT_MIN;
	int max = INT_MIN;

	for (int i = 0; i < col; i++)
	{

		int sum = 0;

		for (int j = 0; j < i + 1; j++)
		{

			sum += arr[j][j + col - 1 - i];

		}

		max1 = sum;
	}

	for (int i = 0; i < col - 1; i++)
	{
		int sum = 0;

		for (int j = 0; j < i + 1; j++)
		{
			sum += arr[j + col - 1 - i][j];
		}

		max2 = sum;

	}

	if (max1 == max2)
		cout << "All sums are the same: " << max1 << endl;
	else
	{
		max = max1;
		if (max < max2)
			max = max2;
		cout << "The max sum = " << max << endl;
	}
}
