#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if((a%4)==0)
    {
        if(a%100)
        {
            if(a%400)
            {
                printf("leap yera");
            }
            else
            {
                printf("not a leap");
            }
            
        }
        else
            {
                printf("leap year");
            }
    }
    else
    printf("not leap");
    
    return 0;
}
