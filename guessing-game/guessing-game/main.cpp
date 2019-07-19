//
//  main.cpp
//  guessing-game
//
//  Created by Kelton on 2019/07/17.
//  Copyright © 2019 Kelton. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    int x;                                      //creating variables for placeholders and counters
    int y;
    int k=0;                                    //counter to find out when player loses
    int num;
    
    srand(time(0));                            //function to ensure that the random number is not the sane
    x = rand();
    y = x%99;                                  //mod to ensure that the random number is between 1-100
    
    cout << "Please guess a number between 1-100, you have FIVE chances. Goodluck!" << endl;
    
    for (int z=0; z<5; z++)
    {
        cin >> num;                           //inputting guess each time

        if (num == y)                         //winning condition
        {
            cout << "You win" << endl;
            break;
        }
        else if ( num > y)                    //guess lower condition
        {
            if (k == 4)
            {
                cout << "You lose" << endl;  //condition for when this loop is entered while already passed the fourth attempt the player will lose
                break;
            }
            cout << "Guess lower" << endl;
            k++;
        }
        else if (num < y)                    //guess higher condition
        {
            if (k == 4)
            {
                cout << "You lose" << endl; //condition for when this loop is entered while already passed the fourth attempt the player will lose
                break;
            }
            cout << "Guess higher" << endl;
            k++;
        }
    }

}
