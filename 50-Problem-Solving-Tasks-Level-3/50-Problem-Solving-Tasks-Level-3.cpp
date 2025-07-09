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

void displayRowSums(int matrix[3][3], short Rows, short Cols){
    int sum = 0;
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            sum += matrix[i][j];
        }
        cout << " Row " << (i + 1) << " Sum = " << sum << endl;
        sum = 0;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3];

    generateRandomMatrix3x3(matrix, 3, 3);

    cout << "The following is a 3X3 random matrix: \n";
    displayMatrix3x3(matrix, 3, 3);


    cout << "The following are the sum of each row in the matrix: " << endl;
    displayRowSums(matrix, 3, 3);

    system("pause>0");
    return 0;
}

