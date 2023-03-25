#ifndef SUMS
#define SUMS

class sum1{
public:
    void sum(int n);
protected:
    int n_summed;
};

class sumeven{
public:
    void sumseven(int n);
protected:
    int sums_even;
};

class sumodd{
public:
    void sumsodd(int n);
protected:
    int sums_odd;
};

class sum2{
public:
    void sumsq(int n);
protected:
    int squares_summed;
};

class sum3{
public:
    void sumcube(int n);
protected:
    int cubes_summed;
};

class sumgeometric{
public:
    void sumgeom(int n, double a);
protected:
    double geom_sum;
};

class sumsum: virtual sum1{
public:
    void sumsums(int n);
protected:
    int sum_of_sums;
};

class productsum: virtual sum1{
public:
    void prodsum(int n);
protected:
    int prod_of_sums;
};

class exptowers{
public:
    void exptower(int n);
protected:
    double exp_value;
};

class sumfull: virtual sum1, sumeven, sumodd, sum2, sum3, sumgeometric, virtual productsum, virtual sumsum, exptowers{
public:
    void allsums(int n, double a);
};

#endif // SUMS
