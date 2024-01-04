#include <iostream>
#include <ctime>
using namespace std;

void drawBoard(char *spaces);
void playersMove(char *spaces,char player);


int main() {
	
	char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
	char player ='X';
	char computer ='O';
	bool running = true;
	
	drawBoard(spaces);
	
	while(running){
		void playersMove(spaces, player);
		
	}	
	
}

void drawBoard(char *spaces){
	cout<<"     |     |     "<<"\n";
	cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"   "<<"\n";
	cout<<"_____|_____|_____"<<"\n";
	cout<<"     |     |     "<<"\n";
	cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"   "<<"\n";
	cout<<"_____|_____|_____"<<"\n";
	cout<<"     |     |     "<<"\n";
	cout<<"  "<<spaces[7]<<"  |  "<<spaces[8]<<"  |  "<<spaces[9]<<"   "<<"\n";	
	cout<<"     |     |     "<<"\n";	
}

void playersMove(char *spaces,char player){
	
	do{
		
		
	}while();
	
}
