#include<stdio.h>
int lcm(int n1,int n2)
{
    static int n=0;
    n +=n2;
    if(n%n1==0)return n;
        else return lcm(n1,n2);
}
int main()
{
    int num1=12,num2=30,result;
    printf("Enter the two numbers\n");
    if(num1<num2){
    result=lcm(num1,num2);}
    else{
        result=lcm(num2,num1);
    }
    printf("The LCM of %d and %d is %d",num1,num2,result);
    return 0;
}
