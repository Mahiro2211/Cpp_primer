#include<iostream>

int main()
{
    std::string s = "Some string";
    for(decltype(s.size()) index = 0; index != s.size() && !std::isspace(s[index]);++index)
    {
        s[index] = std::toupper(s[index]);
    }
    std::cout << s << std::endl;
    // .size() method return a value which belong to string::size_type type
    // a important point is that cpp will not detect a index is illegal , but when the index is out of range
    // it will cause a disaster
    
    return 0 ;
}   