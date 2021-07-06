#include "rotor3.h"

void rotor3::F_Rotor3(int r1, int r2, int r3, int let, int STR1, int STR2, int STR3, int SER1, int SER2)
{
    if (r3 == 1)
    {
        if((let + STR3) < 26)
            StartR3 = let + STR3;
        else
            StartR3 = (let + STR3) - 26;
    }
    if((r3==2 && r1==1) || (r3==3 && r1==2))
    {
        StartR3 = let - STR1 - SER1 + STR3;
        if (StartR3 < 0)
            StartR3 += 26;
        if (StartR3 < 0)
            StartR3 += 26;
        else
            if (StartR3 > 25)
                StartR3 -= 26;
            if (StartR3 > 25)
                StartR3 -= 26;
    }
    if((r3==2 && r2==1) || (r3==3 && r2==2))
    {
        StartR3 = let - STR2 - SER2 + STR3;
        if (StartR3 < 0)
            StartR3 += 26;
        if (StartR3 < 0)
            StartR3 += 26;
        else
            if (StartR3 > 25)
                StartR3 -= 26;
            if (StartR3 > 25)
                StartR3 -= 26;
    }
}
