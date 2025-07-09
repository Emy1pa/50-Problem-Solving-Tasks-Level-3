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

int ColumnSum(int matrix[3][3], short Rows, short ColNumber) {
    int Sum = 0;

    for (short i = 0; i <= Rows - 1; i++) {
        Sum += matrix[i][ColNumber];
    }
    return Sum;
}



void PrintColumnsSum(int matrix[3][3], short Rows, short Cols) {
    cout << "The following are the sum of each column in the matrix: " << endl;
    for (short j = 0; j < Cols; j++)
    {
        cout << " Col " << j + 1 << " Sum = " << ColumnSum(matrix, Rows, j) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3], arr[3];

    generateRandomMatrix3x3(matrix, 3, 3);

    cout << "The following is a 3X3 random matrix: \n";
    displayMatrix3x3(matrix, 3, 3);


    PrintColumnsSum(matrix, 3, 3);

    system("pause>0");
}

