// 2d matrix 
#include <iostream>
using namespace std;

int main(){
cout << "2d matrix in cpp" << endl;

int matrix1[2][2] = {{1,2},{3,4}};

int i = 0;
int j = 0;
for (i = 0; i < 2; i++)
{
	for (j = 0; j < 2; j++)
	{
		cout << " " << matrix1[i][j];
	};
	cout << endl;
};

return 0;
}
