#include "rotor2_bck.h"
#include "qdebug.h"

void rotor2_bck::F_rotor2_bck_1(int r1, int r2, int r3, int let, int STR1, int STR2, int STR3, int SER2)
{
    if (r2 == 3)
    {
        if((let + STR2)<26)
            StartR2Bck = let + STR2;
        else
            StartR2Bck = (let + STR2) - 26;
        if((StartR2Bck + SER2)<26)
            StartR2Bck += SER2;
        else
            StartR2Bck = (StartR2Bck + SER2) -26;
    }
        if ((r2==2 && r1==3) || (r2==1 && r1==2))
        {
            if((let + STR2)<26)

                StartR2Bck = let + STR2;

            else
                StartR2Bck = (let + STR2) - 26;
            if((StartR2Bck + SER2)<26)

                StartR2Bck += SER2;

            else
                StartR2Bck = (StartR2Bck + SER2) -26;
            if((StartR2Bck - STR1)>=0)

                StartR2Bck -= STR1;

            else
                StartR2Bck = (StartR2Bck - STR1) +26;
        }
        if ((r2==2 && r3==3) || (r2==1 && r3==2))
        {
            if((let + STR2)<26)
                StartR2Bck = let + STR2;
            else
                StartR2Bck = (let + STR2) - 26;
            if((StartR2Bck + SER2)<26)
                StartR2Bck += SER2;
            else
                StartR2Bck = (StartR2Bck + SER2) -26;
            if((StartR2Bck - STR3)>=0)
                StartR2Bck -= STR3;
            else
                StartR2Bck = (StartR2Bck - STR3) +26;
        }

}

int rotor2_bck::F_rotor2_bck_2(int r2,int let,int SER2,int STR2)
{
    if ((r2==2)||(r2==3))
    {
        if((let - SER2) >= 0)
            let = let - SER2;
        else
            let = (let - SER2) + 26;
    }
    else
    {
        if((let - SER2 - STR2) >= 0)
            let = let - SER2 - STR2;
        else
        {
            let = (let - SER2 - STR2) + 26;
            if(let < 0)
                let += 26;
        }
    }
    return let;
}
