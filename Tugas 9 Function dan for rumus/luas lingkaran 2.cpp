#include <iostream>
using namespace std;

float luas (float p, float t){
	float luas;
	luas=p*t;
	return luas;
}

int main()
{
	float p,t,hasil;



	cout<<"masukan panjang persegi";
	cin>>p;
	cout<<"masukan tinggi persegi";
	cin>>t;
	
	hasil = luas(p,t);
	cout<< hasil<<endl;

}


