//code1

#include "exercise.h"



unsigned int digit_sum (unsigned int num){

    unsigned int digit = 0;
    unsigned int inside_num = num;
    unsigned int sum{};

   while(inside_num > 0){
        digit = inside_num % 10;
        sum+=digit;
        inside_num = inside_num / 10;

   }

    return sum;

}

//code2
#include <iostream>
#include "exercise.h"



void show_odds (unsigned long long int num){

    unsigned int digit = 0;
    unsigned long long int inside_num = num;

   while(inside_num > 0){
        digit = inside_num % 10;
        if(digit % 2 != 0){
            std::cout << digit;
        }
        inside_num = inside_num / 10;

   }
}

//code3
#include "exercise.h"

//Don't modify anything above this line
//Your code will go below this line
bool is_palindrome(unsigned long long int num)
{
    int temp; // Will hold temporary nums as we strip off digits
    int remainder;
    unsigned long long int reversed=0;
    temp = num;
    while(temp>0)
    {
        remainder = temp%10;
        reversed = (reversed*10)+remainder;
        temp = temp/10;
    }
    if(reversed==num)
        return true;
    else
        return false;
}

//code4

#include <iostream>
#include "exercise.h"

//Don't modify anything above this line
//Your code will go below this line
int contains_character( const char* str , unsigned int size , char c){
    unsigned int index{};

    for(index;index < size;++index){
        if(*(str+index) == c){
            return index;
        }
    }
    //If we fall here, we have exhausted the entire C-string without
    //actually finding the character.
    return -1;

}



void find_character(const char* str, unsigned int size, char c){

    auto index = contains_character(str,size,c);

    if(index != -1){
        std::cout << "Found character "<< c << " at index " << index ;
    }else{
        std::cout << "Could not find the character " << c << " in " << str;
    }
}


//code5
#include "exercise.h"
#include <iostream>

void insertion_sort(int * array, unsigned int size){
//YOUR CODE WILL GO BELOW THIS LINE 
//DON'T MODIFY ANYTHING ABOVE THIS LINE
	for( unsigned int i{1}; i < size; ++i){
    	int key = array[i];

    	int j = i-1; // We rely on j falling into negative space to stop the while loop.hence the decision to make j signed. 
   		 //Shift all elements greater than key to the right by one spot.
    	while ( (j >= 0) && (array[j] > key)){
        	array[j+1] = array[j]; // Shift right.
        	j = j-1;
    	}
    	array[j+1] = key;
	}
}

void print_array(int* arr, unsigned int n) 
{ 
    for (unsigned int i = 0; i < n; i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}

//code6
#include "exercise.h"
#include <limits>

int max_subsequence_sum(int sequence[] , unsigned int size){
    
    
    int max_sum{std::numeric_limits<int>::min()};//Initialize to possible minimum number. May update this later
    for(unsigned int left_bound{0}; left_bound < size; ++left_bound){
        for(unsigned int right_bound{left_bound}; right_bound < size; ++ right_bound){

            int local_sum {0};

            //Once we have the bounds we iterate through them computing subsequences
            for(unsigned int i = left_bound; i <= right_bound; ++i){
                local_sum += sequence[i];
            }

            if(local_sum > max_sum){
                max_sum = local_sum;
            }
        }
    }
    return max_sum;
    
}
