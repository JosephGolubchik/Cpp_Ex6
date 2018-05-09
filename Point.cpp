#include "Board.h"
#include "Point.h"
#include <iostream>
using namespace std;

Point Point::operator=(const char c){
    
    if (c == '.' || c == 'X' || c == 'O')
        data = c;
    else {
        IllegalCharException ex {c};
        throw ex;
    }
    return *this;
}

bool Point::operator==(const char c){
    if(data == c){
        return data == c;
    }
    else{
        throw 0;
    }
}

// char operator= (char c, Point& p){ 
//     return p.data;
// }
