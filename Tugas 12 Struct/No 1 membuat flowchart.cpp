#include <iostream>
using namespace std;

struct name{
	char name[20];
};

struct roll{
	char name[20];
	struct name info;
}data;

int main(){
	cout<<"masukan nama mahasiswa : ";
	cin>>data.info.name;
	cout<<"masukan status mahasiswa : ";
	cin>>data.roll;
	
	cout<<"\n\n--data store completed--\n\n";
	cout<<"Name : "<<data.info.name<<"\nRoll: "<<data.roll;
}
