#include<stdio.h>

main()
{
     int num,count,sum=0;
     printf("enter number =");
     scanf("%d",&num);
     
     while(count <=num)
     {
          printf("%d\n",&count);                                                        
          sum=sum + count;
          count++;                                                        
     }                                          
}
