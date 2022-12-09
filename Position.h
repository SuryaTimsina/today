#pragma once

#include <iostream>

using namespace std;

class Position {

private:
  int x, y;
  int xMax, yMax;
  int originX, originY;

  public:
    // Default constructor.
    Position();

    //Parameterized constructors.
    Position(int a, int b);
    Position(int a, int b, int c, int d);

    // Accessors
    int getX();
    int getY();
    int getGridX();
    int getGridY();

    // Mutators
    void reset();
    void rehome();

    // Operators6
    void move(int n);
    bool operator==(Position p);

    // Methods
    void display();

};