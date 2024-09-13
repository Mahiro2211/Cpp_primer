#include <iostream>
using namespace std;

int main()
{
    int r = 1,a = 3;
    int& ref_r = r;
    decltype(r) ref_r2 = r; // 只有本身是引用时才是引用
    decltype(ref_r) ref_3 = r;
    decltype((r)) ref_4 = a; // 永远都是引用
    cout << '\n' << ref_r << ' ' << r;
    cout << '\n' << ref_r2;
    cout << '\n' << ref_3;
    cout << '\n' << ref_4;

    ref_r2 = 1001;
    r = 222;
    cout << '\n' << ref_r << ' ' << r;
    cout << '\n' << ref_r2;
    cout << '\n' << ref_3;
    cout << '\n' << ref_4;

    return 0;
}