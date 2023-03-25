#include <iostream>
#include "sums.h"

int main()
{
    int n;
    double a;

    std::cout<<"please enter a positive integer: ";
    std::cin>>n;
    std::cout<<std::endl;
    std::cout<<"Please enter a real number: ";
    std::cin>>a;
    std::cout<<std::endl;

    sumfull new_sum;
    new_sum.allsums(n,a);

    return 0;
}
