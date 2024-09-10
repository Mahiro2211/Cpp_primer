#include <iostream>
using namespace std;

int main()
{
    int *p;
    int temp=1;
    p=&temp;
    cout << p << ' ';
    int un_1=*p;
    int &un_2=*p; // &表示解引用符号
    // C++11 新增了用于内置类的右值引用，常规变量之间提到的“引用”都是左值引用
    cout << un_1 << ' ' << un_2 << ' ';

    // 为什么要有引用，因为在C++中每个变量定义后都是独占的内存空间，和Python不同，C++中的引用需要手动生命
    int i1=0,i2=1024;
    int &ref1=i1;
    int copy1=i1;
    copy1=10101;

    cout << '\n' << i1 << ' ' << copy1; // 0 10101
    
    int ival=1.01;
    int &rval2=ival;
    int &rval1=1.01;
    //int &rval3; // 错误，被声明为引用时必须要初始化

    return 0;
}