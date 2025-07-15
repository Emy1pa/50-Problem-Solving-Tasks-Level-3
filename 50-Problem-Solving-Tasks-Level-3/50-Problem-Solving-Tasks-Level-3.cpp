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

bool CheckIfPalindrome(int arr[3][3], short Rows, short Cols){
	for (short i = 0; i < Rows; i++)
	{
			if (arr[i][0] != arr[i][Cols - 1]) {
				return false;
			}
	}
	return true;
}











int main()
{

	int arr[3][3] = { {1, 2, 1}, {5, 5, 5}, {7, 3, 7} };


	cout << "Matrix 1: \n";
	PrintMatrix(arr, 3, 3);
	
	cout << endl;

	if (CheckIfPalindrome(arr, 3, 3))
		cout << "Yes: Matrix is Palindrome \n";
	else
		cout << "No: Matrix is NOT Palindrome \n";

	cout << endl;

	system("pause>0");
}