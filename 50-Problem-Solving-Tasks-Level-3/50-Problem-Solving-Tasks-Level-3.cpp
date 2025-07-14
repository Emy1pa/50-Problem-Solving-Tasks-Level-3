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

bool IsSparseMatrix(int arr[3][3], short Rows, short Cols) {
	int ZeroCount = 0, OtherCount = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			if (arr[i][j] == 0) {
				ZeroCount++;
			}
			else {
				OtherCount++;
			}
		}
	}
	return ZeroCount > OtherCount;
}






int main()
{

	int arr[3][3] = { {0, 0, 12}, {0, 0, 1}, {0, 0, 9} };

	cout << "Matrix 1: \n";
	PrintMatrix(arr, 3, 3);

	if (IsSparseMatrix(arr, 3, 3)) {
		cout << "Yes: It is Sparse Matrix \n";
	}
	else {
		cout << "No: It is not Sparse Matrix \n";
	}
	
	
	system("pause>0");
}