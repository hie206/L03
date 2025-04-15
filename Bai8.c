#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        if(a*a+b*b==c*c || c*c+b*b==a*a || a*a+c*c==b*b) printf("Tam giac vuong");
        else if(a==b==c) printf("Tam giac deu");
        else if(a==b || b==c || a==c) printf("Tam giac can");
        else printf("Tam giac thuong");
    }
    else printf("Khong phai la 1 tam giac");
    return 0;
}
