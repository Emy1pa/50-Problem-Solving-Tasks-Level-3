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
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			printf(" %0*d  ", 2, arr[i][j]);
			//cout << setw(4) << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int PrintSumOfMatrix(int arr[3][3], short Rows, short Cols){
	int sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}






int main()
{
	srand((unsigned)time(NULL));
	
	int arr1[3][3], arrResults[3][3];

	FillMatrixWithRandomNumbers(arr1, 3, 3);

	cout << "Matrix 1: \n";
	PrintMatrix(arr1, 3, 3);
	cout << endl;

	cout << "Sum of Matrix1 is: " << PrintSumOfMatrix(arr1, 3, 3) << endl;

	
	

	

	system("pause>0");
}

