#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    if(x<5){
        printf("Yeu");
    }
    else if(5<=x && x<7){
        printf("TB");
    }
    else if(7<=x && x<8){
        printf("Kha");
    }
    else if(8<=x && x<9){
        printf("Gioi");
    }
    else{
        printf("Xuat sac");
    }
    return 0;
}
