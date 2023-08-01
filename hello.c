#include <stdio.h>

int main(){
    int age,i;
    printf("Hello world!\n");
    printf("My name is Nont.\n");
    printf("Enter age : ");
    scanf("%d",&age);
    printf("Your age is %d\n",age);
    printf("Now Loading...");
    printf("Just you wait.....");
    for(i=0;i<=5;i++){
        printf("%d\n",age+1);
        age++;
    }
    while(1){
        printf("%d",age);
    }
    return 0;
}