#include<iostream>

int main()
{
    //2.34
	long double pi = 3.1415926;
	int a(pi), d = pi;//correct
	//int b{ pi };// pi 
	std::cout << a << ' ' << d <<std::endl;
	const int c = 1, * ci = &c;
	decltype(c) b = 1;
	decltype(ci) w = &b;
    //2.35
    const int i = 42;
    auto j = i; // const int
    const auto &k = i ; // const int quote ( a other name )
    auto *l = &i ; // const int pointer
    std :: cout << j << ' ' << k << ' '<< l<<std::endl;
    
	return 0;
}