#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;


void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols) {
	int Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols){
	cout << "The following is a 3x3 Ordered matrix: \n";
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void PrintTransposedMatrix(int arr[3][3], int Rows, int Cols) {
	cout << "the following is the transposed matrix: \n";
	for (int j = 0; j < Cols; j++)
	{
		for (int i = 0; i < Rows; i++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}



int main()
{
	srand((unsigned)time(NULL));
	
	int arr[3][3];

	FillMatrixWithOrderedNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

	PrintTransposedMatrix(arr, 3, 3);
	system("pause>0");
}

