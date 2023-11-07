#include <iostream>
using namespace std;

int main()
{
    int nigger[] = {};        // there's supposed to be some numbers

    for (int i = 0; i < sizeof(nigger)/sizeof(nigger[0]); i++)        // How does it works!?卐卐卐卐
    {                                                // How does it works!?卐卐卐卐
        for (int j = 0; j < sizeof(nigger)/sizeof(nigger[0]) - 1; j++)        // How does it works!?卐卐卐卐
        {                                        // How does it works!?卐卐卐卐
            if (nigger[j] < nigger[j+1])            // How does it works!?卐卐卐卐
            {                                    // How does it works!?卐卐卐卐
                int temp = nigger[j];            // How does it works!?卐卐卐卐   
                nigger[j] = nigger[j+1];        // How does it works!?卐卐卐卐
                nigger[j+1] = temp;             // How does it works!?卐卐卐卐
            }                                            // How does it works!?卐卐卐卐
            
        }                                                // How does it works!?卐卐卐卐
        
    }                                                // How does it works!?卐卐卐卐


    

    for (int i = 0; i < sizeof(nigger)/sizeof(nigger[0]); i++)
    {
        cout << nigger[i] << ' ';            // prints this array
    }
    
    
    return 0;
}
