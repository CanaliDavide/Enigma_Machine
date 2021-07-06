#include "control.h"

int control::F_control_PosR(int r1, int r2, int r3)
{
    if ( (r1 != r2) && (r2 != r3) && (r1 != r3) && (r2 !=0) && (r3 != 0) && (r1 != 0))
        return 0;
    else
        return 1;
}

int control::F_control_Plug(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2, int e1, int e2)
{
    if (((a1 != a2)&&(a1 != b1)&&(a1 != b2)&&(a1 !=c1)&&(a1 !=c2)&&(a1 !=d1)&&(a1 !=d2)&&(a1 !=e1)&&(a1 !=e2)
         &&(a2 != b1)&&(a2 != b2)&&(a2 !=c1)&&(a2 !=c2)&&(a2 !=d1)&&(a2 !=d2)&&(a2 !=e1)&&(a2 !=e2)
         &&(b1 != b2)&&(b1 !=c1)&&(b1 !=c2)&&(b1 !=d1)&&(b1 !=d2)&&(b1 !=e1)&&(b1 !=e2)
         &&(b2 !=c1)&&(b2 !=c2)&&(b2 !=d1)&&(b2 !=d2)&&(b2 !=e1)&&(b2 !=e2)
         &&(c1 !=c2)&&(c1 !=d1)&&(c1 !=d2)&&(c1 !=e1)&&(c1 !=e2)
         &&(c2 !=d1)&&(c2 !=d2)&&(c2 !=e1)&&(c2 !=e2)
         &&(d1 !=d2)&&(d1 !=e1)&&(d1 !=e2)
         &&(d2 !=e1)&&(d2 !=e2)
         &&(e1 !=e2))
         || ((((((((((a1==a2)==b1)==b2)==c1)==c2)==d1)==d2)==e1)==e2)== 0)  )
        return 0;
    else
        return 1;
}
