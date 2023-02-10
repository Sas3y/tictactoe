#include "h1.h"
#include <iostream>

using namespace std;


void h1::display(){
	for(int i=0;i<9;i++){
		if(this->board[i]==0){ cout << '_' ; }
		else if(this->board[i]==1){ cout << 'X' ; }
		else if(this->board[i]==2){ cout << 'O' ; }
		else cout << '?' ;
	
		if(i%3==2) cout << '\n';
		else cout << '|' ;
	}
}

void h1::setX(int a){
	this->board[a-1]=1;
}

void h1::setO(int a){
	this->board[a-1]=2;
}

int h1::check(int a){
	if(this->board[a-1]==0) return 1;
	else return 0;
}

void h1::input(int XO){
	int temp;
	while(1){
		cin >> temp;
		if(this->check(temp)){
			if(XO==1){
				this->setX(temp); break;
			}
			if(XO==2){
				this->setO(temp); break;
			}
		}
	}
}


int h1::win(){
	
	if(this->draw()) return 3;
	
	int a=1;
	if(this->board[0]==a && this->board[1]==a && this->board[2]==a) return a;
	if(this->board[3]==a && this->board[4]==a && this->board[5]==a) return a;
	if(this->board[6]==a && this->board[7]==a && this->board[8]==a) return a;
	
	if(this->board[0]==a && this->board[3]==a && this->board[6]==a) return a;
	if(this->board[1]==a && this->board[4]==a && this->board[7]==a) return a;
	if(this->board[2]==a && this->board[5]==a && this->board[8]==a) return a;
	
	if(this->board[0]==a && this->board[4]==a && this->board[8]==a) return a;
	if(this->board[2]==a && this->board[4]==a && this->board[6]==a) return a;
	
	a=2;
	if(this->board[0]==a && this->board[1]==a && this->board[2]==a) return a;
	if(this->board[3]==a && this->board[4]==a && this->board[5]==a) return a;
	if(this->board[6]==a && this->board[7]==a && this->board[8]==a) return a;
	
	if(this->board[0]==a && this->board[3]==a && this->board[6]==a) return a;
	if(this->board[1]==a && this->board[4]==a && this->board[7]==a) return a;
	if(this->board[2]==a && this->board[5]==a && this->board[8]==a) return a;
	
	if(this->board[0]==a && this->board[4]==a && this->board[8]==a) return a;
	if(this->board[2]==a && this->board[4]==a && this->board[6]==a) return a;
	
	return 0;
}

int h1::draw(){
	if(this->board[0] && this->board[1] && this->board[2] &&
	   this->board[3] && this->board[4] && this->board[5] &&
	   this->board[6] && this->board[7] && this->board[8]){return 1;}
	else return 0;
}
