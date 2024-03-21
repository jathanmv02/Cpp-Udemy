//code1
#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>

namespace CU{ // CU stands for Custom Utilities. Get into the habit of wrapping  your code
                // into your own namesspace to avoid name conflicts

	class Point_nD{
		public : 
		Point_nD(std::initializer_list<double> list ) {
				m_size= list.size();
				m_data = new double[m_size];
			 	for(unsigned int i{} ;  i < m_size; ++i){
              		m_data[i] = *(list.begin() + i) ;
        		}
			
		}

		Point_nD(const Point_nD& source) {
			m_size = source.size();
			m_data = new double[m_size];
			for(unsigned int i{} ;  i < m_size; ++i){
              		m_data[i] = source.at(i) ;
        	}
		}


		~Point_nD(){
			delete[] m_data;
		}

		double at(unsigned int index) const{
			return m_data[index];
		}
		void set( unsigned int index, double value){
			m_data[index] = value;
		}

		unsigned int size() const{
			return m_size;
		}

		void print() const{
			std::cout << "Point [ ";
			for(unsigned int i{} ;  i < m_size; ++i){
               std::cout << m_data[i] << " ";
        	}
			std::cout << "]";
		}
		
		//YOUR operator+ WILL GO BELOW THIS LINE
    	//YOU CAN'T ADD IN ANY MORE METHODS OTHER THAN operator+
    	//DON'T MODIFY ANYTHING ABOVE THIS LINE
        Point_nD operator+(const Point_nD& right_operand){
			Point_nD tmp(*this);
			for(unsigned int i{} ;  i < m_size; ++i){
				tmp.set(i, tmp.at(i) + right_operand.at(i)); 		
        	}
			return tmp;
    	}
	
    	//YOUR operator+ WILL GO ABOVE THIS LINE
    	//YOU CAN'T ADD IN ANY MORE METHODS OTHER THAN operator+
    	//DON'T MODIFY ANYTHING BELOW THIS LINE

		private : 
		unsigned int m_size;
		double* m_data;
	};
}



#endif // _EXERCISE_H

//code2
#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <cstring>

namespace CU{

class string{
	friend string operator+( string& left, const string& right);
	public : 
	explicit string(const char* data, size_t size = 15 ){
		m_size = size;
		m_data = new char [m_size];
		std::strcpy(m_data,data );
	}
	
		const char* c_str() const{
		return m_data;
	}

	~string(){
		delete [] m_data;
		m_data = nullptr;
	}
	private : 
	 unsigned int m_size;
	 char * m_data{nullptr};
};

    //YOUR CODE WILL GO BELOW THIS LINE
    //DON'T MODIFY ANYTHING BELOW THIS LINE
    inline string operator+( string& left, const string& right){
		string tmp("",left.m_size + right.m_size);
		std::strcat(tmp.m_data,left.m_data);
		std::strcat(tmp.m_data,right.m_data);
		return tmp;
	} 

	//YOUR CODE WILL GO ABOVE THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE
}



#endif // _EXERCISE_H

//code3
#include "exercise.h"

//YOUR CODE MAY ALSO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE
namespace CU{
    	Point_nD operator+(const Point_nD& left_operand, const Point_nD& right_operand){
		Point_nD tmp(left_operand);
		for(unsigned int i{} ;  i < left_operand.size(); ++i){
			tmp.set(i, tmp.at(i) + right_operand.at(i)); 		
        }
		return tmp;
	}
}


//YOUR CODE MAY ALSO GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE

//code4
#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <cstring>

namespace CU{

class string{
	friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
	public : 
	string(const char* data, size_t size = 15 ){
		m_data = new char [size];
		std::strcpy(m_data,data );
	}

	~string(){
		delete [] m_data;
	}
	private : 
	 char * m_data{nullptr};
};

    //YOUR CODE WILL GO BELOW THIS LINE
    //DON'T MODIFY ANYTHING ABOVE THIS LINE
    inline std::ostream& operator<< (std::ostream& out , const CU::string& s){
		out << s.m_data;
		return out;
	}
	
	//YOUR CODE WILL GO ABOVE THIS LINE
	//DON'T MODIFY ANYTHING BELOW THIS LINE
}

inline void use_cu_string(const CU::string& s){
	std::cout << s;
}



#endif // _EXERCISE_H

//code5
#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <cstring>


namespace CU{

class string{
	friend std::ostream& operator<< (std::ostream& out , const CU::string& s);
	friend string operator+(const string& left, const string& right);
	friend string& operator+=(string& left, const string& right);
	public : 
	   string(const char* data, size_t size = 15 ){
		m_size = size;
		m_data = new char [m_size];
		std::strcpy(m_data,data );
	}
	string(const string& source){
		m_size = source.m_size;
		m_data = new char [m_size]; // We want to do deep copy here.
		std::strcpy(m_data,source.m_data);
	}


	const char* c_str() const{
		return m_data;
	}

	~string(){
		delete [] m_data;
		m_data = nullptr;
	}
	private : 
	 unsigned int m_size;
	 char * m_data{nullptr};
};

	inline std::ostream& operator<< (std::ostream& out , const CU::string& s){
		out << s.m_data;
		return out;
	}

	inline string operator+(const string& left, const string& right){
		string tmp(left);
		tmp += right;
		return tmp;
	}

	inline string& operator+=(string& left, const string& right){
		std::strcat(left.m_data,right.m_data);
		return left;
	}
}



#endif // _EXERCISE_H
