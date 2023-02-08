#include <stdio.h>
int main (){
    float bill,units ;
    printf("enter the unit consumed: ");
    scanf("%f",&units);
    if (units <= 50 && units>=0)
    {
        bill=units*7.0;
        printf("electricity bill=%0.2f rupees",bill);
    }
    else if (units<=100 && units>50)
    {
        bill=units*9.0;
        printf("electricity bill=%0.2f rupees",bill);
        
    }
    else if (units<=250 && units>150)
    {
        bill=units*12.0;
        printf("electricity bill=%0.2f rupees",bill);
        
    }
    else if (units>250)
    {
        bill=units*15.0;
        printf("electricity bill=%0.2f rupees",bill);
        
    }
    else
    {
        printf("please enter valid consumed units..");
    }
    

    
    
    return 0;
}
