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
			cout << setw(4) << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols) {
	cout << "Middle Row of Matrix1 is: " << endl;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (i == 1) {
				cout << arr[i][j] << "\t";
			}
		}
	}
}

void PrintMiddleColumnOfMatrix(int arr[3][3], short Rows, short Cols) {
	cout << "Middle Column of Matrix1 is: " << endl;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (j == 1) {
				cout << arr[i][j] << "\t";
			}
		}
	}
}




int main()
{
	srand((unsigned)time(NULL));
	
	int arr1[3][3], arrResults[3][3];

	FillMatrixWithRandomNumbers(arr1, 3, 3);

	cout << "Matrix 1: \n";
	PrintMatrix(arr1, 3, 3);

	cout << endl;

	
	PrintMiddleRowOfMatrix(arr1, 3, 3);
	cout << endl << endl;
	PrintMiddleColumnOfMatrix(arr1, 3, 3);


	
	

	system("pause>0");
}

