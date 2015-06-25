
#ifndef TEST_CLASS_HPP_ASBFHBSFGNHGJKJHGH
#define TEST_CLASS_HPP_ASBFHBSFGNHGJKJHGH

#include<string>
#include<iostream>


class TestClass{


	private:
		typedef std::string type;
		type str;
	public:

		void get_str()const{ std::cout<<"member( "<< (this->str)<<" ) ";}
		void address()const{ std::cout<<"address( "<<this<<" ) ";}
		void show()const{ 
			address();
			get_str();
		}


		TestClass( const type& t_ = "default ctor"):str(t_){
			std::cout<<"Constructed! [";
			show();
			std::cout<<"] \n";
		}
		~TestClass(){
			std::cout<<"Destructed [";
			show(); 
			std::cout<<"] \n";
		}
		TestClass(const TestClass& other):str(other.str){
			std::cout<<"CopyConstructed! [";
			show();
			std::cout<<"] \n";
		}

		TestClass& operator=(const TestClass& other){
			this->str = other.str;
			std::cout<<"operator=() performed [";
			show();
			std::cout<<"] \n";
			return (*this);
		}

		TestClass(TestClass&& other):str( std::move(other.str) ){
			//other.str = ("moved by move ctor");
			std::cout<<"MoveConstructed! [";
			show();
			std::cout<<"] \n";
		}
		TestClass& operator=(TestClass&& other){
			this->str = std::move( other.str );
			//other.str = ("moved by ops=");
			std::cout<<"Move operator=() performd! [";
			show();
			std::cout<<"] \n";
			return (*this);
		}

};

#endif