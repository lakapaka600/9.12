#include <stdio.h>
int mcm(int num1,int num2,int mcm1,int mcm2) {
    mcm1=num1;
    mcm2=num2;
    while(num1!=num2){
        if(num1<num2) {
            num1=mcm1+num1;
        }
        else {
            num2=mcm2+num2;
        }
    }
return num1;

}




int main(void){
    int num1,num2;
    printf("inserisci il primo numero\n");
    scanf("%d",&num1);
    printf("inserisci il secondo numero\n");
    scanf("%d",&num2);

    printf("mcm risulta:%d",mcm(num1,num2,1,1));

    return 0;
}
