#include<stdio.h>
void array_print(int x[], int size);
int* array();
int main(){
    int *p, i;
    //p = array();
    //printf("Main\n");
    printf("%d\n",array());
    /*printf("%d",p);
    for(i=0; i<5; i++){
        printf("%d", *(p+i));
    }*/
    //array_print(p, 5);
    return 0;
}
int* array(){
    printf("Start of Function\n");
    int a[10], i = 0;
    while(scanf("%d",&a[i])==1){
        i++;
    }
    array_print(a, i);
    printf("%d\n",a);
    printf("End of Function\n");
    return a;
}
void array_print(int x[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d ", x[i]);
    }
    printf("\n");
}
