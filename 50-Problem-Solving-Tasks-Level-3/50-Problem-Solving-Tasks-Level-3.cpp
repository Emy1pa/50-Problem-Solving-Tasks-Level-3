#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;



void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

bool CheckIfMatrixIsIdentity(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (i == j && arr[i][j] != 1) {
				return false;
			}
			else if (i != j && arr[i][j] != 0) {
				return false;
			}
		}
	}
	return true;
}






int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] = { {1, 0, 0}, {0, 1, 0}, {0, 0, 1} };

	cout << "Matrix 1: \n";
	PrintMatrix(arr, 3, 3);


	if (CheckIfMatrixIsIdentity(arr, 3, 3)) {
		cout << "\n Yes, Matrix is Identity \n";
	}
	else {
		cout << "\n No, Matrix is not Identity \n";
	}
	system("pause>0");
}