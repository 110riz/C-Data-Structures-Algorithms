#include<stdio.h>
#include<conio.h>
int main(){
    int a[15]={10,20,30,40,50,100,120,200,150,250,300,350,400,500,600};
    int user,i,p=0;
    for(i=0; i<15; i++){
        printf("%d ",a[i]);
    }
    printf("\nEnter a Number that you want to Serch? ");
    scanf("%d",&user);

    for(i=0; i<15; i++){
        if(a[i]==user){
            printf("Number is found");
            p++;
            break;
        }
    }
    if(p==0){
        printf("Number is Not found!!!");
    }
}