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
                printf("yes");
            }
            else
            {
                printf("no");
            }
            
        }
        else
            {
                printf("yes");
            }
    }
    else
    printf("no");
    
    return 0;
}
