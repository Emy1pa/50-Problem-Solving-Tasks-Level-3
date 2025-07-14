#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int ReadPositiveNumber(string Message){
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

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

int CountGivenNumberInMatrix(int arr[3][3], short Rows, short Cols, int CheckedNumber) {
	int Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (arr[i][j] == CheckedNumber) {
				Counter++;
			}
		}
	}
	return Counter;
}






int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3] = { {9, 1, 12}, {0, 9, 1}, {0, 9, 9} };

	cout << "Matrix 1: \n";
	PrintMatrix(arr, 3, 3);


	int CheckedNumber = ReadPositiveNumber("Enter the number to count in a matrix ?");

	cout << "Number " << CheckedNumber << " count in matrix is " << CountGivenNumberInMatrix(arr, 3, 3, CheckedNumber);
	
	system("pause>0");
}