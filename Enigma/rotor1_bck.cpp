#include "rotor1_bck.h"

void rotor1_bck::F_rotor1_bck_1(int r1, int r2, int r3, int let, int STR1, int STR2, int STR3, int SER1)
{
    if (r1 == 3)
    {
        if((let + STR1)<26)
            StartR1Bck = let + STR1;
        else
            StartR1Bck = (let + STR1) - 26;
        if((StartR1Bck + SER1)<26)
            StartR1Bck += SER1;
        else
            StartR1Bck = (StartR1Bck + SER1) -26;
    }
        if ((r1==2 && r2==3) || (r1==1 && r2==2))
        {
            if((let + STR1)<26)
                StartR1Bck = let + STR1;
            else
                StartR1Bck = (let + STR1) - 26;
            if((StartR1Bck + SER1)<26)
                StartR1Bck += SER1;
            else
                StartR1Bck = (StartR1Bck + SER1) -26;
            if((StartR1Bck- STR2)>=0)
                StartR1Bck -= STR2;
            else
                StartR1Bck = (StartR1Bck - STR2) +26;
        }
        if ((r1==2 && r3==3) || (r1==1 && r3==2))
        {
            if((let + STR1)<26)
                StartR1Bck = let + STR1;
            else
                StartR1Bck = (let + STR1) - 26;
            if((StartR1Bck + SER1)<26)
                StartR1Bck += SER1;
            else
                StartR1Bck = (StartR1Bck + SER1) -26;
            if((StartR1Bck- STR3)>=0)
                StartR1Bck -= STR3;
            else
                StartR1Bck = (StartR1Bck - STR3) +26;
        }

}

int rotor1_bck::F_rotor1_bck_2(int r1,int let,int SER1,int STR1)
{
    if ((r1==2)||(r1==3))
    {
        if((let - SER1) >= 0)
            let = let - SER1;
        else
            let = (let - SER1) + 26;
    }
    else
    {
        if((let - SER1 - STR1) >= 0)
            let = let - SER1 - STR1;
        else
        {
            let = (let - SER1 - STR1) + 26;
            if(let < 0)
                let += 26;
        }
    }
    return let;
}
