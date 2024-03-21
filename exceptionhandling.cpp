#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE
class Base{
	protected : 
		int m_x{};

	public : 
		Base(int x) : m_x(x){++m_count;}
		static  unsigned int m_count;

		virtual void print() const{
			std::cout << "data[ x : " << m_x
				<< "]";
		}

};

class Derived : public Base{
	private : 
		int m_y {};
	public : 
		Derived (int x, int y) : Base(x),m_y(y){++m_count;}
		static  unsigned int m_count;

		virtual void print() const override {
			std::cout << "data[ x: " << m_x
				<< " y:" << m_y
				<< "]";	
		}

};







//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE
#endif // _EXERCISE_H

//code 2
#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <string>

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

class DividebyZeroException {
	public : 
    DividebyZeroException(int num, int den) 
        : m_num(num), m_den(den)
        {
        }
	
    const std::string what()const{
		std::string msg = std::string("Error : Trying to divide ")+ std::to_string(m_num)
			+ std::string(" by ") + std::to_string(m_den);
        return msg;
    }
private : 
    int m_num;
	int m_den;
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

int divide(int a, int b);
void trouble(int num);

#endif // _EXERCISE_H
