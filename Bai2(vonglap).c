#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<2) printf("Khong la so nguyen to");
    else if(n=2) printf("La so nguyen to");
    else{
            for(int i=2; i<=sqrt(n);i++){
                if(n%i==0) printf("Khong la so nguyen to");
                else printf("La so nguyen to");
                break;
                }
    }
    return 0;
}
