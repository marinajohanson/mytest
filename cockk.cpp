#include <iostream>
#include <random>
#include<Windows.h> // for clear()
using namespace std;



void clear() {
    COORD topLeft  = { 0, 0 };
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screen;
    DWORD written;

    GetConsoleScreenBufferInfo(console, &screen);
    FillConsoleOutputCharacterA(
        console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    FillConsoleOutputAttribute(
        console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
        screen.dwSize.X * screen.dwSize.Y, topLeft, &written
    );
    SetConsoleCursorPosition(console, topLeft);
}

//clears console






int main()
{

//  RANDOM
    random_device rd;
    mt19937 rand(rd());           
    uniform_int_distribution<int> dist(0, MAXINT);
// RANDOM

    clear();        // clears console

    const int arraynum = 100;               // ciferki

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
        cout << nigger[i] << ' ';                                                   // after sorting array
    }
    
    
    return 0;
}
