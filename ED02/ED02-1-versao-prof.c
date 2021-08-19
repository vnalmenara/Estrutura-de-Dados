#include <stdio.h>

int expo(int x, int y);

int main()
{
    int r = expo(2,4);
    printf("2 elevado a 6 =%d", r);

    return 0;
}

int expo(int x, int y)
{
 printf("x=%i , y=%i \n", x, y);
 if (y == 0){
    return 1;
 }
 if (y == 1){
    return x;
 }
 return x*expo(x,y-1);
}
