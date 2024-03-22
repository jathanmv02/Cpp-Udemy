//code1

#include <iostream>
#include "exercise.h"


void find_stuf_out( char data[] , unsigned int size){

    unsigned int vowel_count{};
    unsigned int consonant_count{};
    
    //Don't modify anything above this line
    //Your code should go below this line
     for(unsigned int i{}; i < size; ++i){

        if(std::isalpha(data[i])){

            if((data[i] == 'a')||
            (data[i] == 'A')||
            (data[i] == 'e')||
            (data[i] == 'E')||
            (data[i] == 'i')||
            (data[i] == 'I')||
            (data[i] == 'o')||
            (data[i] == 'O')||
            (data[i] == 'u')||
            (data[i] == 'U') ){
                ++ vowel_count;
            }else{
                ++consonant_count;
            }
        }
     }
     std::cout << "The string contains " << vowel_count << " vowels and "
        << consonant_count << " consonants";
    //Your code should go above this line
    //Don't modify anything below this line
}

//code2

#include <iostream>
#include "exercise.h"


void replace_spaces( char data[] , unsigned int size){

    char * result{nullptr};
    
    //Don't modify anything above this line
    //Your code will go below this line
    
    //REMEMBER : WHEN YOU DYNAMICALLY ALLOCATE FOR SPACE FROM THE HEAP, YOU HAVE TO ACTIVELY RELEASE THAT TO THE
    //SYSTEM WHEN DONE WITH IT. BE A GOOD C++ CITIZEN!
    result = new char[size]; // Allocate the array from the heap
    for(unsigned int i{}; i < size; ++i){

        if(std::isspace(data[i])){
            result[i] = '_';
        }else{
            result[i] = data[i];
        }
    }
    std::cout << "After replacing the spaces, we get : "
            << result;
     delete[] result;
    //Your code will go above this line
    //Don't modify anything below this line 
}

//code 3
#include <iostream>
#include <cstring>
#include "exercise.h"


void extract_message( const char* src1 , const char* src2,
                        const char* src3, const char* src4){

    char* result;
    result = new char[20]; // Dynamically allocate for space
    
    //Don't modify anything above this line
    //Your code will go below this line
    std::strncpy(result,src1 + 15,3); 
    std::strncpy(result + 3,src2 + 5, 4 );
    std::strncpy(result + 7, src3 + 10, 3);
    std::strncpy(result + 10,src4 + 3, 5 );
     result[15] = '\0';
     std::cout << "result : " << result ;

    
    //Your code will go above this line
    //Don't modify anything below this line

    delete[] result;
   
}

//code 4
#include <string>
#include "exercise.h"

std::string build_from_raw_pieces(const char * str1, const char* str2){

    std::string result;
    
    //Don't modify anything above this line
    //Your code will go below this line
    std::string data1(str1);
    std::string data2(str2);
    result = data1 +' ' + data2;
    //Your code will go above this line
    //Don't modify anything below this line
    return result;
}

//code 5
#include <string>
#include "exercise.h"

std::string who_s_the_greatest(std::string data[] , unsigned int size){
    
    std::string result;
    
    //Don't modify anything above this line
    //Your code will go below this line
     result = (data[0]);

    for(unsigned int i{}; i < size; ++i){
        if(data[i] > result){
            result = data[i];
        }
    }
    //Your code will go above this line
    //Don't modify anything below this line
  
    return result;
}

//code 6
#include <iostream>
#include <cstring>


void find_matches(std::string data[] , unsigned int size, const char* key){

    std::string * matches = new std::string [size]; // Create std::string array on the heap. Remember to release
    //Don't modify anything above this line
    //Your code should go below this line
    unsigned int matches_found{};
   for(unsigned int i{}; i < size ; ++i){

        if(data[i].find(key)!= std::string::npos){
            matches[matches_found++] = data[i];
        }

    }
    std::cout << "Found " << matches_found << " matches. They are: ";
    for(unsigned int i{}; i < matches_found; ++i){
        if(i == matches_found -1){
            std::cout << matches[i];
        }else{
            std::cout << matches[i] << " ";
        }
    }
    //Your code should go above this line
    //Don't modify anything below this line
    

    delete[] matches; // Remember to release the memory.
   
}