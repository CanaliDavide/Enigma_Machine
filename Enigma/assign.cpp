#include "assign.h"

void Assign::F_Assign(int SR1, int SR2, int SR3)
{
    if(SR1 != 0)
    {
        for(int n=0; n<26; n++)
        {
            if(n+SR1 <26)
                LetterR1Mod[n]=LetterR1[n+SR1];
            else
                LetterR1Mod[n]=LetterR1[(n+SR1)- 26];
        }
    }
    else
        for(int n=0; n<26; n++)
        {
            LetterR1Mod[n]=LetterR1[n];
        }
    //
    if(SR2 != 0)
    {
        for(int n=0; n<26; n++)
        {
            if(n+SR2 <26)
                LetterR2Mod[n]=LetterR2[n+SR2];
            else
                LetterR2Mod[n]=LetterR2[(n+SR2)- 26];
        }
    }
    else
        for(int n=0; n<26; n++)
        {
            LetterR2Mod[n]=LetterR2[n];
        }
    //
    if(SR3 != 0)
    {
        for(int n=0; n<26; n++)
        {
            if(n+SR3 <26)
                LetterR3Mod[n]=LetterR3[n+SR3];
            else
                LetterR3Mod[n]=LetterR3[(n+SR3)- 26];
        }
    }
    else
        for(int n=0; n<26; n++)
        {
            LetterR3Mod[n]=LetterR3[n];
        }
}
