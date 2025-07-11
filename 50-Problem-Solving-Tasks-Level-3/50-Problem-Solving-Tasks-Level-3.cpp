#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To) {
	int Random = rand() % (To - From + 1);
	return Random;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			printf(" %0*d  ", 2, arr[i][j]);
			//cout << setw(4) << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
bool CheckIfMatrixAreEqual(int arr1[3][3], int arr2[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (arr1[i][j] != arr2[i][j]) {
				return false;
			}
		}
	}
	return true;
}





int main()
{
	srand((unsigned)time(NULL));

	int arr1[3][3], arr2[3][3];

	FillMatrixWithRandomNumbers(arr1, 3, 3);
	FillMatrixWithRandomNumbers(arr2, 3, 3);

	cout << "Matrix 1: \n";
	PrintMatrix(arr1, 3, 3);
	cout << endl;

	cout << "Matrix 2: \n";
	PrintMatrix(arr2, 3, 3);
	cout << endl;

	if (CheckIfMatrixAreEqual(arr1, arr2, 3, 3)) {
		cout << "Yes, both matrix are equal. \n";
	}
	else {
		cout << "No, both matrix are not equal. \n";
	}

	system("pause>0");
}

