#include <iostream>
#include <string>
using namespace std;
void diced_south(int &south, int &north, int &bottom, int &top)
{
    int temp = bottom;
    bottom = south;
    south = top;
    top = north;
    north = temp;
}

void diced_north(int &south, int &north, int &bottom, int &top)
{
    int temp = bottom;
    bottom = north;
    north = top;
    top = south;
    south = temp;
}

void diced_west(int &east, int &west, int &bottom, int &top)
{
    int temp = bottom;
    bottom = west;
    west = top;
    top = east;
    east = temp;
}

void diced_east(int &east, int &west, int &bottom, int &top)
{
    int temp = bottom;
    bottom = east;
    east = top;
    top = west;
    west = temp;
}

int main()
{
   
    int input;
    while (cin >> input && input != 0)
    {
    int top = 1;
    int north = 2;
    int west = 3;
    int bottom = 6;
    int south = 5;
    int east = 4;


        for (int i = 0; i < input; i++)
        {
            string direction;
            cin >> direction;

            if (direction == "north")
            {
                diced_north(south, north, bottom, top);
            }
            else if(direction == "south")
            {
                diced_south(south, north, bottom, top);
            }
            else if(direction == "east")
            {
                diced_east(east, west, bottom, top);
            }
            else if(direction == "west")
            {
                diced_west(east, west, bottom, top);
            }




        }

                    cout << top << endl;
    }

    return 0;
}