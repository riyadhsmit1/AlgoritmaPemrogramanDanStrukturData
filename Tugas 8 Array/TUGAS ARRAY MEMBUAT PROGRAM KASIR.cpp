#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main(){
		int banyakjenis,jumlah[50],jumlahharga,d,p,s;
		string jenispotong[50];
		
		
	cout << "GEROBAK FRIED CHICKEN" << endl;
	cout << "---------------------" << endl;
	cout << "KODE" "\t" "JENIS" "\t" "HARGA" "\t"<< endl;
	cout << "----------------------"<< endl;
	cout << "D" "\t" "DADA" "\t" "RP.2.500" "\t"<< endl;
	cout << "P" "\t" "PAHA" "\t" "RP.2.000" "\t"<< endl;
	cout << "S" "\t" "SAYAP" "\t" "RP.1.500" "\t"<< endl;
	cout << "-----------------------------------"<< endl << endl;
	cout << "banyak jenis : " ;
	cin >> banyakjenis;
	
	for (int i=0; i<banyakjenis;i++){
		cout<<endl;
		cout<<"jenis Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"jenis potong [D/P/S]: ";
		cin>>jenispotong[i];
		
		cout<<"banyak potong : ";
		cin>>jumlah[i];
		
		jumlahharga=banyakjenis*jumlah[i];

		}
	
	cout<<endl;
		
	cout << "GEROBAK FRIED CHICKEN" << endl;
	cout << "---------------------" << endl;
	cout << "NO" "\t" "JENIS POTONG" "\t" "HARGA SATUAN" "\t" "BANYAK BELI" "\t" "JUMLAH HARGA" << endl;
	cout << "----------------------------------------------------------------------------------"<< endl;
		for (int i=0;i<banyakjenis;i++){
			cout<<i+1<<setw(12)<<jenispotong[i]<<setw(15)<<jumlah[i]<<setw(17)<<jumlahharga<<endl;
		}
}
