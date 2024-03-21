#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

class Point{
    //YOUR CHANGES WILL GO SOMEWHERE BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    friend double distance(const Point& from, const Point& to);
	public : 
	//methods
	Point() = delete;
	Point(double x, double y)
		: m_x(x), m_y(y){
	}

	Point(const Point& p)
	 : m_x(p.x()), m_y(p.y())
	{
	}



	void set_x(double x){
		m_x = x;
	}

	void set_y(double y){
		m_y = y;
	}

	double x() const   {
		return m_x;
	}
	double y() const   {
		return m_y;
	}



    //YOUR CHANGES WILL GO SOMEWHERE ABOVE THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};


//Computes and returns the distance between to points as double
double distance(const Point& from, const Point& to);

#endif // _EXERCISE_H
