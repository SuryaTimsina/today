# assignment5
## Goal - write a complete ADT for the Position class
Implement the Position class as an Abstract Data Type (ADT)

The Position class is imagined that will track the position of robots in a game grid.

The grid is an X by Y plane with (0,0) being the bottom left corner of the plane and (X,Y) at the top right.

Robots will be initialized into position by specifying the x,y starting positions and the xMax,yMax grid size.

`Position bot1(2,3,5,5); // a bot initialized at 2,3 in a 5x5 grid`

If the grid size is not specified, the default is 10x10.

`Position bot2(3,7);     // a bot initialized at 3,7 in a 10x10 grid`

If the initial location is not specified, the default is 0,0.

`Position bot3;          // a bot initialized at 0,0 in a 10x10 grid`

Each robot will have a home position that is the same as the starting position.

For future purposes, there needs to be an equality comparison (overload the `operator=()`) to compare 
if the two bots are in the same position on the same-sized grid

The `.display()` method will show the the current map and indicate the home position
```
.....
.....
.....
.....
*....
Home position: (0,0)
```

When a bot moves, it will follow these rules:
```
 7 8 9
  \|/
 4-+-6    bot.move(n) will move the bot in the direction indicated
  /|\
 1 2 3
 0 and 5 are reserved and do not move the bot.
```
In the testing app when the user enters 5, a call is made to `.rehome()` and the home position is set to the current position.

In the testing app when the user enters 0, a call is made to `.reset()` and the bot is teleported to its home position.

## What to do
* Create a Position interface (.h) and implementation (.cpp) in the provided project template.
* Define, Implement, and Document the class including:
  * member variables
  * constructor(s)
  * accessor(s)
  * mutator(s)
  * operator(s)
  * any other methods (like .display)
 * Commit and sync this with the GitHub Classroom Repository.
 
 ## What to submit
 * Your code on GitHub Classroom
 * Some external documentation showing some testing (on Canvas)
