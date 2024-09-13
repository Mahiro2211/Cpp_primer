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
    decltype (a) c = a; // 独立的变量c 值为a
    decltype (a = b) d = a; // int& 类型 引用a 
    return 0 ;

}