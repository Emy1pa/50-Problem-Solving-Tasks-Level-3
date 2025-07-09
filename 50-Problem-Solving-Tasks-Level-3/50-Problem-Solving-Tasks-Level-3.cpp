#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

void fillMatrixWithOrderedNumbers(int arr[3][3], int Rows, int Cols, int &Counter) {
	Counter = 1;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			arr[i][j] = Counter;
			Counter++;
		}
	}

}

void PrintMatrixOrderedNumbers(int arr[3][3], int rows, int cols) {
	cout << "The following is a 3x3 ordered matrix: \n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}


int main()
{
	int arr[3][3];
	int Counter = 0;

	fillMatrixWithOrderedNumbers(arr, 3, 3, Counter);

	PrintMatrixOrderedNumbers(arr, 3, 3);

    system("pause>0");
}

