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

bool CheckNumberIfExistsInMatrix(int arr[3][3], int Number, short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (arr[i][j] == Number)
				return true;
		}
	}
	return false;
}

void IntersectedNumbers(int arr1[3][3], int arr2[3][3], short Rows, short Cols, int arrIntersect[9], int &arrIntLength) {
	arrIntLength = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (CheckNumberIfExistsInMatrix(arr2, arr1[i][j], Rows, Cols)) {
				arrIntersect[arrIntLength] = arr1[i][j];
				arrIntLength++;
			}
		}
	}
}

void PrintIntersectedNumbers(int arrIntersect[9], int arrIntLength) {
	for (int i = 0; i < arrIntLength; i++)
	{
		cout << arrIntersect[i] << "\t";
	}
}




int main()
{

	int arr1[3][3] = { {77, 5, 12}, {22, 20, 1}, {1, 0, 9} };
	int arr2[3][3] = { {5, 80, 90}, {22, 77, 1}, {10, 8, 33} };

	int arrIntersect[9] = {};
	int arrIntLength = 0;

	cout << "Matrix 1: \n";
	PrintMatrix(arr1, 3, 3);
	
	cout << endl;

	cout << "Matrix 2: \n";
	PrintMatrix(arr2, 3, 3);

	IntersectedNumbers(arr1, arr2, 3, 3, arrIntersect, arrIntLength);

	cout << endl;

	cout << "Intersected Numbers are: \n";
	PrintIntersectedNumbers(arrIntersect, arrIntLength);

	system("pause>0");
}