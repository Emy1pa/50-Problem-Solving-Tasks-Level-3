#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int GenerateRandomNumber(int From, int To){
    int RandomNumber = rand() % (To - From + 1) + From;
	return RandomNumber;
}

void generateRandomMatrix3x3(int matrix[3][3], short Rows, short Cols) {
    
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            matrix[i][j] = GenerateRandomNumber(1, 100);
        }
    }
}

void displayMatrix3x3(int matrix[3][3], short Rows, short Cols){
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++)
        {
            cout << setw(3) << matrix[i][j]  << "\t";
        }
        cout << endl;
    }
}

int RowSum(int matrix[3][3], short RowNumber, short Cols) {
    int Sum = 0;

    for (short j = 0; j <= Cols - 1; j++) {
        Sum += matrix[RowNumber][j];
    }
    return Sum;
}

void storeRowSumsInArray(int matrix[3][3], short Rows, short Cols, int arr[3]) {
    cout << "The following are the sum of each row in the matrix: " << endl;
    for (short i = 0; i < Rows; i++)
    {
        arr[i] = RowSum(matrix, i, Cols);
        cout << " Row " << i + 1 << " Sum = " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3], arr[3];

    generateRandomMatrix3x3(matrix, 3, 3);

    cout << "The following is a 3X3 random matrix: \n";
    displayMatrix3x3(matrix, 3, 3);


    storeRowSumsInArray(matrix, 3, 3, arr);

    system("pause>0");
}

