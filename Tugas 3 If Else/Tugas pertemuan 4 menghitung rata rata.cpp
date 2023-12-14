#include <iostream>
using namespace std;
int main()

{
	string namasiswa;
	int nilaiI,nilaiII,nilaiIII,nilairatarata;
	//clrscr;
	
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
	
    nilairatarata=nilaiI,nilaiII,nilaiIII/3;
    cout<<"Siswa Yang Bernama = : "<<namasiswa<<endl;
    cout<<"Nilai rata-rata nya adalah = : "<<nilairatarata<<endl;
    
    	if(nilairatarata >= 85){
	cout<<"Mendapatkan hadiah Komputer Core i5 ";
	}
		else if (nilairatarata >= 70)
		{	
	cout<<"Mendapatkan hadiah Uang sebesar 2.500,000";}
	
		else if (nilairatarata <= 70){
			
	cout<<"Mendapatkan hadiah Hiburan";
			}
	

	return 0;
	
}







	

