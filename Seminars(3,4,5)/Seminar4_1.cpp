#include"Libraries.h"

void Seminar4_1(int** arr, int col, int row)
{
	int prod = 1;
	int negativ = -1;
	int* arr1 = new int[col];
	*arr1 = 0;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			if (arr[i][j] < 0)
				negativ -= i;
			arr1[i]++;
		}
	}

	if (negativ < -col + 1)
		cout << "Error. There is no rows without negative elements." << endl;

	else
	{

		for (int i = 0; i < col; i++)
		{
			prod = 1;

			for (int j = 0; j < row; j++)
			{
				for (int j2 = i; j2 < row; j2++)
				{
					if (arr[i][j2] < 0)
					{
						prod = -1;
					}

				}
				prod *= arr[i][j];

			}
			if (prod < 0)
				cout << "" << endl;
			else
			{
				cout << "The number of the row: " << i << "  The product: " << prod << endl;
			}
		}

	}


}