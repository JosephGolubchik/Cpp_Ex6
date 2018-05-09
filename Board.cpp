#include "Board.h"
#include <iostream>
using namespace std;


Board& Board::operator=(char w){
    if(w == '.'|| w == 'O' || w == 'X'){
        for (int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++){
                pBoard[i][j].data = w;
            }
        }
    }
    else{
        throw IllegalCharException(w);
    }
    return *this;
}

Board& Board::operator=(Board& b){
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++){
            //pBoard[i][j].data=b.pBoard[i][j].data;
        }
    }
    return *this;
}


ostream& operator<<(ostream& os, Board& b) {  
      for (int i = 0; i < b.size; i++) {
        for(int j=0; j<b.size; j++){
            os << b.pBoard[i][j].data;
        }
        os << endl;
      }
    return os;  
}

int Board::getIndex(int x,int y){
    int index=size*y+x;
    return index;
}

//board1[{0,1}] = 'x';

//board1[{0,1}] = 
Point& Board::operator[](Point p){
    if(p.x < 0 || p.x >= size || p.y < 0 || p.y >= size){
        throw IllegalCoordinateException(p.x, p.y);
    }
    else{
        return pBoard[p.x][p.y];
    }

}

// char& Board::operator[](Point p){
//     if(p.x < 0 || p.x >= size || p.y < 0 || p.y >= size){
//         throw IllegalCoordinateException(p.x, p.y);
//     }
//     else if(p.x < 0 || p.x >= size || p.y < 0 || p.y >= size){
//         throw IllegalCoordinateException(p.x, p.y);
//     }
//     else{
//         int index=getIndex(p.x,p.y);
//         return pBoard[index];
//     }

// }

