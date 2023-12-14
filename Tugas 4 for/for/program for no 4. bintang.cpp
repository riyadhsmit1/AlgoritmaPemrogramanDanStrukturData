#include <iostream>
using namespace std;

int main() {
	 int i,t, j;
	 cout<<"enter the number of row: ";
	 cin>>t;
	
	 for (i=0; i<t; i++){
	 	for(j=0; j<(2*t) ;j++){
	 		if (i+j<=t-1)
			cout<<"*";
			else
			cout<<" ";
			if((i+t)<=j)
			cout<<"*";
			else
			cout<<" ";
		 }
	 	cout<<endl;
	 }
	 
	for (i=0; i<t; i++){
	 	for(j=0; j<(2*t);j++){
	 	
	 		if (i>=j)
	 		cout<<"*";
	 		else
	 		cout<<" ";
	 		if (i>=(2*t-1)-j)
	 		cout<<"*";
	 		else
	 		cout<<" ";	 		
	 }
	 	cout<<endl;
	 	 	
	

		 }
	 return 0;
	 }


