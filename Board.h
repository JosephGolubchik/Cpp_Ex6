#pragma once
#include <iostream>
#include "Point.h"
#include "IllegalCoordinateException.h"
#include "IllegalCharException.h"
using namespace std;

class Board {
    public:
    int size;
    Point **pBoard;
    char temp;
    
    Board(int size){
        this->size = size;
        pBoard = new Point*[size];
        for(int i = 0; i < size; i++){
            pBoard[i] = new Point[size];
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++){
            pBoard[i][j].x = i;
            pBoard[i][j].y = j;
            }
        }
    }
    
    Board(Board& b){
        size = b.size;
        pBoard = new Point*[size];
        for(int i = 0; i < size; i++){
            pBoard[i] = new Point[size];
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++){
                pBoard[i][j].x = i;
                pBoard[i][j].y = j;
            }
        }
        *this = b;
    }
    
    Board& operator=(char w);
    Board& operator=(Board& b);
    friend ostream& operator<<(ostream& os, Board& b);
    int getIndex(int x,int y);
    Point& operator[](Point p);
    // void free();
    // ~Board();
};
