//code1

#include "exercise.h"

//Don't modify anything above this line.
//Your code will go below this line
void is_sum_even(int data[], unsigned int size, bool& result){
    int sum{};
    for(unsigned int i{}; i < size; ++i){
        sum += data[i];
    }
    result = (sum % 2 == 0) ? true : false;
}
//Your code will go above this line
//Don't modify anything below this line

//code2

 #include "exercise.h"
 
 const double* find_max_address(const double scores[], unsigned int count){

    unsigned int max_index{};
    double max{};
    
    for(unsigned int i{0}; i < count ; ++i){
        if(scores[i] > max){
            max = scores[i];
            max_index = i;
        }
    }
    return &scores[max_index];
}

