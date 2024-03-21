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

//code2
#ifndef EXERCISE_H
#define EXERCISE_H
#include <memory>


struct Point {
    Point (double x, double y) : m_x(x), m_y(y) {}
	double m_x{};
	double m_y{};
};


//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE
class Line{
	public : 
	Line(std::unique_ptr<Point> start, std::unique_ptr<Point> end)
		: m_start(std::move(start)), m_end(std::move(end))
		{};

	double start_x() const{
		return m_start->m_x;
	}
	double start_y() const{
		return m_start->m_y;
	}

	double end_x() const{
		return m_end->m_x;
	}
	double end_y() const{
		return m_end->m_y;
	}


	private : 
	std::unique_ptr<Point> m_start{};
	std::unique_ptr<Point> m_end{};
};



//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE



#endif // _EXERCISE_H

//code3
#ifndef EXERCISE_H
#define EXERCISE_H
#include <memory>

struct Point {
	Point (double x, double y) : m_x(x), m_y(y) {}
	~Point(){
	    std::cout << "Point object dying" << std::endl;
	}
	double m_x{};
	double m_y{};
};



//YOUR CODE WILL GO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE
class Line{
	public : 
	Line(std::shared_ptr<Point> start, std::shared_ptr<Point> end)
		: m_start(start), m_end(end)
		{};

	double start_x() const{
		return m_start->m_x;
	}
	double start_y() const{
		return m_start->m_y;
	}

	double end_x() const{
		return m_end->m_x;
	}
	double end_y() const{
		return m_end->m_y;
	}

	private : 
	std::shared_ptr<Point> m_start{};
	std::shared_ptr<Point> m_end{};
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE



#endif // _EXERCISE_H
