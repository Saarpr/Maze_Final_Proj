//#include <iostream>
#include "maze/Maze2d.h"
int main() {
    Maze2d mz(11,9);
    mz.PrintGrid();
    return 0;
}
//============================================================================= // maze.cpp
//
// C++ implementation of a recursive maze-generating program.
//
//  History:
//    2006.03.30 / Abe Pralle - Created
// 2010.04.02 / Abe Pralle - Converted to C++ //=============================================================================
//#include <iostream>
//#include <vector>
//
//using namespace std;
//#define GRID_WIDTH 21
//#define GRID_HEIGHT 11
//#define NORTH 0
//#define EAST  1
//#define SOUTH 2
//#define WEST  3
//std::vector<std::vector<char>> grid;
////----FUNCTION PROTOTYPES---------------------------------------------
//
//void ResetGrid();
////int XYToIndex(int x, int y);
//int IsInBounds(int x, int y);
//void Visit(int x, int y);
//void PrintGrid();
//
////----FUNCTIONS-------------------------------------------------------
//
//int main()
//{
//// Starting point and top-level control.
//// seed random number generator.
//    srand( time(0));
//    ResetGrid();
//    Visit(1,1);
//    PrintGrid();
//    return 0;
//}
//
//void ResetGrid() {
//// Fills the grid with walls ('#' characters).
//    grid.resize(GRID_HEIGHT, std::vector<char>(GRID_WIDTH, '#'));
//}
//
////
////int XYToIndex(int x, int y) {
////// Converts the two-dimensional index pair (x,y) into a
////// single-dimensional index. The result is y * ROW_WIDTH + x.
////    return y * GRID_WIDTH + x;
////}
//
//int IsInBounds(int x, int y) {
//// Returns "true" if x and y are both in-bounds.
//    if (x < 0 || x >= (GRID_HEIGHT - 1)) return false;
//    if (y < 0 || y >= (GRID_WIDTH - 1)) return false;
//    return true;
//}
//
//void Visit( int x, int y )
//{
//// Starting at the given index, recursively visits every direction in a randomized order.
//// Set my current location to be an empty passage.
//    grid[x][y] = ' ';
//// Create an local array containing the 4 directions and shuffle their order.
//    int directions[4];
//    directions[0] = NORTH;
//    directions[1] = EAST;
//    directions[2] = SOUTH;
//    directions[3] = WEST;
//    for (int i = 0;i<4; ++i)
//    {
//        int r = rand() & 3;
//        int temp = directions[r];
//        directions[r]  = directions[i];
//        directions[i]  = temp;
//    }
//// Loop through every direction and attempt to Visit that direction.
//
//    for (int i = 0;i<4; ++i)
//    {
//// dx,dy are offsets from current location. Set them based // on the next direction I wish to try.
//        int dx = 0, dy = 0;
//        switch (directions[i])
//        {
//        case NORTH:
//            dy = -1;
//            break;
//        case SOUTH:
//            dy = 1;
//            break;
//        case EAST:
//            dx = 1;
//            break;
//        case WEST:
//            dx = -1;
//            break;
//        }
//// Find the (x,y) coordinates
//// away in the given direction.
//        int x2 = x + (dx << 1);
//        int y2 = y + (dy << 1);
//        if (IsInBounds(x2, y2))
//        {
//            if (grid[x2][y2] == '#')
//            {
//// (x2,y2) has not been visited yet... knock down the // wall between my current position and that position
//                grid[x2-dx][y2-dy] = ' ';
//// Recursively Visit (x2,y2)
//                Visit(x2, y2);
//            }
//        }
//    }
//}
//
//
//void PrintGrid() {
//// Displays the finished maze to the screen.
//for (int y=0; y<GRID_HEIGHT; ++y)
//    {
//        for (int x = 0; x < GRID_WIDTH; ++x) {
//            cout << grid[y][x];
//        }
//        cout << endl;
//    }
//}
//









