#include <iostream>
using namespace std;
 int main(){
 	int i=0;
 	cout<< "--MENU--"<<endl;
 	cout<<"1.CREATE"<<endl;
 	cout<<"2.DISPLAY"<<endl;
 	cout<<"3.INSERT"<<endl;
 	cout<<"4.DELETE"<<endl;
 	cout<<"5.LINEAR SEARCH"<<endl;
 	cout<<"6.EXIT"<<endl;
 		int a;
		 int x;
 		cout<<"Enter the number of elements:  "<<endl;
 		cin>>a;
 		int b[a];
 while(i!=6){ 
 	cout<<"Enter Your Choice: ";
 	cin>>i;
	  	
 	if(i==1){
 		cout<<"Enter your entries: "<<endl;
 		for(x=0;x<a;x++){
 			cin>>b[x];
		 }
	}
	
	 if(i==2){
	 	for(x=0;x<a;x++){
	 		cout<<b[x]<<endl;
		 }
	 }
	 
 	    if(i==3){
 	    	int num;
	 		int c;
	 		cout<<"Enter the index at which you want to enter :  "<<endl;
	 		cin>>c;
	 		cout<<"What value do you want to insert:";
	 		cin>>num;
	 		for(x=a-1;x>=c;x--){
	 			b[x+1]=b[x];
	 		}
	 		b[c]=num;
			a++;
	
	 }
	 if(i==4){
	 	int num;
	 		int c;
	 		cout<<"Enter the index value which you want to delete :  "<<endl;
	 		cin>>c;
	 		for(x=c;x<=a-1;x++){
	 			b[x-1]=b[x];
	 		}
			a--;
	 	
	 }
	 
	 if(i==5){
	 	int num;
	 		int c;
	 		cout<<"Enter the value which you want to search:  "<<endl;
	 		cin>>c;
            int s=1;
	 		for(x=0;x<=a-1;x++){
	 			if(c==b[x]){
	 				cout<<"Value found at index "<<x<<endl;
                    s=1;
	 				break;
				 }

                 else{
                    s=0;
                 }
	 		}
            if(s==0){
                cout<<"NOT FOUND";


            }
	 		
	 }
	 	 		
	if(i==6){
		cout<<"EXITED";
	}
	 	 
	 }
	 
 }