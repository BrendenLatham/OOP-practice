#include "sums.h"
#include <iostream>
#include <cmath>

void sum1::sum(int n){
    if(n<=0){
        std::cout<<"there is a problem"<<std::endl;
    }
    else{
        n_summed = (n*(n+1))/2;
    }
}

void sumeven::sumseven(int n){
    if(n<=0){
        std::cout<<"there is a problem"<<std::endl;
    }
    else{
        if(n%2 == 0){
            sums_even = (n/2)*((n/2)+1);
        }
        else{
            sums_even = ((n-1)/2)*(((n-1)/2)+1);
        }
    }
}

void sumodd::sumsodd(int n){
    if(n<=0){
        std::cout<<"there is a problem"<<std::endl;
    }
    else{
        if(n%2==0){
            sums_odd = n*n/4;
        }
        else{
            sums_odd = (n+1)*(n+1)/4;
        }
    }
}

void sum2::sumsq(int n){
    if(n<=0){
        std::cout<<"there is a problem"<<std::endl;
    }
    else{
        squares_summed = (n*(n+1)*((2*n)+1))/6;
    }
}

void sum3::sumcube(int n){
    if(n<=0){
        std::cout<<"there is a problem"<<std::endl;
    }
    else{
        cubes_summed = (n*(n+1)/2)*(n*(n+1)/2);
    }
}

void sumgeometric::sumgeom(int n, double a){
    if(n<=0){
        std::cout<<"there is a problem"<<std::endl;
    }
    else{
        geom_sum = (pow(a,(n+1))-1)/(a-1);
    }
}

void sumsum::sumsums(int n){
    if(n<=0){
        std::cout<<"there is a big problem"<<std::endl;
    }
    else{
        sum_of_sums = 0;
        for(int i=1;i<=n;i++){
            sum(i);
            sum_of_sums = sum_of_sums+n_summed;
        }
    }
}

void productsum::prodsum(int n){
    if(n<=0){
        std::cout<<"there is a problem"<<std::endl;
    }
    else{
        prod_of_sums = 1;
        for(int i=1;i<=n;i++){
            sum(i);
            prod_of_sums = prod_of_sums*n_summed;
        }
    }
}

void exptowers::exptower(int n){
    if(n<=0){
        std::cout<<"there is a problem"<<std::endl;
    }
    else{
        exp_value = n;
        for(int i=n-1;i>=2;i--){
            exp_value = pow(i,exp_value);
        }
    }
}

void sumfull::allsums(int n, double a){
    if(n<=0){
        std::cout<<"There was an absolute catastrophe"<<std::endl;
    }
    else{
        sum(n);
        sumseven(n);
        sumsodd(n);
        sumsq(n);
        sumcube(n);
        sumgeom(n,a);
        sumsums(n);
        prodsum(n);
        exptower(n);
        std::cout<<"Sum: " << n_summed <<std::endl;
        std::cout<<"Sum of evens: " << sums_even <<std::endl;
        std::cout<<"Sum of odds: " << sums_odd <<std::endl;
        std::cout<<"Sum of squares: " << squares_summed <<std::endl;
        std::cout<<"Geometric sum: " << geom_sum <<std::endl;
        std::cout<<"Sum of cubes: " << cubes_summed <<std::endl;
        std::cout<<"Sum of sums: " << sum_of_sums <<std::endl;
        std::cout<<"Product of sums: " << prod_of_sums <<std::endl;
        std::cout<<"Exponent tower: " << exp_value <<std::endl;
    }
}


