#include <iostream>
#include <string>
using namespace std;
int main(){
	struct dtmhs
{
	char nim[9];
	char nama[15];
};
struct dtnil
{
	float nil1;
	float nil2;
};
struct
{
	struct dtmhs mhs;
	struct dtnil nil
	
}nilai;


cout<<"masukan nim = ";cin>>nilai.mhs.nim;
cout<<"masukan nama = ";cin>>nilai.mhs.nama;
cout<<"masukan nilai uts = ";cin>>nilai.nil.nil2;
cout<<"masukan nilai uas = ";cin>>nilai.nil.nil2;
cout<<end;l
