#include <iostream>
#include<maze.h>

using namespace std;

int main(int argc, char *argv[])
{

    maze m1(3);

    m1.randomizeMaze();
    std::cout << "----- N=3 -----" << std::endl;
    m1.printWallList();


    maze m2(4);

    m2.randomizeMaze();
    std::cout << "----- N=4 -----" << std::endl;
    m2.printWallList();


    maze m3(5);

    m3.randomizeMaze();
    std::cout << "----- N=5 -----" << std::endl;
    m3.printWallList();

    maze m4(20);
    m4.randomizeMaze();
    m4.printMaze(true);



    return 0;
}
