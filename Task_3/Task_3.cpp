//Louis Ulysse Grace - Section A - Question 3


#include <iostream>
#include <string>
using namespace std;

//Inputs values into a 3x3 matrix
void arrInput(string arrId, int array[3][3]) {

	int counter = 1;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int x;
			cout << "Enter value for array " << arrId << ", section " << counter << ": ";
			cin >> x;
			array[i][j] = x;
			counter++;
		}
	}

}

//Takes in two filled 3x3 matrices and sums each index value into the relevant index of a third matrix.
//It then multiplies the third matrix values by 3, displaying everything along the way
void arrSum(string arrId, int arrayA[3][3], int arrayB[3][3], int arrayC[3][3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arrayC[i][j] = arrayA[i][j] + arrayB[i][j];
		}
	}

	cout << "\nArray " << arrId << ": ";
	for (int i = 0; i < 3; i++) {
		cout << "\n{";
		for (int j = 0; j < 3; j++) {
			cout << arrayC[i][j];
			if (j < 2) { cout << ", "; }
		}
		cout << "}";
	}

	cout << "\nArray " << arrId << " x3: ";
	for (int i = 0; i < 3; i++) {
		cout << "\n{";
		for (int j = 0; j < 3; j++) {
			cout << arrayC[i][j] * 3;
			if (j < 2) { cout << ", "; }
		}
		cout << "}";
	}

}

//Prints array.
void arrOutput(string arrId, int array[3][3]) {

	cout << "\nArray " << arrId << ": ";
	for (int i = 0; i < 3; i++) {
		cout << "\n{";
		for (int j = 0; j < 3; j++) {
			cout << array[i][j];
			if (j < 2) { cout << ", "; }
		}
		cout << "}";
	}

}

int main() {

	int A[3][3];
	int B[3][3];
	int C[3][3];


	arrInput("A", A);
	cout << "--------------------------------------" << endl;
	arrInput("B", B);
	cout << "--------------------------------------" << endl;

	
	arrOutput("A", A);
	arrOutput("B", B);

	arrSum("C", A, B, C);

	cout << endl;
	system("pause");
	return 0;
}