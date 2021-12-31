#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x1,x2,delta,Fx;
    unsigned int N,A,k=1;
    for(int j=0;j<9;j++)
        {
            if(j%2==0)
            printf("Hello world! %d\n ",j);
            else printf("test %d\n",j);

        }
    printf("Chois your variant: \n");
    scanf("%u",&A);
    if(A==1)
    {
        printf("Value 1= ");
        scanf("%lf",&x1);

        printf("Value 2= ");
        scanf("%lf",&x2);

        printf("N= ");
        scanf("%u",&N);
        printf("X1=%.2lf X2=%.2lf N=%u\n",x1,x2,N);
        printf("*************************************\n");
        printf("\t* \t N * \t X * \t F(X) \t\n");
        printf("*************************************\n");
        for(int i=x1;i<=x2;i+=((x2-x1)/(N-1.00)))
            {
                Fx=i*2;
                printf("\t|\t%u|\t%u|\t%.2lf|\t\n",k,i,Fx);
                printf("\t+--------+----------+-------+\n");
                k++;
            }
    }
    else if(A==2)
    {
        printf("Value 1= ");
        scanf("%lf",&x1);

        printf("Value 2= ");
        scanf("%lf",&x2);

        printf("Step= ");
        scanf("%lf",&delta);
        printf("X1=%.2lf X2=%.2lf delta=%.2lf\n",x1,x2,delta);
        printf("*************************************\n");
        printf("\t* \t N * \t X * \t F(X) \t\n");
        printf("*************************************\n");
        for(int i=x1;i<=x2;i+=delta)
        {
            Fx=i*2;
            printf("\t|\t%u|\t%u|\t%.2lf|\t\n",k,i,Fx);
            printf("\t+--------+----------+-------+\n");
            k++;
        }
    }
    else
        {
            printf("no such option\n");
        }
    return 0;
}
