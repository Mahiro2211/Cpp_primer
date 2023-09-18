//this chapter is about string 
#include<iostream>
//something about the usage of using
using std::cin ;
int main()
{
	int i ;
	cin >> i;
	std::string s;
	while(std::getline(cin,s) && s!="")
	{
		std::cout << s <<std::endl;
        //a cin reading is no need to speace
        //like you input 1sksk the first output of s is sksk 
		std::cout << "I got a string!"<<std::endl;
	}
	return 0 ;
	
}