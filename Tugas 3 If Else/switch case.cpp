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
    
    cout<<"ketentuan nilai rata rata"<<endl;
    cout<<"1.Nilai > 85"<<endl;
    cout<<"2.Nilai > 75"<<endl;
    cout<<"3.Nilai < 70"<<endl;
    
 
    cout<<"masukan rata-rata = ";
    cin>>nilairatarata;
    
    	switch(nilairatarata){
    		case 1 :
			cout<<"Mendapatkan Hadiah Komputer Core i5 ";
			break;
	    	case 2 :
			cout<<"Mendapatkan Uang 2.500.000 ";
			break;
	    	case 3 :
			cout<<"Mendapatkan Hadiah Hiburan ";
			break;
	

	}
		


	

	return 0;
	
}
