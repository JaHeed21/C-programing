#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int guess,random;

    while(1){
    cout<< "Enter Your Guess Between 1-10: ";
    cin>> guess;
    random = (rand() % 10) +1;
    if(guess==random)
    {
        cout<< "You won"<<endl;
        break;
    }
    else
    {
        cout<< "You lost. try again"<<endl;
        cout<< "Random Number was: "<<random<<endl<<endl;
    }
    }
    return 0;
}
