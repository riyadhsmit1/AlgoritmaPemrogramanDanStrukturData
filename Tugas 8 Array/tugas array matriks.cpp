#include <iostream>
using namespace std;

int main (){
	
	int a [25][25], z[25][25], y[25][25];
	int kolom,baris;
	
	cout << "masukan jumlah baris matriks A " <<endl;
	cin>> baris;
	cout << "masukan jumlah kolom matriks A " <<endl;
	cin>> kolom;
	
	for (int i=1; i<=baris ; i++){
		for (int b=1; b<=kolom ; b++){
			cout << " masukan data baris ke " << i << " kolom ke " << b << " :";
			cin >> a[i][b];
		}
		cout<<endl;
	}
	
		
	for (int i=1; i<=baris ; i++){
		for (int b=1; b<=kolom ; b++){
			cout << a[i][b];
		}
		cout << endl;
	}
	
	
	cout << "masukan jumlah baris matriks B " <<endl;
	cin>> baris;
	cout << "masukan jumlah kolom matriks B " <<endl;
	cin>> kolom;
	
	for (int i=1; i<=baris ; i++){
		for (int b=1; b<=kolom ; b++){
			cout << " masukan data baris ke " << i << " kolom ke " << b << " :";
			cin >> z[i][b];
		}
		cout<<endl;
	}
	
	for (int i=1; i<=baris ; i++){
		for (int b=1; b<=kolom ; b++){
			cout << z[i][b];
		}
		cout << endl;
	}
		cout<< "hasil penjumlahan" << endl;	
		for (int i=1; i<=baris ; i++){
		for (int b=1; b<=kolom ; b++){
		y[i][b]=a[i][b]+z[i][b];	
		cout<<y[i][b]<<"  ";
		}
		cout<<endl;
	}
	
			cout<< "hasil perkalian" << endl;	
		for (int i=1; i<=baris ; i++){
		for (int b=1; b<=kolom ; b++){
		y[i][b]=a[i][b]*z[i][b];	
		cout<<y[i][b]<<"  ";
		}
		cout<<endl;
		
	}
			cout<< "hasil pembagian" << endl;	
		for (int i=1; i<=baris ; i++){
		for (int b=1; b<=kolom ; b++){
		y[i][b]=a[i][b]/z[i][b];	
		cout<<y[i][b]<<"  ";
		}
		cout<<endl;
	}
			cout<< "hasil pengurangan" << endl;	
		for (int i=1; i<=baris ; i++){
		for (int b=1; b<=kolom ; b++){
		y[i][b]=a[i][b]-z[i][b];	
		cout<<y[i][b]<<"   3";
		}
		cout<<endl;
	}
}
