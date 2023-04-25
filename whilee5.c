#include<stdio.h>

main()
{
      int num=1 ,n;
      printf("enter to odd number =");
      scanf("%d",&n);
      while(num<=n)
      {
           if(num%2!=n)
           {
              printf("%d\n",n);
              n--;                                                          
           }                                                        
      }                                                             
}
