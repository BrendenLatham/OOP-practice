#include <iostream>
#include <string>
#include "randomnumbers.h"

using namespace std;

int main()
{
    int lower,upper,n;
    string answer;
    bool cont = true;

    while(cont){
        cout << "Please enter a lower bound: ";
        cin >> lower;
        cout<<endl;
        cout << "Please enter an upper bound: ";
        cin >> upper;
        cout<<endl;
        cout << "Please enter a quantity: ";
        cin >> n;
        cout<<endl;

        RandNum RandSystem;

        RandSystem.RandInput(lower,upper,n);
        RandSystem.RandGen();
        RandSystem.RandCalc();
        RandSystem.Print();

        cout << "Would you like to go again? type yes or no: ";
        cin >> answer;
        cout<<endl;
        if(answer == "yes"){
            cont = true;
        }
        else{
            cont = false;
        }
    }

    return 0;
}
