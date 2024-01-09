#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main()
{
    int vector[30];
    int i;
    srand (time(NULL));

      for (i=1;i<=30;i++)
      {
        vector[i]=1 +rand()%(99-1);
      }

        for (i=1;i<=30;i++)
        {
            printf("%d ",vector[i]);
        }
            printf("\n");
            printf("PARES:");
            printf("\n");
                for (i=1;i<=30;i++)
                {
                    if(vector[i]%2==0)
                    {
                        printf("%d ",vector[i]);
                    }
                }
            printf("\n");
            printf("IMPARES:");
            printf("\n");
                for (i=1;i<=30;i++)
                {
                    if(vector[i]%2!=0)
                    {
                        printf("%d ",vector[i]);
                    }
                }

    return 0;
}