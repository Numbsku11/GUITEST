#include "lib.h"

HANDLE console = GetStdHandle (STD_OUTPUT_HANDLE);

int main()
{
    SetConsoleTextAttribute(console, 85);
    for (int S = 0; S < 20; ++S)
    {         
        std::cout << " ";
    }
    std::cout << "\n ";
    
    for (int a = 0; a < 18; ++a)
    {
        SetConsoleTextAttribute(console, 20);
        std::cout << " ";
    } 
    SetConsoleTextAttribute(console, 85); 
    std::cout << " \n";
    for (int G; G < 360; ++G)
    {
        int R = 0;
        int F = 0;
        int C = 0;
        
            if (C == 20)
            {
                std::cout <<"\n";                
            }
            else if (R != 7)
            {
                F -= F;
                ++C;
                ++R;
                SetConsoleTextAttribute(console, 85);
                std::cout << " ";
            }
            else if(F != 6)
            {
                R -= R;
                ++C;
                ++F;
                
            }
            
            
    }
    
    
    
    
    
    
    
    std::cin.get();     
    }