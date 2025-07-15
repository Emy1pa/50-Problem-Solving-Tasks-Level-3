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

int getMaxNumber(int arr[3][3], short Rows, short Cols) {
	int Max = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (arr[i][j] > Max) {
				Max = arr[i][j];
			}
		}
	}
	return Max;
}

int getMinimumNumber(int arr[3][3], short Rows, short Cols) {
	int Min = arr[0][0];
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (arr[i][j] < Min) {
				Min = arr[i][j];
			}
		}
	}
	return Min;
}





int main()
{

	int arr[3][3] = { {77, 5, 12}, {22, 20, 6}, {14, 3, 9} };


	cout << "Matrix 1: \n";
	PrintMatrix(arr, 3, 3);
	
	cout << endl;

	cout << "Minimum Number is: ";
	cout << getMinimumNumber(arr, 3, 3);

	cout << endl << endl;

	cout << "Maximum Number is: ";
	cout << getMaxNumber(arr, 3, 3);

	cout << endl;

	system("pause>0");
}