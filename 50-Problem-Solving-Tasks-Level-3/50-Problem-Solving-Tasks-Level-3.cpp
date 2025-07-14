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

bool CheckIfMatrixIsScalar(int arr[3][3], short Rows, short Cols) {
	int scalarNumber = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (i == j && arr[i][j] != scalarNumber) {
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

	int arr[3][3] = { {1, 0, 0}, {0, 9, 0}, {0, 0, 1} };

	cout << "Matrix 1: \n";
	PrintMatrix(arr, 3, 3);


	if (CheckIfMatrixIsScalar(arr, 3, 3)) {
		cout << "\n Yes, Matrix is Scalar \n";
	}
	else {
		cout << "\n No, Matrix is not Scalar \n";
	}
	system("pause>0");
}