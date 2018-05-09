#pragma once
#include <iostream>
#include "IllegalCharException.h"
using namespace std;

class Point{
    public:
    int x;
    int y;
    char data;
    
    Point(){
        data = '.';
    }
    
    Point(int x,int y){
        this->x = x;
        this->y = y;
        this->data = '.';
    }
    
    Point(const Point & p)
    {
        this->x = p.x;
        this->y = p.y;
        this->data = p.data;
    }
    
    friend ostream& operator<<(ostream& os, Point& p) {  
         os << p.data;
        return os;  
    }
    
    Point operator=(const char c){
        
        if (c == '.' || c == 'X' || c == 'O')
            data = c;
        else {
            IllegalCharException ex {c};
            throw ex;
        }
        return *this;
    }
    

};
    




