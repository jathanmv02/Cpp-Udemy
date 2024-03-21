//The exercise.h file content 

#ifndef EXERCISE_H
#define EXERCISE_H

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE.
class Box {

	public : 
	//methods
	double base_area(){
		return m_width * m_length;
	}
	double volume(){
		return base_area() * m_height;
	}

	//member variables
	double m_width{1};
	double m_length{1};
	double m_height{1};
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H

//The exercise.h file content
#ifndef EXERCISE_H
#define EXERCISE_H

//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE


//code2
#include <cmath>

class Point{
	public : 
	//methods
	double distance_to( Point target){
		return std::sqrt(std::pow(target.m_x - m_x, 2) + std::pow(target.m_y - m_y, 2) * 1.0);
	}
	//member variables
	double m_x{1};
	double m_y{1};
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

#endif // _EXERCISE_H

//code 3
#ifndef EXERCISE_H
#define EXERCISE_H

class Box {

	public : 
	//methods
	Box(double width, double length, double height){
		m_width = width;
		m_length = length;
		m_height = height;
	}
	double base_area(){
		return m_width * m_length;
	}
	double volume(){
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

#include <cmath>

class Point{
	public : 
	//methods
		Point(double x, double y){
		m_x = x; 
		m_y = y;
	}
	double distance_to( Point target){
		return std::sqrt(std::pow(target.m_x - m_x, 2) + std::pow(target.m_y - m_y, 2) * 1.0);
	}
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

#endif // _EXERCISE_H

//code5
#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

class Point{
	public : 
	//methods
	Point() = default;
	Point(double x, double y){
		m_x = x; 
		m_y = y;
	}
	double distance_to( Point target){
		return sqrt(pow(target.m_x - m_x, 2) + pow(target.m_y - m_y, 2) * 1.0);
	}
    double x(){
		return m_x;
	}
	double y(){
		return m_y;
	}
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

void print_point( Point& p);
#endif // _EXERCISE_H

//code6
#ifndef EXERCISE_H
#define EXERCISE_H


class Point{
	public : 
	//methods
	Point() = default;
	Point(double x, double y){
		m_x = x; 
		m_y = y;
	}
	
    Point * set_x(double x){
		m_x = x;
		return this;
	}

	Point* set_y(double y){
		m_y = y;
		return this;
	}
    

	
	double x(){
		return m_x;
	}
	double y(){
		return m_y;
	}

	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

void print_point( Point& p);



#endif // _EXERCISE_H
