#include<iostream>
int main()
{
    int a = 3 , b = 4 ;
    decltype(a) c = a ;
    decltype((b)) d = b;
    // vim shift + 3 ( find same useage)
    std :: cout << ++c  << ' ' << ++d <<std::endl;
    std :: cout << a  << ' ' << b <<std::endl;
    //output is 4 5 /n 3 5
    //which is mean that decltype(()) is just mean a quote of a variable
    // name a Scales_data
    struct Scale_data {
        std :: string bookNo;
        unsigned units_sold = 0;
        double revene = 0.0;
    };
    
    return 0 ;

}