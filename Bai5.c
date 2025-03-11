#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    double b;
    double c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    double dental = b*b - 4*a*c;
    if (a==0){
        if (b==0){
            printf("Phuong trinh vo nghiem");
        }
        else{
            double x = -c/b;
            printf("Phuong trinh co mot nghiem: x = %lf",x);
        }
    }
    if (dental == 0){
        double x = -b/(2*a);
        printf("Phuong trinh co mot nghiem: x = %lf",x);
    }
    else if (dental > 0){
        double x1 = (-b + sqrt(dental)) / (2*a);
        double x2 = (-b - sqrt(dental)) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet:\nx1 = %lf\nx2 = %lf",x1,x2);
    }
    else {
        printf("Phuong trinh vo nghiem");
    }
    return 0;
}
