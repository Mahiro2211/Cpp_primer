#include <iostream>

int& initNum(int& a)
{
    a = 100101;
    return a;      
}
int main()
{
    int b;
    int ref_b = initNum(b);
    int& real_ref_b = initNum(b);
    b = 202020;
    std::cout << "b:" << b << ' ' << "ref_b:" << ref_b << " real_ref_b:" << real_ref_b;
    return 0;
}