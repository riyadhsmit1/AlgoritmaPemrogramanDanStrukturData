#include <iostream>
using namespace std;

int main (){

	int  t1[3][3], t2[3][3], t3[3][3];
      int  i, j, k;
      
      cout<<"Masukkan baris:";
      cin>>k;
      
      cout<<"\nPenjualan pertama:\n";
	  for(i=0;i<k;i++)
	  {
	  
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\npenjualan printer ["<<i<<"]["<<j<<"]=  ";
	  		cin>>t1[i][j];
		}
	  } 
	  
	  cout<<"\nPenjualan kedua:\n";
	  for(i=0;i<k;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\npenjualan mouse["<<i<<"]["<<j<<"]=  ";
	  		cin>>t2[i][j];
		}
	  } 
	  
		cout<<"\nPenjualan ketiga :\n";
	  for(i=0;i<k;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\npenjualan kabel data ["<<i<<"]["<<j<<"]=  ";
	  		cin>>t3[i][j];
		}
	  } 
	  
	  	cout<<"\nHASIL PENJUALAN";
		cout<<"\n==============================================";
	  	cout<<"\nNo \tNama Barang \t2001 \t2002 \t2003\n";
	  	cout<<"==============================================\n";
			cout<<"1"<<"\tPrinter\t";
	  for(i=0;i<k;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\t"<<t1[i][j];
		}

	  } 
	  cout<<endl;
	  
			cout<<"2"<<"\tMouse\t";
	  for(i=0;i<k;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\t"<<t2[i][j];
		}

	  } 
	  cout<<endl;
	  
			cout<<"3"<<"\tKabel Data";
	  for(i=0;i<k;i++)
	  {
	  	for(j=0;j<i;j++)
	  	{
	  		cout<<"\t"<<t3[i][j];
		}

	  } 
		cout<<"\n==============================================";

} 
	
