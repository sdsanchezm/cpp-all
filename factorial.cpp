#include <iostream>


using namespace std;

int main(){
int factorial(int n);
int iterative1(int n);
int iterative2(int n);
int iterative3(int n);

int n;
/*
cin>>n;
cout<<factorial(n);
cout<<endl;
*/
//for(int i=0; i<10; i++){
	iterative3(10);
	cout<<endl;
//}


	return 0;
}

int factorial(int n){
if(n < 2){
	return n;
}
	return n * factorial(n-1);
}

int iterative1(int n){
	if(n<2){
		cout<<"1";
		return 1;
	}
	
	cout<<"*";
	iterative1(n-1);
	cout<<"*";
	return 0;
}

int iterative2(int n){
	if(n<2){
		return 1;
	}
	
	iterative1(10);
	cout<<endl;
	iterative2(n-1);
	cout<<endl;
	return 0;
}

int iterative3(int n){
	if(n<1){
		cout<<"-";
		return 1;
	}

	cout<<"*";
	iterative3(n-1);
	n--;
	cout<<endl<<"*";
	iterative3(n-1);
	return 0;
}