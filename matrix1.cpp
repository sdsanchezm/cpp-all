#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
  
using namespace std; 

int main() 
{ 
	int pp(int x);
	int printVector(char Mx[20]);
	char* defineVector();
	char **defineMatrix();
	int printMatrix(char **Mx);

	char **Mchar3 = defineMatrix();

	printMatrix(Mchar3);

    //char Mchar1[20];
	//char Mchar1[20] = {'a','b','c','z','y','x','a','b','c','a','x','y','z','a','b','c','a','b','z','y'};
	//char* Mchar1 = defineVector();
    //printVector(Mchar1);

    char Mchar2[64];

	cout<<endl;
    return 0; 
}// end main

int pp(int x)
{
	int i;
	for(i=0; i<x; i++){
		cout<<"asd\n";
	}
	return 0;
}

char* defineVector(){
	int i;
	char* M1 = new char [20];
    for ( i=0; i<20; i++ ){
    	M1[i] = '*';
    }
	return M1;
}

char **defineMatrix(){
	char **outStr = new char*[64];
    for (int i=0;i<64;i++){
    	outStr[i]=new char[100];
    	for(int j=0;j<100;j++){
    		outStr[i][j]='-';
    	}
    }
    return outStr;
}

int printVector(char Mx[20])
{
	int i;
	for( i=0; i<20; i++ ){
		cout<<Mx[i]<<" ";
	}
	return 0; 
}

int printMatrix(char **Mx)
{
	for(int i=0; i<64; i++ ){
		for (int j=0; j<100; j++){
			cout<<Mx[i][j];
		}
	cout<<endl;
	}
	return 0;
}