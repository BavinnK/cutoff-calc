#include <stdio.h>
#include <stdbool.h>
#define pi 3.1415
#include <ctype.h>
#include <string.h>
void RcCalc(double *R,double *C,double *CF){
    
    char choice;
    printf("type H for High-Pass or type L for Low-Pass:\n");
    scanf(" %c",&choice);
    choice=toupper(choice);
    if (choice=='H' || choice=='L')
    {
        printf("enter the resistance of resistor in ohms : \n");
        scanf(" %lf",R);
        printf("enter the capacitance of the capacitor in microfarads uF:\n");
        scanf(" %lf",C);

        
        *CF= 1 / (*R * *C * 1e-6 * 2 * pi);
        printf("the cut-off freqency of the  circuit is -> %lf\n",*CF);
    }
    else{
        printf("invalid choice choose H or L");
    }


}
void RlCalc(double *R,double *L,double *CF){
    
    char choice;
    scanf("%c",&choice);
    choice=toupper(choice);
    if (choice=='H' || choice=='L')
    {
        printf("enter the resistance of resistor in ohms : \n");
        scanf(" %lf",R);
        printf("enter the inductance of the inductor in millihenries mH :\n");
        scanf(" %lf",L);

        *CF= *R / (2 * pi * *L * 1e-3);
        printf("the cut-off freqency of the  circuit is -> %lf",*CF);

}
}
int main(){
    char Choice[10];
    char CH;
    double R,C,L,CF;
    printf("Welcome to Cut-Off freqency calculator for one pole RL and RC circuits \n Do you want to continue (N/Y)");
    scanf(" %c",&CH);
    CH=toupper(CH);
    if (CH=='Y')
    {
        
    
    
    while(true){
     printf("you want to calculate for RC or RL choose:");
    
        scanf(" %s",&Choice);
        for (int i=0;Choice[i];i++)  {
        Choice[i]=toupper(Choice[i]);}
        if (strcmp(Choice, "RC")==0)
        {
            RcCalc(&R,&C,&CF);
        }
    
        else if (strcmp(Choice, "RL")==0)
        {
             RlCalc(&R,&L,&CF);
        }
        else{
            printf("invalid choice");
        }
     printf("Do you want to continue (N/Y):");
     scanf(" %c",&CH);
     CH=toupper(CH);
     if (CH=='N')
     {
        break;
     }
     
    }
    }
    
    else{
        printf("Thanks for using the calculator :) ");
    }
}