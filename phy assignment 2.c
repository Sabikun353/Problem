#include<stdio.h>
#include<math.h>
int main()
{
    int m1=3,m2=2;
    double w1=530,w2=700,Theta1=65,Theta2,d;
    Theta2=(m2*w2)/(m1*w1);
    Theta2*=sin(Theta1*(3.14/180));
    Theta2=asin(Theta2)*57.2958;
    printf("At angle of %lf Degrees the second-order bright spot for red light",Theta2);
}
