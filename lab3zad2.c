#include<stdio.h>

int main(){
int a,b,c,d,suma;
int wykladnikA=1, wykladnikB=1, wykladnikC=1;
int potegaA=1, potegaB=1, potegaC=1;
printf("podaj a, b,c,d\n");
scanf(" %d", &a);
scanf(" %d", &b);
scanf(" %d", &c);
scanf(" %d", &d);

do{
potegaA=potegaA*a;
wykladnikA++;
}while(wykladnikA<=d);
printf("a do d= %d \n", potegaA);

do{ 
potegaB=potegaB*b;
wykladnikB++;
}while(wykladnikB<=d);
printf("b do d= %d\n", potegaB);


do{ 
potegaC=potegaC*c;
wykladnikC++;
}while(wykladnikC<=d);
printf("c do d= %d\n", potegaC);


suma=potegaA+potegaB+potegaC;
printf("suma poteg wynosi %d\n",suma);

return 0;
}
