#include<stdio.h>
#include<math.h>
int main()
{
    int tong = 0, so;
    for(int i = 1; i<=10; i++){
        printf("So thu %d: ",i);
        scanf("%d",&so);
        tong += so;
        printf("%d", tong);
    }
    return 0;
}
