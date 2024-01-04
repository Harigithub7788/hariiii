#include <iostream>

using namespace std;

int main() {
    cout <<"***********************NUMBER GUESSING GAME**************************\n";

    
    int guess;
    int tries;


    
    srand(time(NULL));

    int num= (rand() % 100)+1;
    do{
        cout<<"Enter the number 1-100...\n";
    cin>>guess;
    tries++;
    
    if (guess < num)
    {
        cout<<"Too low!"<<"\n";
        
    }
    else if (guess > num){
        cout<<"Too high!"<<"\n";
        
    }
    else {
        cout<<"The guessed number is "<<num<<"\n";
        cout<<"The no of tries  "<<tries<<"\n";
    }
    }while (guess!=num);
    {
        /* code */
    }
    
    
cout<<"*************************CONGRATULATIONS ***************************";
    


return 0;




}