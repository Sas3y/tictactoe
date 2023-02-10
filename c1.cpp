#include "h1.h"
#include <iostream>

using namespace std;

int main(){
	
	int temp,temp1=0,win=0;
	h1 B;
	
	B.display();
	
	if(2) cout<<"TEST1\n\n";
	
	while(win==0){
		B.input(1);
	
		B.display();
		
		win=B.win();
		if(win) break;
			
		B.input(2);
		
		B.display();
		
		win=B.win();
		
	}
	
	
	if(win==3){cout<<"Draw!";}
	else{
		cout<<"\n\nWon by: ";
		if(win==1){cout<<"X\n";}
		if(win==2){cout<<"O\n";}
	}
	
	
	return 0;
}