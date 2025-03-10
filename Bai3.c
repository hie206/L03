#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    printf("So nguyen thu nhat la: %d\nSo nguyen thu hai la: %d\nTong: %d\nHieu: %d\nTich: %d\n",a,b,a+b,a-b,a*b);
    if (b!=0){
        printf("Thuong: %.2lf\n",(double)a/b);
        printf("Phan du: %d",a%b);
    }
    else{
    printf("Khong ton tai phep tinh chia");
    }
    return 0;
}
