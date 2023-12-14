#include <iostream>
#include <stdio.h>
using namespace std;

int modul(int x, int y){
	return x % y;
}

int main(){
	int bil1, bil2;
	cout<<"bilangan ke 1 = ";
	cin>>bil1;
	cout<<"bilangan ke 2 = ";
	cin>>bil2;


	int (*modulPtr)(int,int);
	modulPtr = &modul;

	int hasil = (*modulPtr)(bil1, bil2);

if(hasil == 0){
	cout<<bil2;
}
else{cout<<bil1;
}
	//cout<<"hasilnya adalah = "<<hasil<<endl; 

	return 0;
}
