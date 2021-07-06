#include "rotor2.h"

void rotor2::F_Rotor2(int r1, int r2, int r3, int let, int STR1, int STR2, int STR3, int SER1, int SER2)
{
    if (r2 == 1)
    {
        if((let + STR2) < 26)
            StartR2 = let + STR2;
        else
            StartR2 = (let + STR2) - 26;
    }
    if((r2==2 && r1==1) || (r2==3 && r1==2))
    {
        StartR2 = let - STR1 - SER1 + STR2;
        if (StartR2 < 0)
            StartR2 += 26;
        if (StartR2 < 0)
            StartR2 += 26;
        else
            if (StartR2 > 25)
                StartR2 -= 26;
            if (StartR2 > 25)
                StartR2 -= 26;
    }
    if((r2==2 && r3==1) || (r2==3 && r3==2))
    {
        StartR2 = let - STR3 - SER2 + STR2;
        if (StartR2 < 0)
            StartR2 += 26;
        if (StartR2 < 0)
            StartR2 += 26;
        else
            if (StartR2 > 25)
                StartR2 -= 26;
            if (StartR2 > 25)
                StartR2 -= 26;
    }
}
