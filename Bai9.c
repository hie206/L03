#include<stdio.h>
#include<math.h>
int main()
{
    int thang,nam;
    printf("Thang: ");
    scanf("%d",&thang);
    printf("Nam: ");
    scanf("%d",&nam);
    if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
        switch(thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 ngay");
            break;
        case 2:
            printf("29 ngay");
            break;
            default: printf("30 ngay");
        }
    }
    else
    {
        switch(thang)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 ngay");
            break;
        case 2:
            printf("28 ngay");
            break;
            default: printf("30 ngay");
        }
    }
    return 0;
}
