/*
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b;
    printf("Enter two values:");
    scanf("%d %d",&a,&b);
    printf("The result = %s",a%2 == 0 &&b%2 == 0?printf("Both are even"):(a%2 != 0 && b%2 != 0 ?printf("Both are odd"):(a%2 != 0 ?printf("First digit \'%d\' is odd and Second digit \'%d\' is even",a,b):printf("Second digit \'%d\' is odd and First digit \'%d\' is even",b,a))));
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define area(r) pi*r*r*r*1.34
int main()
{ 
    float a,b ;
    a = pi ;
    b = area(2);
    printf("%f %f",a,b);
    return 0;

}
#include <stdio.h>
#include <conio.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f,g,h;
    a = 23.4212345;
    b = 13.53;
    c = 95.34;
    d = 3.4765 ;
    e = pow(1.23,3);
    printf("%-lf %+lf %0lf \r%08lf",a,b,c,d);
    printf("\n%Lf",e);
    return 0;
    }
    #include <stdio.h>
    #include <conio.h>
    int main()
    {
        unsigned int a,b,c,d;
        printf("Enter the three digit number:\n");
        scanf("%d",&a);
        b = a/100;
        c = (a%100)/10;
        d = (a%100)%10;
        printf("The sum of the digit of three digit number is %d",b+c+d);
        getch();
        return 0;
    }
    #include<stdio.h>
    #include<conio.h>
    int  main()
    {
        int a,b,c;
        printf("Enter three values:");
        scanf("%d %d %d",&a,&b,&c);
        printf("The values before swap are %d %d %d\n",a,b,c);
        a = (b^c)^a;
        b = (c^a)^b;
        c = (a^c)^b;
        a = (b^c)^a;
        printf("The values after swap are %d %d %d",a,b,c);
        getch();
        return 0;
    }
    #include<stdio.h>
    #include<conio.h>
    int  main()
    {
        int a,b,c;
        printf("Enter three values:");
        scanf("%d %d %d",&a,&b,&c);
        printf("The values before swap are %d %d %d\n",a,b,c);
        a = (b+c)-a;
        b = (c+a)-b;
        c = (a+c)-b;
        a = (b+c)-a;
        b = (a+a)-b;
       // b = ((c+a)-b)+(a-c);
        printf("The values after swap are %d %d %d",a,b,c);
        getch();
        return 0;
    }*/
    