//code1

#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

class A{
	public :
	 int m_x;
};

class B : public A{
	public : 
		int m_y;
		void set_values(int x, int y, int z){
			m_x = x;
			m_y = y;
			m_z = z;
		}
		void print() const{
			std::cout << "x : " << m_x << ",y : " << m_y
				<< ",z : " << m_z ;
		}
	private : 
		int m_z;
};


#endif // _EXERCISE_H

//code2
#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

class A{
	public :
	 int m_x;
};

class B : public A{
	public : 
		int m_y;
		void set_values(int x, int y, int z){
			m_x = x;
			m_y = y;
			m_z = z;
		}
		void print() const{
			std::cout << "x : " << m_x << ",y : " << m_y
				<< ",z : " << m_z;
		}
	private : 
		int m_z;
};

inline void apply_changes( B& b){
	b.m_x *=2;
}



#endif // _EXERCISE_H

//code3
#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
class Base{
	private : 
		int m_x{};
	protected : 
		int m_y{};
	public : 
		int m_z{};
		void set_x(int x){m_x = x;}
		int x() const {return m_x;}
};

class Derived : private Base{
	private : 
		int m_a{};
	protected : 
		int m_b{};
	public : 
		int m_c{};
		void set_values(int x, int y, int z,int b){
			set_x(x);
			m_y = y;
			m_a = z;
			m_b = b;
		}
		void print() const{
			 std::cout << "B[x :" << x()
			 		 <<  " y:" << m_y
					<< " z:" << m_z
					<< " a:" << m_a
					<< " b:" << m_b
					<< " c:" << m_c <<"]";
				
		}
};

//YOUR CODE WILL APPEAR SOMEWHERE BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

class Derived_1 : protected Derived
{
	private : 
		int m_1{};
	protected : 
		int m_2{};
	public : 
		int m_3{};
        using Derived::set_values;
        using Derived::print;
};
//YOUR CODE WILL APPEAR SOMEWHERE ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE



#endif // _EXERCISE_H
