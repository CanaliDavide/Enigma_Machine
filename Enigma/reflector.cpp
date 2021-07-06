#include "reflector.h"

void reflector::F_reflector(int r1, int r2, int r3, int let, int STR1, int STR2, int STR3, int SER1,int SER2,int SER3)
{
    if(r1 == 3)
    {
        StartRef = let - STR1 - SER1;
        if (StartRef < 0)
            StartRef += 26;
        if (StartRef < 0)
            StartRef += 26;
    }
    else{
        if(r2 == 3)
        {
            StartRef = let - STR2 - SER2;
            if (StartRef < 0)
                StartRef += 26;
            if (StartRef < 0)
                StartRef += 26;
        }
        else{
            if(r3 == 3)
            {
                StartRef = let - STR3 - SER3;
                if (StartRef < 0)
                    StartRef += 26;
                if (StartRef < 0)
                    StartRef += 26;
            }
        }
    }
}
