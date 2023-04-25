#include<stdio.h>

main()
{
    int num=1,n;
    printf("enter to even number =");
    scanf("%d",&n);
    while(n>=num)
    {
        if (num%4!=n)
        {
            printf("%d\n",n);
            n--;                                                        
        }                                                        
    }                                                         
}
