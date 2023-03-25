#ifndef RANDOMNUMBERS
#define RANDOMNUMBERS

#include<vector>
#include<stdlib.h>

using namespace std;

class RandNum{
private:
    int n,lower,upper,maxnum,minnum;
    vector<int> numbers;
    double average;
public:
    void RandInput(int lower,int upper,int n){
        this->lower = lower;
        this->upper = upper;
        this->n = n;
    }
    void RandGen(){
        int mod_to = upper-lower+1;
        numbers.resize(0);
        for(int i=0;i<n;i++){
            numbers.push_back(rand()% mod_to + lower);
        }

    }
    void RandCalc(){
        double sum = 0;
        maxnum = numbers.at(0);
        minnum = numbers.at(0);
        for(int i=0;i<numbers.size();i++){
            sum = sum+numbers.at(i);
            if(numbers.at(i) > maxnum){
                maxnum = numbers.at(i);
            }
            if(numbers.at(i) < minnum){
                minnum = numbers.at(i);
            }
        }
        average = sum/numbers.size();
    }
    void Print(){
        cout << "Lower bound entered: " << lower <<endl;
        cout << "Upper bound entered: " << upper <<endl;
        cout << "Quantity generated: " << numbers.size() <<endl;
        cout << "Average: " << average <<endl;
        cout << "Min: " << minnum <<endl;
        cout << "Max: " << maxnum <<endl;
    }
};




#endif // RANDOMNUMBERS
