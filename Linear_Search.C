#include<stdio.h>
#include<conio.h>
int main(){
    int a[10]={20,10,5,12,30,15,25,11,8,6};
    int i,j,temp;
    printf("Before Sorting program:\n");
    for(i=0; i<10; i++){
        printf("%d ",a[i]);
    }

    for(i=0; i<10; i++){
    for(j=0; j<10; j++){
            if(a[j]>a[j+1]){
            temp = a[j+1];
            a[j+1] = a[j];
            a[j]= temp;
        }
    }
    }
    printf("\nAfter Sorting program:\n");
    for(i=0; i<10; i++){
        printf("%d ",a[i]);
    }
}
