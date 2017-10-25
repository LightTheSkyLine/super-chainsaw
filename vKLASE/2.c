#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c_a=12;
    char c_1=0x01,
         c_2=0x02,
         c_3=0x04,
         c_4=0x08,
         c_5=0x10,
         c_6=0x20,
         c_7=0x40,
         c_8=0x80;
    printf (" c_a=%d\n F =", c_a);
  if (c_a & c_1)  printf(" c_1 ") ;
   else if (c_a & c_2)  printf(" c_2 ") ;
    else if (c_a & c_3)  printf(" c_3 ") ;
     else if (c_a & c_4)  printf(" c_4 ") ;
      else if (c_a & c_5)  printf(" c_5 ") ;
       else if (c_a & c_6)  printf(" c_6 ") ;
        else if (c_a & c_7)  printf(" c_7 ") ;
         else if (c_a & c_8)  printf(" c_8 ") ;
          else                 printf ("PROVAL");
return 0;
}
