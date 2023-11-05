#include<stdio.h>
#include<math.h>
int main()
{
    int i,j=0,m;
    double w,a[3],Theta[3];
    printf("Wavelength of light (in Nanometers) is: ");
    scanf("%lf",&w);
    printf("Order of Diffraction is: ");
    scanf("%d",&m);
    for(i=0;i<3;i++)
    {
        printf("Width of the Slit No-%d (in Micrometers) is: ",i+1);
        scanf("%lf",&a[i]);
    }
    if (w>=380&&w<=750)
    {
        double min=a[0];
        for (int i = 1; i < 3; i++)
        {
            if (min>a[i])
            {
                min=a[i];
            }
        }
        for(i=0;i<3;i++)
        {
            Theta[j]=m *(w*pow(10,-9))/(a[i]*pow(10,-6));
            Theta[j]=asin(Theta[j])*57.2958;
            j++;
        }
    int SI=0;
    double max=Theta[0];
    for (int i = 1; i < 3; i++)
     {
        if (max<Theta[i])
        {
            max=Theta[i];
            SI=i;
        }
    }
    printf("Diffraction angles (in Degrees):\n");
    for (i=0;i<3;i++)
    {
        printf("Theta for slit %d: %lf Degrees\n",i+1,Theta[i]);
    }
    printf("Slit %d which is %.2lf Micrometers bends the light more.\n",SI+1,min);
    }
    else
    {
        printf("Out of the range. Please enter a valid number.\n");
    }
    return 0;
}


