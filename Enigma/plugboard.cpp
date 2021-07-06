#include "plugboard.h"
#include <QDebug>

int PlugBoard::F_PlugBoard(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2, int e1, int e2, int Letter)
{
    if(Letter == a1 && a2 != 26)
        Letter = a2;
    else
        if(Letter == b1 && b2 != 26)
            Letter = b2;
        else
            if(Letter == c1 && c2 != 26)
                Letter = c2;
            else
                if(Letter == d1 && d2 != 26)
                    Letter = d2;
                else
                    if(Letter == e1 && e2 != 26)
                        Letter = e2;
                    else
                        if(Letter == a2 && a1 != 26)
                            Letter = a1;
                        else
                            if(Letter == b2 && b1 != 26)
                                Letter = b1;
                            else
                                if(Letter == c2 && c1 != 26)
                                    Letter = c1;
                                else
                                    if(Letter == d2 && d1 != 26)
                                        Letter = d1;
                                    else
                                        if(Letter == e2 && e1 != 26)
                                            Letter = e1;

    return Letter;
}
