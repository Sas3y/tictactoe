//h1.h
#ifndef _H1_H
#define _H1_H

class h1{
		int board[9]={0};
	public:
		void display();
		void setX(int);
		void setO(int);
		int check(int);
		void input(int);
		int win();
		int draw();
};



#endif