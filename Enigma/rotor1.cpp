#include "rotor1.h"

void Rotor1::F_Rotor1(int r1, int r2, int r3, int let, int STR1, int STR2, int STR3, int SER2, int SER3)
{
    if (r1 == 1)
    {
        if((let + STR1) < 26)
            StartR1 = let + STR1;
        else
            StartR1 = (let + STR1) - 26;
    }
    if((r1==2 && r2==1) || (r1==3 && r2==2))
    {
        StartR1 = let - STR2 - SER2 +STR1;
        if (StartR1 < 0)
            StartR1 += 26;
        if (StartR1 < 0)
            StartR1 += 26;
        else
            if (StartR1 > 25)
                StartR1 -= 26;
            if (StartR1 > 25)
                StartR1 -= 26;
    }
    if((r1==2 && r3==1) || (r1==3 && r3==2))
    {
        StartR1 = let - STR3 - SER3 +STR1;
        if (StartR1 < 0)
            StartR1 += 26;
        if (StartR1 < 0)
            StartR1 += 26;
        else
            if (StartR1 > 25)
                StartR1 -= 26;
            if (StartR1 > 25)
                StartR1 -= 26;
    }
}
