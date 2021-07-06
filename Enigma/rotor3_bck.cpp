#include "rotor3_bck.h"
#include "qdebug.h"

void rotor3_Bck::F_rotor3_Bck_1(int r1, int r2, int r3, int let, int STR1, int STR2, int STR3, int SER3)
{
    if (r3 == 3)
    {
        if((let + STR3)<26)
            StartR3Bck = let + STR3;
        else
            StartR3Bck = (let + STR3) - 26;
        if((StartR3Bck + SER3)<26)
            StartR3Bck += SER3;
        else
            StartR3Bck = (StartR3Bck + SER3) -26;
    }
    if ((r3==2 && r1==3) || (r3==1 && r1==2))
    {
        if((let + STR3)<26)
            StartR3Bck = let + STR3;
        else
            StartR3Bck = (let + STR3) - 26;
        if((StartR3Bck + SER3)<26)
            StartR3Bck += SER3;
        else
            StartR3Bck = (StartR3Bck + SER3) -26;
        if((StartR3Bck- STR1)>=0)
            StartR3Bck -= STR1;
        else
            StartR3Bck = (StartR3Bck - STR1) +26;
    }
    if ((r3==2 && r2==3) || (r3==1 && r2==2))
    {
        if((let + STR3)<26)
            StartR3Bck = let + STR3;
        else
            StartR3Bck = (let + STR3) - 26;
        if((StartR3Bck + SER3)<26)
            StartR3Bck += SER3;
        else
            StartR3Bck = (StartR3Bck + SER3) -26;
        if((StartR3Bck- STR2)>=0)
            StartR3Bck -= STR2;
        else
            StartR3Bck = (StartR3Bck - STR2) +26;
    }
}

int rotor3_Bck::F_rotor3_Bck_2(int r3,int let,int SER3, int STR3)
{
    if ((r3==2)||(r3==3))
    {
    if((let - SER3) >= 0)
        let = let - SER3;
    else
        let = (let - SER3) + 26;
    }
    else
    {
        if((let - SER3 - STR3) >= 0)
            let = let - SER3 - STR3;
        else
        {
            let = (let - SER3 - STR3) + 26;
            if(let < 0)
                let += 26;
        }
    }
    return let;
}
