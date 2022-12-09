#include <iostream>
#include "Position.h"

using namespace std;

// Default Constructor
Position::Position(){

  // Setting default values X and Y to the origin.
  x = originX = 0;
  y = originY = 0;

  xMax = 10;
  yMax = 10;
}

// Paramatized Constructor with two values.
// Creates a and b values position on a 10 x 10 grid.
Position::Position(int a, int b)
{
  // Setting the a and b value position to origin.
  x = originX = a;
  y = originY = b;

  xMax = 10;
  yMax = 10;
}

// Paramatized Constructor with 4 values.
// Creates a, b c, and d values position on a 20 x 20 grid.
Position:: Position(int a, int b, int c, int d) {

 // Setting the a and b value position to origin.
  x = originX = a;
  y = originY = b;

 // Setting the c and d value position to max values.
  xMax = c;
  yMax = d;
}


// Gets the value of x position.
int Position:: getX(){
  return x;
}


// Gets the value of y position.
int Position:: getY(){
    return y;
}


// Gets the grid of X.
int Position:: getGridX(){
    return xMax;
}

// Gets the grid of y.
int Position:: getGridY(){
    return yMax;
}

// After switching location the robot can be easily returned to its original starting point 
void Position:: reset() {
    x = originX;
    y = originY;
}

// Use of this is to make the new location of the robot into its new home. 
void Position:: rehome() {
    originX = x;
    originY = y;
}


// Robot movement directions.
void Position:: move(int n){
    int dir[10][2] = {
      		     // All the movements on all directions.
                      {0,   0}, 
                      {-1, -1}, // direction 1 
                      {0,  -1}, // direction 2
                      {+1, -1}, // direction 3
                      {-1, -0}, // direction 4
                      {0,   0}, 
                      {1,   0}, // direction 6
                      {-1,  1}, // direction 7
                      {0,  +1}, // direction 8
                      {1,  1}}; // direction 9
 
                      

    if(n == 0) reset();// the robot returns to its first location
    else if(n == 5) rehome();// after the robot moves direction and 5 is pressed it will make the location its new home 
    else {
        x += dir[n][0];
        y += dir[n][1];
    }
}


// Loading operating for comparison of two objects.
bool Position:: operator==(Position p) {
    bool isEqualTo = true;

    isEqualTo = (x == p.getX() &&
                 y == p.getY() &&
                 xMax == p.getGridX() &&
                 yMax == p.getGridY()
                 );

    return isEqualTo;
}


// Prints the start and dots with all grids on the screen.
void Position:: display() {
  // i = columns
  // j = rows

  for(int i = yMax; i >= 0; i--) {
    for(int j = 0; j < xMax; j++) {
      if(j == originX && i == originY) {
        cout << "*";
      } else {
      cout << ".";
    }
  }
  cout << endl;
 }
}