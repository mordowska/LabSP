#include<stdio.h>

int main(){
int a,b, tmp;
printf("podaj 2 liczby a i b, b rozne od 0\n");
scanf(" %d", &a);
scanf(" %d", &b);
while(a>=b){
tmp=a-b;
a=tmp;

}

if(a==0){
printf("podzielna\n");
}

else printf("niepodzielna bo zostala reszta %d\n",a);
return 0;
}
