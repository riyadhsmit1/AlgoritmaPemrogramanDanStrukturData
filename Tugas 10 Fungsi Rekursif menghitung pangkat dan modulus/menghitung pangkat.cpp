#include <iostream>
using namespace std;

int pangkat (int x, int y){
	if (y == 0){
		return 1;
	}
	else {return x * pangkat (x, y-1);
	}
}

int main(){
	int x, y;
	
	cout<<"masukan nilai x = ";
	cin>> x;
	cout<<"masukan nilai y = ";
	cin>> y;
	
	int hasil = pangkat (x,y);
	cout<<"hasilnya adalah = "<<  hasil <<endl;
}
