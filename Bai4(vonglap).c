#include<stdio.h>
#include<math.h>
int main()
{
    int tong = 0;
    for (int i=1; i<=100; i+=2){
        tong = tong + i;
    }
    printf("%d", tong);
    return 0;
}
