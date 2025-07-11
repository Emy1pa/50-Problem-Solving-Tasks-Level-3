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
int SumOfMatrix(int arr[3][3], short Rows, short Cols) {
	int Sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			Sum += arr[i][j];
		}
	}
	return Sum;
}
bool CheckIfMatrixSumAreEqual(int arr1[3][3], int arr2[3][3], short Rows, short Cols) {

	return (SumOfMatrix(arr1, Rows, Cols) == SumOfMatrix(arr2, Rows, Cols));
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

	if (CheckIfMatrixSumAreEqual(arr1, arr2, 3, 3)) {
		cout << "Yes, both matrix sum are equal. \n";
	}
	else {
		cout << "No, both matrix sum are not equal. \n";
	}

	system("pause>0");
}