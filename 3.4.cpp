// this unit is about iterator
// iterator is a container that can be accessed by index
// cpp 's libray 's container can be used like this but std::string is not a iterator
// but std::string support many operation like container
// like std::vector can support be accessed by index
#include<vector>
#include<iostream>
#include<string>
#include<typeinfo> // use typeinfo to detect which category did the variable belong to  

std::vector<std::string> array_string(100);
std::vector<int> v(10 , 10); // (length , value)

int main()
{
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << ' ';
	}
	auto a = v.begin() , b = v.end();
	
	int c = 2;
	std::cout << std::endl << "a quote of variable is "<< *a << std::endl << "a is " ;
	std::cout << a[0] << std::endl; // a is also a iterator , it is a signal quote of a vector
	b--; // a opertaor that can down a index
	std::cout << "b quote of variable is " << *b << std::endl;
	b++;
	std::cout << "b quote of variable is " << *b << std::endl;
	std::cout << typeid(a).name() << std::endl;
	std::cout << typeid(v).name() << std::endl;
	std::cout << typeid(b).name() << std::endl;
	std::cout << typeid(c).name() << std::endl;
	// some opertator about iterator in std container
	for ( int i = 0 ; i < int(v.size()) ; i++ )
	{
		v[i] = i;
	}
	std::string s("some book");
	auto st = s.begin();
	while(st != s.end())
	{
		*st = toupper(*st);
		st++;
	}
	std::cout << s;

	return 0;

}