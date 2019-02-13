#include "stdio.h"
#include <iostream>
#include <math.h>
#include <cmath>
#include <cstdlib>
using namespace std;
const int n = 5; //amout of elements in matrix, constant
double fulls = 1; //all sums in one

class Matrix
{
 private:
 int Matrix[n][n]; 

 public:
 void inputMatrix();
 void outputMatrix();
 void sortMatrix();
 void sumMatrix();
 void synthInputMatrix();
 void geometrMatrix();


};

void Matrix::synthInputMatrix()
{
 M[0][0] = 2; M[0][1] = 1; M[0][2] = 3; M[0][3] = 5;
 M[1][0] = 1; M[1][1] = 8; M[1][2] = 6; M[1][3] = 7;
 M[2][0] = 4; M[2][1] = 5; M[2][2] = 7; M[2][3] = 9;
 M[3][0] = -2; M[3][1] = 8; M[3][2] = -3; M[3][3] = -9;
}

void Matrix::inputMatrix()
{
 
 int i, j;
 for (i = 0; i < n; i++)
 {
	 for (j = 0; j < n; j++)
	 {
		 cin » M[i][j];
	 }
	 
 }
 cout « "Matrix: " « n « "x" « n « endl;
 cout « "Please, input the elements of matrix:" « endl


}

void Matrix::outputMatrix()
{
 
 int i, j;
 for (i = 0; i < n; i++)
 {
	for (j = 0; j < n; j++)
	{
		cout « "Matrix: " « n « "x" « n « endl;
	}
 }
 
  cout « M[i][j] « " ";
  cout « " " « endl;
}




void Matrix::sortMatrix()
{
	int temp, item;
	int i, j;
	i = 0;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			temp = M[j][i]; //temp - it's temporary variable A[1][1], A[1][2]
			item = j - 1; //index of previous element of Matrix
		}
	}

	while (item >= 0 && M[item][i] > temp) //while previous element is not 0 and M[previous]>M[present]
	{
		M[item + 1][i] = M[item][i]; //transposition
		M[item][i] = temp;
		item--;

	}
}


void Matrix::sumMatrix()
{
	int i, j, k = 1, s = 0;
	int m = 1;

	for (j = 4; j > 0; j--)
	{

		for (i = 1; i < n; i++)
		{
			s = s + M[i][j];

		}
		cout « "Suma " « j « " = " « s;
		m++;
		fulls = fulls * s;
		s = 0;
		k++;
	}
}


void Matrix::geometrMatrix()
{
  double kist_of_sum = n - 1;
  double rez = 0, step = 1 , kist_of_sum; //zminna stepin

  rez = pow(fulls, step);
   cout « "Serednie geometrichne = " « rez « endl;




}

int main(void)
{
  Matrix X;
  X.inputMatrix();
  X.sortMatrix();
  X.outputMatrix();
  X.sumMatrix();
  X.geometrMatrix();
  printf("\n");
 return 0;

}
