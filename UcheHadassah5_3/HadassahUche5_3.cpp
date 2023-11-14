/*Name:Uche Hadassah
This program receives  a 3x3 array from the user, and outputs two tables;One with the totals of each row 
and another with the totals of each column*/
#include <iostream>
using namespace std;
int main()
{
	const int ROW = 3;
	const int COLUMN = 3;
	int A[ROW][COLUMN];
	int i, j, totalr = 0,totalc = 0;
	cout << "Enter " << ROW * COLUMN << " integers, " << COLUMN << " per row: " <<endl;
		for (i = 0; i < ROW; i++)//Receives the array from the user by row 
		{
			cout << "Row " << i << " : " << endl;
			for (j = 0; j < COLUMN; j++)
				cin >> A[i][j];
		}
	cout << "Table with the totals of each row is: " << endl;
	for (i = 0; i < ROW; i++)
	{
		totalr = 0; //reset total at the beginning of each row
		for (j = 0; j < COLUMN; j++)
		{
			cout << A[i][j] << " ";
			totalr = totalr + A[i][j]; //add to total
		}
		cout << " = " << totalr << endl; //print total
	}
	cout << "Table with the totals of each column is: " << endl;
	for (i = 0; i < ROW; i++)
	{
		totalc = 0; //reset total at the beginning of each column
		for (j = 0; j < COLUMN; j++)
		{
			cout << A[j][i] << " ";
			totalc = totalc + A[j][i]; //add to total
		}
		cout << " = " << totalc << endl; //print total
	}
	return 0;
}//main