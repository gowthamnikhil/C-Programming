#include <stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    int rem=year%7;
    switch(rem){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursady");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 0:
            printf("Sunday");
            break;
    }
    return 0;
}