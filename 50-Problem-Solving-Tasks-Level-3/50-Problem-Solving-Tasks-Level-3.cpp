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

bool IsNumberExists(int arr[3][3], int Number, short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (arr[i][j] == Number) {
				return true;
			}
		}
	}
	return false;
	
}



int main()
{

	int arr[3][3] = { {77, 5, 12}, {22, 20, 1}, {1, 0, 9} };

	cout << "Matrix 1: \n";
	PrintMatrix(arr, 3, 3);
	
	int Number = 0;

	cout << "Please enter the number to look for in matrix ? : ";
	cin >> Number;
	cout << endl;

	if (IsNumberExists(arr, Number, 3, 3)) {
		cout << "Yes it is there.";
	}
	else {
		cout << "No it is not there.";
	}
	cout << endl;

	system("pause>0");
}