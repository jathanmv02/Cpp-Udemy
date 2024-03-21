//code1
#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

struct Point{
	public : 
	//methods
	//Point() = default;
	Point(double x = 10.1, double y = 100.1);

	void set_x(double x){
		m_x = x;
	}

	void set_y(double y){
		m_y = y;
	}

	double x()  {
		return m_x;
	}
	double y()  {
		return m_y;
	}
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};



#endif // _EXERCISE_H
//code2
#ifndef EXERCISE_H
#define EXERCISE_H

class Box {
	public : 
	//methods
	Box() = default;
    
    Box(double width, double length, double height)
	 : m_width(width) , m_length(length), m_height(height){

	 }
    
	double base_area() const{
		return m_width * m_length;
	}
	double volume() const{
		return base_area() * m_height;
	}

	//member variables
	private : 
	double m_width{1};
	double m_length{1};
	double m_height{1};
};

#endif // _EXERCISE_H

//code3
#ifndef EXERCISE_H
#define EXERCISE_H


class Box {
	public : 
	//methods
	Box() = default;
	
	Box(double width, double length): Box(width,length,1.0)
	{
	}
	
	Box(double width, double length, double height)
	 : m_width(width) , m_length(length), m_height(height){

	 }
	
	
	double base_area() const{
		return m_width * m_length;
	}
	double volume() const{
		return base_area() * m_height;
	}

	//member variables
	private : 
	double m_width{1};
	double m_length{1};
	double m_height{1};
};

#endif // _EXERCISE_H

//code4
#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE
struct Reverser{

	Reverser(std::initializer_list<int> list) {
	    size_t arr_size = sizeof(m_data)/sizeof(int);
		for(size_t i{arr_size} ;  i > 0; --i){
				m_data[arr_size - i] =  *(list.begin() + (i-1));
        }
	}
	void print(){
		std::cout << "Collection [";
		for(int & i : m_data){
			std::cout << i << " ";
		}
		std::cout << "]";
	}

	//fields
	int m_data[5];
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H
