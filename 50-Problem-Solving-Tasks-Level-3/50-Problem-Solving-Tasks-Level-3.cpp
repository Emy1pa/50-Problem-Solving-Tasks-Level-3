#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To){
	int Random = rand() % (To - From + 1);
	return Random;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void PrintMultiplyOfTwoMatrix(int arr1[3][3], int arr2[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			arr1[i][j] *= arr2[i][j];
		}
		
	}
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

	PrintMultiplyOfTwoMatrix(arr1, arr2, 3, 3);

	cout << "Results: \n";
	PrintMatrix(arr1,  3, 3);
	

	system("pause>0");
}

