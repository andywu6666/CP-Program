#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int x, y;
    if (!(cin >> x >> y)) 
        return 0;
        
        vector<vector<int>> grid(x+2, vector<int>(y+2, 0));
        
        int initialX = 0, initialY = 0, X = 0, Y = 0;
        string position;
        string commands;
        while (cin >> initialX >> initialY >> position >> commands)
        {
        
        bool lost = false;    
        for (int k = 0; k < commands.length(); k++)
        {
             bool east = false, south = false, west = false, north = false;
        if (position == "E")
            east = true;
        else if (position == "S")
            south = true;
        else if (position == "W")
            west = true;
        else if (position == "N")
            north = true;
            
            if (commands[k] == 'R')
            {
                if (east)
                {
                    position = "S";
                }
                else if (south)
                {
                    position = "W";
                }
                else if (west)
                {
                    position = "N";
                }
                else if (north)
                {
                    position = "E";
                }
            }
            else if (commands[k] == 'L')
            {
                if (east)
                {
                    position = "N";
                }
                else if (south)
                {
                    position = "E";
                }
                else if (west)
                {
                    position = "S";
                }
                else if (north)
                {
                    position = "W";
                }
            }
            else if (commands[k] == 'F')
            {
                X = initialX;
                Y = initialY;
                if (east)
                    X++;
                else if (south)
                    Y--;
                else if (west)
                    X--;
                else if (north)
                    Y++;
                    
                if (X < 0 || Y < 0 || X > x || Y > y)
                {
                    if (grid[initialX][initialY] == -1)
                        continue;
                    else{
                        grid[initialX][initialY] = -1;
                        lost = true;
                        break;
                    }
                }
                else
                {
                    initialX = X;
                    initialY = Y;
                }
                
                
            }
        }
        cout << initialX << " " << initialY << " " << position;
        if (lost)
            cout << " LOST";
            
        cout << endl;
        }
    
    return 0;
}