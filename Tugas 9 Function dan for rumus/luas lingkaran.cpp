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
	int soal = 2;
	
	for (int i=0; i<soal ;i++){
		cout << "masukan soal = ";
		cin >> soal;


	cout<<"masukan panjang persegi";
	cin>>p;
	cout<<"masukan tinggi persegi";
	cin>>t;
	
	hasil = luas(p,t);
	cout<< hasil<<endl;

}

}
