#include <iostream>
#include <random>
using namespace std;













int main()
{

//  RANDOM
    random_device rd;
    mt19937 rand(rd());           
    //uniform_int_distribution<int> dist(0, MAXLONG);
    uniform_int_distribution<int> dist(0, 250);
// RANDOM

    const int arraynum = 25;               // ciferki

    long nigger[arraynum];

    for (int i = 0; i < arraynum; i++)
    {
        nigger[i] = dist(rand);             // generates random numbers to array
    }



    for (int i = 0; i < sizeof(nigger)/sizeof(nigger[0]); i++)
    {
        cout << nigger[i] << ' ';                                                       // current array
    }
    



    cout << "\n\n*********************************************************************************************************\n\n";







    for (int i = 0; i < sizeof(nigger)/sizeof(nigger[0]); i++)                                          // BUBBLE SORT
    {
        for (int j = 0; j < sizeof(nigger)/sizeof(nigger[0]) - 1; j++)
        {
            if (nigger[j] < nigger[j+1])
            {
                int temp = nigger[j];               
                nigger[j] = nigger[j+1];        // Replaces the bigger number to nigger[j], but anyway idk how it's working
                nigger[j+1] = temp;             
            }
        }
    }





    for (int i = 0; i < sizeof(nigger)/sizeof(nigger[0]); i++)
    {
        cout << nigger[i] << ' ';                                                   // after array
    }
    
    
    return 0;
}
