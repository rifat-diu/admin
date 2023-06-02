//Write a project to make a Scientific Calculator
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define note "Enter The Valid Operation....."
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void square();
void cube();
void squareroot();
void absolute();
void sine();
void cosine();
void tangent();
void cosecent();
void secent();
void cotgent();
void exponential();
void logarithm();
void logarithm10();
void quadric_equation();
void round_fig();
void multiplication_table();
void deci_hexa();
void deci_octal();
void hexa_deci();
void hexa_octal();
void octal_hexa();
void octal_decimal();
void celsi_faren();
void faren_celci();
void about_calculator();
int main()
{
    int choice;
    printf("\n\t\t\t\t\t\t Welcome To The Scientific Calculator!!\n\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Presented By (:\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Rifat Shahrier Eram\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ID:024-231-000-510-1186\n");
    printf("\n\t\t1 Addition\n");
    printf("\t\t2 Subtraction\n");
    printf("\t\t3 Multiplication\n");
    printf("\t\t4 Division\n");
    printf("\t\t5 Modulus\n");
    printf("\t\t6 Power\n");
    printf("\t\t7 Factorial\n");
    printf("\t\t8 Square\n");
    printf("\t\t9 Cube\n");
    printf("\t\t10 Squareroot\n");
    printf("\t\t11 Absolute\n");
    printf("\t\t12 Sine\n");
    printf("\t\t13 Cosine\n");
    printf("\t\t14 Tangent\n");
    printf("\t\t15 Cosecent\n");
    printf("\t\t16 Secent\n");
    printf("\t\t17 Cotgent\n");
    printf("\t\t18 Exponenttial\n");
    printf("\t\t19 Logarithm\n");
    printf("\t\t20 Logarithm 10 Base\n");
    printf("\t\t21 Quadric Equation\n");
    printf("\t\t22 Round Figure\n");
    printf("\t\t23 Multiplication Table\n");
    printf("\t\t24 Decimal to Hexa Decimal\n");
    printf("\t\t25 Decimal to Octal\n");
    printf("\t\t26 Hexa Decimal to Decimal\n");
    printf("\t\t27 Hexa Decimal to Octal\n");
    printf("\t\t28 Octal to Hexa Decimal\n");
    printf("\t\t29 Octal to Decimal\n");
    printf("\t\t30 Celcious To Farenhight Temparature\n");
    printf("\t\t31 Farenhight To Celcious Temparature\n");
    printf("\t\t100 About The Calculator \t^_^ ^_^ ^_^ ^_^\n\n");
    printf("\t\tEnter 0 for Exit The Programme");
    while(1)
    {
        printf("\n\n\t\tEnter the operation you want to do: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            modulus();
            break;
        case 6:
            power();
            break;
        case 7:
            factorial();
            break;
        case 8:
            square();
            break;
        case 9:
            cube();
            break;
        case 10:
            squareroot();
            break;
        case 11:
            absolute();
            break;
        case 12:
            sine();
            break;
        case 13:
            cosine();
            break;
        case 14:
            tangent();
            break;
        case 15:
            cosecent();
            break;
        case 16:
            secent();
            break;
        case 17:
            cotgent();
            break;
        case 18:
            exponential();
            break;
        case 19:
            logarithm();
            break;
        case 20:
            logarithm10();
            break;
        case 21:
            quadric_equation();
            break;
        case 22:
            round_fig();
            break;
        case 23:
            multiplication_table();
            break;
        case 24:
            deci_hexa();
            break;
        case 25:
            deci_octal();
            break;
        case 26:
            hexa_deci();
            break;
        case 27:
            hexa_octal();
            break;
        case 28:
            octal_hexa();
            break;
        case 29:
            octal_decimal();
            break;
        case 30:
            celsi_faren();
            break;
        case 31:
            faren_celci();
            break;
        case 100:
            about_calculator();
            break;
        case 0:
            exit(0);
        default:
            printf("\n********** %s ***********\n",note);
        }
    }
    return 0;
}
void addition()
{
    printf("Enter the numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n",a+b);
}
void subtraction()
{
    printf("Enter the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subtraction of a and b is %d\n",a-b);
}
void multiplication()
{
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void division()
{
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus()
{
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial()
{
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power()
{
    double b;
    double p;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    double e=pow(b,p);
    printf("The Answer is %lf",e);
}
void square()
{
    double b;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    double p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
void cube()
{
    double b;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    double p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
void squareroot()
{
    double b;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    double s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
void absolute()
{
    double x;
    printf("Type Any Num Include positibve or Negative :");
    scanf("%lf",&x);
    int result=abs(x);
    printf("The Absolute value is :%lf",result);
}
void sine()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=sin(x);
    printf("The value of Sine its that value is :%.2lf",y);
}
void cosine()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=cos(x);
    printf("The value of Cosine its that value is :%.2lf",y);
}
void tangent()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=tan(x);
    printf("The value of Tangent its that value is :%.2lf",y);
}
void cosecent()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=1/sin(x);
    printf("The value of cosecant its that value is :%.2lf",y);
}
void secent()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=1/cos(x);
    printf("The value of Srcent its that value is :%.2lf",y);
}
void cotgent()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=1/tan(x);
    printf("The value of Cotgent its that value is :%.2lf",y);
}
void exponential()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=exp(x);
    printf("The value of exp(x)=%.2lf",y);
}
void logarithm()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=log(x);
    printf("The value of log(x)=%.2lf",y);
}
void logarithm10()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=log10(x);
    printf("The value of log10(x)=%.2lf",y);
}
void quadric_equation()
{
    double a,b,c,d,x1,x2;
    printf("Enter value of a:");
    scanf("%lf",&a);
    printf("Enter value of b:");
    scanf("%lf",&b);
    printf("Enter value of c:");
    scanf("%lf",&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;
    printf("x1=%.2lf\n",x1);
    printf("x2=%.2lf\n",x2);
}
void round_fig()
{
    double x;
    printf("Enter the value of x :");
    scanf("%lf",&x);
    double y=round(x);
    printf("The value of is :%.2lf",y);
}
void celsi_faren()
{
    float C,F;
    printf("Enter Celcious Temp :");
    scanf("%f",&C);
    F=(C*1.8)+32;
    printf("Value in Farenheight Scale :%.2f\n",F);
}
void faren_celci()
{
    float C,F;
    printf("Enter Farenheight Temp :");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("Value in Centigrade Scale :%.2f\n",C);
}
void multiplication_table()
{
    int i,num;
    printf("Please Enter Any Number\n");
    scanf("%d",&num);
    for(i=1; i<=10 ; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
}
void deci_hexa()
{
    int number;
    printf("Enter Your decimal number :");
    scanf("%x",&number);
    printf("Your hexa decimal number is : %d",number);
}
void deci_octal()
{
    int number;
    printf("Enter Your Decimal number :");
    scanf("%d",&number);
    printf("Your Octal number is : %o",number);

}
void hexa_deci()
{
    int number;
    printf("Enter Your hexa decimal number :");
    scanf("%x",&number);
    printf("Your decimal number is : %d",number);

}
void hexa_octal()
{
    int number;
    printf("Enter Your hexa decimal number :");
    scanf("%x",&number);
    printf("Your octal number is : %o",number);
}
void octal_hexa()
{
    int number;
    printf("Enter Your octal number :");
    scanf("%o",&number);
    printf("Your hexa decimal number is : %x",number);
}
void octal_decimal()
{
    int number;
    printf("Enter Your octal number :");
    scanf("%o",&number);
    printf("Your decimal number is : %d",number);
}
void about_calculator()
{
    printf("Knowledge From Taken  (:(:(:\n");
    printf("C Language (Math library Function, Swith Statement, If Else Statement, Loop, Normal Math Knowlwgde, Temparature Conversion Basic Knowledge\n");
    printf("Our Calculator Can Not Calculate Calculus,Trunced Number, Floor Number, Complex Number, Pointing And Graphical Analicies Etc And So On\n\n");
    printf("On The Other Hand Our Calculator Can Addition, Subtraction, Multiplication, Division, Modulas, Power ,Squere, Quib ,Factorial Squreroot, Sine, Cos, Tan, Cot, Sec, Cosec, Exponential, Logarithm. 10 Base Logarithm, Quadric Equation, Read Temparature Conversion, Round Figure");
}
