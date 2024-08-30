#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{ 
    int principle,amount,CI,time;
    float rate;
    printf("Enter the principle amount: \n");
    scanf("%d",&principle);
    printf("Enter the rate: \n");
    scanf("%f",&rate);
    printf("Enter the time: \n");
    scanf("%d",&time);
    amount= (principle*((pow((1 +rate /100),time))));
    CI=amount-principle;
    printf("Compound Intrest is %d",CI);
    return 0;
}
