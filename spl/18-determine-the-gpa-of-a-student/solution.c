#include <stdio.h>
int main()
{
    int num;
    printf("Enter your mark ");
    scanf("%d",&num);
    printf(" You entered %d Marks \n", num); // printing outputs
    if(num >= 80){
        printf(" You got A grade \n"); // printing outputs
    }
    else if ( num >=60){ // Note the space between else & if
        printf(" You got B grade \n");
    }
    else if ( num >=40){
        printf(" You got C grade \n");
    }
    else if ( num < 40){
        printf(" You Failed in this exam \n");
        printf(" Better Luck Next Time \n");
    }
    return 0;
}
