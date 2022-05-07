/*
    @Author: Abhinav Pawar
    @Created on: 07-05-2022
*/
#include<stdio.h>
#include<math.h>
int fact(int num)
{
    int fact=1;
    if (num==0 || num==1)
    {
        fact=1;
    }
    else
    {
        for (int i=2;i<=num;i++)
        {
            fact=fact*i;
        }
    }
    return fact;
}
void main()
{
    int n1,n2,flag=0;
    float ans;
    char operate;
    printf ("\t\tWelcome to the SIMPLE CALCULATOR!\n");
    printf ("\nEnter your calculation: \n");
    scanf("%d%c%d",&n1,&operate,&n2);
    switch (operate)
    {
        case '+': ans=n1+n2;
                  break;
        case '-': ans=n1-n2;
                  break;
        case '*': ans=n1*n2;
                  break;
        case '/': ans=n1/n2;
                  break;
        case '^': ans=pow(n1,n2);
                  break;
        case '%': ans=n1%n2;
                  break;
        case 'p':
        case 'P': if (n1>=0 && n2>=0 && n1>n2)
                    ans=fact(n1)/fact(n1-n2);
                  else
                    flag=2;
                  break;
        case 'c':
        case 'C': if (n1>=0 && n2>=0 && n1>n2)
                    ans=fact(n1)/((fact(n2)*fact(n1-n2)));
                  else
                    flag=2;
                  break;
        default: flag=1;
    }
    if (flag==1)
        printf ("\nFail! Enter correct operator\n");
    else if (flag==2)
        printf ("\nFail! Enter correct operands\n");
    else
        printf ("\n\t%d%c%d=%0.2f\n\n", n1,operate,n2,ans);
}
