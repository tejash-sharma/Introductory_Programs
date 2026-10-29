// SUM OF DIGITS OF A NUMBER USING LOOP
#include <stdio.h>
#include <conio.h>
int main()
{
    int i,n,s=0;
    printf("Enter value:\n");
    scanf("%d",&n);
    while(n>0){
        i = n%10;
        s = s+i;
        n = n/10;
    }
    printf("the sum of digit:%d",s);
    getch();
    return 0;
}
 // FACTORIAL OF A NUMBER.   
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,f=1;
    printf("Enter value:\n");
    scanf("%d",&n);
    printf("The factorial of number ");
    for(i=1;i<=n;i++){
        f = f*i;
    }
    printf("= %d",f);
    getch();
    return 0;
}
// SUM OF THE NUMBER FROM m TO n.
#include<stdio.h>
#include<conio.h>
int main()
{ int m,n,sum=0;
    
    printf("Enter the value of m such that (m<n) :\n");
    scanf("%d",&m);
    printf("Enter the value of n :\n");
    scanf("%d",&n);
   // METHOD - 1 : USING AP FORMULA
   // sum = ((n -(m-1))/2)*(m+n);
   // USING LOOPS
   while(m <=n){
        sum = sum +m;
        m = m +1;
        
    }
    printf("\nThe sum of values from m to n :%d",sum);   
getch();
return 0;    
}
// FIND OUT DAY OF A GIVEN DATE 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int dd,mm,yy,year,month,day,i,n;
    printf("\n ENTER THE DATE: ");
    scanf("%d %d %d",&dd,&mm,&yy);
    if(dd>31 || mm>12)
    {
        printf("INVALID INPUT");
        getch();
        exit(0);
    }
    year = yy-1990;
    year = year/4;
    year = year+yy-1900;
    switch(mm)
    {
        case 1:
        case 10:
        month = 1;
        break;
        case 7:
        case 4: 
        month = 0;
        break;
        case 2:
        case 3:
        case 11:
        month = 4;
        break;
        case 5:
        month = 2;
        break;
        case 6:
        month = 5;
        break;
        case 8:
        month = 3;
        break;
        case 9:
        case 12:
        month = 6;
        break;
    }
    year = year+month;
    year = year+dd;
    day = year%7;
    switch(day)
    {
        case 0 :
        printf("\n SATURDAY");
        break;
        case 1:
        printf("\n SUNDAY");
        break;
        case 2:
        printf("\n MONDAY");
        break;
        case 3:
        printf("\n TUESDAY");
        case 4:
        printf("\n WEDNESDAY");
        break;
        case 5:
        printf("\n THURSDAY");
        break;
        case 6:
        printf("\n FRIDAY");
        break;
    }
    getch();
    return 0;
}
// LCM OF TWO NUMBERS
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,b,lcm;
    printf("Enter First Number:\n");
    scanf("%d",&a);
    printf("Enter Second Number:\n");
    scanf("%d",&b);
    // METHOD :- 1.
    lcm = a>b?a:b;
      while(1){
        if(lcm%a == 0 && lcm%b == 0){
            printf("LCM of Two Values :%d",lcm);
            break;
        }
        else{
            lcm
        lcm++;
        }
    // METHOD :- 2.
    lcm= a*b;
    for(i=1;i<=lcm;i++){
        if(i%a == 0 && i%b == 0){
            printf("LCM of Two Values :%d", i);
            break;
        }
    }
    getch();
    return 0 ;
}
//GCD OF TWO NUMBERS
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,d2,d1,r;
    printf("Enter First Value:\n");
    scanf("%d",&a);
    printf("Enter Second Value:\n");
    scanf("%d",&b);
    if(a>b)
    {
        d1 = a;
        d2 = b;
    }
    else
    {
        d1 = b;
        d2 = a;
    }
    while(d2)
    {
        //EUCLIDEAN ALGORITHM
        r   = d1%d2;
        d1  = d2;
        d2  = r;
        
    }
    printf("GCD of %d and %d is %d",a,b,d1);
    getch();
    return 0 ;
}
// PASCAL'S TRIANGLE
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,s,c = 1,r;
    printf("Enter the numbers of Rows:");
    scanf("%d",&r);
    printf("\t\t\t\t\tPASCAL'S TRIANGLE\n");
    printf("------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<(r+1);i++){
        if(i!=1){
        for(s=1;s<=((r+1)-i);s++){
            printf("    ");
        }
        for(j=0;j<=i;j++){
            if(j == 0|| i == 0) 
            {
                c = 1;
            }
            else 
            {
            c = c* (i-j+1)/j;
            } 
            printf(" %4d   ",c);
        }
         printf("\n");
    }
    }
    getch();
    return 0 ;
}
// THE SUM OF THE SERIES : "-x + x^2 - x^3 +...."
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int n,i;
   float a,x,sum = 0;
   printf("Enter the Numbers of Terms :\n");
   scanf("%d",&n);
   printf("Enter the Value of x :\n");
   scanf("%f",&x);
   for(i=1;i<=n;i++){
    a   = pow((-1),i)*pow(x,i);
    sum = sum + a;
   }
   printf("The of series -x + x^2 - x^3 +.... is \n %.2f",sum);
    getch();
    return 0 ;
}
// TO PRINT PATTERN :    * * * * *
//                       *       *
//                       *       *
//                       *       *
//                       * * * * * 
#include<stdio.h>
#include<conio.h>
int main()
{
    const int k=5;
    int i , j ;
    for(i=1;i<=k;i++){
        for(j=1;j<=k;j++){
            if(i == 1 || i == 5 || j == 1 || j == 5){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    getch();
    return 0;
}
// SUM AND AVERAGE OF FIRST N NATURAL NUMBERS USING FUNCTIONS.
#include<stdio.h>
#include<conio.h>
int sum(int);
float avg(int,int);
int main()
{
    float a;
    int i,n,s;
    printf("Enter the Value of n :");
    scanf("%d",&n);
    s = sum(n);
    a = avg(s,n);
    printf("The Sum of First %d Natural Numbers is %d.\nThe Average of First %d Natural Numbers is %.2f .",n,s,n,a);
    getch();
    return 0;
}
int sum(int s)
{
    int i,sum = 0;
    for(i = 1;i<=s;i++){
        sum = sum + i;
    }
    return sum;
}
float avg(int a,int b)
{
    int c;
    if(b != 0){
    c = a/b;
    return c;
    }
    else
    return 0;
}
// TO CALCULATE C(n/r) USING FUNCTIONS
#include<stdio.h>
#include<conio.h>
int Fact(int);
int main()
{
    float f;
    int n,r;
    printf("Enter the Value of n : ");
    scanf("%d",&n);
    printf("\nEnter the Value of r : ");
    scanf("%d",&r);
    f =  (float) Fact(n)/(Fact(r)*Fact(n-r));
    printf("\nC(n/r) : C(%d/%d) = %.2f",n,r,f);
    getch();
    return 0;
}
int Fact( int t)
{
    int i,m=1;
    if(t == 0)
    return 1;
    else{
        for(i=1;i<=t;i++){
            m = m*i;
        }
        return m;
   }
}
// CALCULATE GCD USING RECUSIVE FUNCTION
#include<stdio.h>
#include<conio.h>
int GCD(int,int);
int main()
{
    int num1,num2,r;
    printf("Enter the First Value : ");
    scanf("%d",&num1);
    printf("\nEnter the Second Value : ");
    scanf("%d",&num2);
    r = GCD(num1,num2);
    printf("\nGCD of Two Numbers %d and %d is %d.",num1,num2,r);
    getch();
    return 0 ;
}
int GCD(int x,int y){
    int rem;
    if(x>y){          
        rem = x%y;
        if(rem == 0)
        return y;
        else
        return (GCD(y,rem));
    }
    else{
        rem = y%x;
        if(rem == 0)
        return x;
        else
        return (GCD(x,rem));
    }
}
//EXPONENTS OF NUMBERS USING RECURSIVE FUNCTIONS
#include<stdio.h>
#include<conio.h>
int Exp(int,int);
int main()
{
    int a,b,r;
    printf("Enter the Base of Exponent: ");
    scanf("%d",&a);
    printf("\nEnter the Power of Exponent: ");
    scanf("%d",&b);
    r = Exp(a,b);
    printf("Result (%d^%d) = %d\n",a,b,r);
    getch();
    return 0 ;
}
     int Exp(int p,int q){
    if(q == 0)
     return 1;
    else{
        return (p* Exp(p,q-1));
    } 
}
// FIBONACCI SERIES: 0 1 1 2 3 5 8 13 21 34 55 89 .....
#include<stdio.h>
#include<conio.h>
int fib(int);
int main()
{
    int i,n,r;
    printf("Enter the Value of n : ");
    scanf("%d",&n);
    printf("\nFIBONACCI SERIES :\n");
    for(i=0;i<=n;i++){
    r = fib(i);
    printf("%d ",r);
    }
    getch();
    return 0 ;
}
int fib(int a){
    if(a == 0)
    return 0;
    else if(a == 1)
    return 1;
    else
    return (fib(a-1)+fib(a-2));   
}
