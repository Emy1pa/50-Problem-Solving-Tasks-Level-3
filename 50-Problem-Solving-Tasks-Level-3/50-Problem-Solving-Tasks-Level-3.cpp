#include <iostream>
#include <cstdlib>
using namespace std;

int GenerateRandomNumber(int From, int To){
    int RandomNumber = rand() % (To - From + 1) + From;
	return RandomNumber;
}

void generateRandomMatrix3x3(int matrix[3][3]) {
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = GenerateRandomNumber(1, 100);
        }
    }
}

void displayMatrix3x3(int matrix[3][3]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int matrix[3][3];

    generateRandomMatrix3x3(matrix);

    cout << "The following is a 3X3 random matrix: \n";
    displayMatrix3x3(matrix);

    return 0;
}

