
#include<iostream>
#include"TestClass.hpp"
#include<memory>

TestClass make_temp(){
	TestClass temp("temp obj");
	return std::move( temp );
}

int main(){


	std::cout << "TestClass c1( \"c1\" ), c2( \"c2\" )\n";	
	TestClass c1( "c1" ), c2( "c2" );
	std::cout << "\n";


	std::cout<<"auto c3 = c1\n";
	auto c3 = c1;
	std::cout<<"\n";


	std::cout<<"auto c4( c2 )\n";
	auto c4( c2 );
	std::cout<<"\n";
	

	std::cout<<"TestClass c5\n";
	TestClass c5;
	std::cout << "c5 = c1\n";
	c5 = c1;
	std::cout<<"\n";


	std::cout << "TestClass c101\n";
	TestClass c101;
	std::cout<<"c101 = std::move( c1 )\n";
	c101 = std::move( c1 );
	std::cout<<"\n";


	std::cout<<"auto c102 = std::move(c2)\n";
	auto c102 = std::move(c2);
	std::cout << "\n";


	std::cout << "auto c103( make_temp() );\n";
	auto c103( make_temp() );
	std::cout<<"\n";
}