#include<stdio.h>

int main(){
int a, b,i;
int answer=0, quot=0;

printf("Enter first number you want to mulptiply: ");//5
scanf("%d",&a);

printf("Enter second number you want to mulptiply: ");//4
scanf("%d",&b);

for(i=0; i<b; i++){
answer = answer + a;
}
printf("The Multiplication of two numbers is %d\n", answer);

int ans2= a;
while(ans2>=b){
ans2=ans2-b;
quot++;
}
printf("The division of two numbers is %d", quot);

return 0;
}