#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
    
    int UserGuess = 0 ;
    int RandNum = 0;
    int TurnCounter = 0;

    srand(time(0));

    RandNum =rand() % 100+1;
    
    
    cout <<"Please enter your guess."<<endl;
    while(TurnCounter<5){
        
        cin >> UserGuess;
        
        if (TurnCounter ==4 && UserGuess!=RandNum){
        cout<< "You lose"<<endl;
        break;
        }
        
        
        if(UserGuess>RandNum){
            cout << "Guess lower" <<endl;
            }
            
        if (UserGuess<RandNum){
            cout<< "Guess higher"<<endl;
            }
            
        if (UserGuess==RandNum){
        cout<< "You win"<<endl;
        break;
        }
        
       
        
        TurnCounter ++;
        }

    return 0;
}