//============================================================================
// Name        : Lab3_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Lab3_02
//============================================================================

#include <iostream>
using namespace std;

int arr[3][3];
int type;


int main() {

	cout << "Please Enter 3 Numbers for Row 1: " << endl;
			for (int i= 0; i<3; i++)
			{
				cin >> arr[0][i];
			}
	cout << "Please Enter 3 Numbers for Row 2: " << endl;
			for (int i= 0; i<3; i++)
			{
				cin >> arr[1][i];
			}
	cout << "Please Enter 3 Numbers for Row 3: " << endl;
			for (int i= 0; i<3; i++)
			{
				cin >> arr[2][i];
			}

	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout <<endl;
	}

	for (int i = 1;i < 3; i++){
			for(int j=0;j < i;j++){
				if(arr[i][j] != 0){
					type=1;
					break;
				}
			}
	}

	if (type == 0)
	{
		cout << "Square Matrix Is An Upper Triangular Matrix!" ;
		return 0;
	}

	for (int i = 0;i < 3; i++){
			for(int j=i+1;j < 3;j++){
				if(arr[i][j] != 0){
					type=0;
					break;
				}
			}
	}
	if(type == 1)
	{
		cout << "Square Matrix Is An Lower Triangular Matrix!" ;
	}
	else
		cout << "Square Matrix Is A Normal Matrix";
	return 0;
}

//Option 1 - Upper
/*Please Enter 3 Numbers for Row 1:
1
2
3
Please Enter 3 Numbers for Row 2:
0
1
2
Please Enter 3 Numbers for Row 3:
0
0
1
1 2 3
0 1 2
0 0 1
Square Matrix Is An Upper Triangular Matrix!
*/


//Option 2 - Lower
/*Please Enter 3 Numbers for Row 1:
1
0
0
Please Enter 3 Numbers for Row 2:
1
2
0
Please Enter 3 Numbers for Row 3:
1
2
3
1 0 0
1 2 0
1 2 3
Square Matrix Is An Lower Triangular Matrix!
*/


//Option 3 - Normal
/*Please Enter 3 Numbers for Row 1:
1
2
3
Please Enter 3 Numbers for Row 2:
4
5
6
Please Enter 3 Numbers for Row 3:
7
8
9
1 2 3
4 5 6
7 8 9
Square Matrix Is A Normal Matrix
*/

