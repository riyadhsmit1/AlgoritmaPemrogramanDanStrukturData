#include <iostream>
using namespace std;
int main()

{
	string namasiswa;
	int nilaiI,nilaiII,nilaiIII,nilairatarata;
	
	cout<<"Program Hitung Nilai Rata-Rata"<<endl;
	cout<<"Nama Siswa : ";
	cin>>namasiswa;
	cout<<endl;
	
	cout<<"Nilai Pertandingan I : ";
	cin>>nilaiI;
	
	cout<<"Nilai Pertandingan II : ";
	cin>>nilaiII;
	
	cout<<"Nilai Pertandingan III : ";
	cin>>nilaiIII;
	
    nilairatarata=(nilaiI+nilaiII+nilaiIII)/3;
    
    cout<<"Siswa Yang Bernama = : "<<namasiswa<<endl;
    cout<<"Nilai rata-rata nya adalah = : "<<nilairatarata<<endl;
    
	if(nilairatarata >=85){
		cout<<"Mendapatkan Komputer i5";}
		else if (nilairatarata >=75){
		cout<<"Mendapatkan uang 2.500.000";}
		else {
		cout<<"Mendapatkan Hadiah Hiburan";}		
		
		
	return 0;
	
}
