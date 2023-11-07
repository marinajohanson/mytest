#include <iostream>
using namespace std;

int main()
{
    int nigger[] = {};

    for (int i = 0; i < sizeof(nigger)/sizeof(nigger[0]); i++)
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
        cout << nigger[i] << ' ';
    }
    
    
    return 0;
}
