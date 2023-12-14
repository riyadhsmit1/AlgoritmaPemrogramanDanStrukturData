#include <iostream>
using namespace std;

float luas (float s) {
	float luas;
	luas = s*s;
	return luas;
}

float lingkaran (float l) {
	float lingkaran;
	lingkaran =3.14* l*l;
	return lingkaran;
}

float tabung (float j, float t) {
	float tabung;
	tabung = 2 * (22.0/7.0) * j * (j + t);
	return tabung;
}

int main()
{
	float s,l,t,j,hasil,hasil2,hasil3;
    int soal = 2;
    
    
 	for (int i = 0; i <soal; i++){
 	cout<<"Menghitung Luas Persegi"<<endl;

	cout<<"Masukan Sisi = ";
	cin>>s;
	hasil = luas(s);
	cout<<"Luas persegi dengan sisi "<<s<<" adalah = "<< hasil<<endl<<endl;}
	
	
	for (int i = 0; i <soal; i++){
	cout<<"Menghitung Luas Lingkaran"<<endl;
	cout<< "masukan jari-jari lingkaran = ";
	cin >> l;
	hasil2 = lingkaran (l);
	cout<< "luas lingkaran dengan jari-jari "<<l<<" adalah = "<< hasil2<<endl<<endl;}
	
	
 	for (int i = 0; i <soal; i++){
 	cout<<"Menghitung Luas Tabung"<<endl;
	cout<< "masukan jari-jari tabung = ";
	cin >> j;
	cout<< "masukan tinggi tabung = ";
	cin >> t;
	hasil3 = tabung (j,t);
	cout<< "luas permukaan tabung dengan jari-jari "<<j<<" dan tinggi "<<t<<" adalah = "<< hasil3<<endl<<endl;}
}

