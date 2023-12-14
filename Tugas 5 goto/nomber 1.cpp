#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

main()
{
	int a,b;
	char lagi;
	atas:
	cout<<endl;
	cout<<"\masukan bilangan= ";
	cin>>a;
	
	b=a%2;
	
	//printf("Nilai % d % % 2 adalah = % d",a,b);
	cout<<"nilai "<<a<< " % 2 adalah = " <<b;
	
	
	cout<<("\n\nIngin Hitung Lagi [Y/T] :");
	
	lagi=getche();
	
	if(lagi=='Y'|| lagi=='y')
	goto atas;
		if(lagi='T'|| lagi=='t')
		cout<<endl<<"selesai";
	
	
	return 0;
}
