/*Modify the Example program 2 of slide 45 (Topic 2 Arrays) so that it also gives the 
sum of each column (as well as the sum of each row). */
#include <iostream>
using namespace std;
int main()
{
	const int rows = 3;
	const int columns = 3;
	int A[rows][columns];
	int i, j, totalr = 0,totalc = 0;
	cout << "Enter " << rows * columns << " integers, " << columns << " per row: " <<endl;
		for (i = 0; i < rows; i++)
		{
			cout << "Row " << i << " : " << endl;
			for (j = 0; j < columns; j++)
				cin >> A[i][j];
		}
	cout << "Table with the totals of each row is: " << endl;
	for (i = 0; i < rows; i++)
	{
		totalr = 0; //reset total at the beginning of each row
		for (j = 0; j < columns; j++)
		{
			cout << A[i][j] << " ";
			totalr = totalr + A[i][j]; //add to total
		}
		cout << " = " << totalr << endl; //print total
	}
	return 0;
}//main