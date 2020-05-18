#include<stdio.h>
int main(){
    int arr[10];
    int n, i, j, index, value;
    i= 0;
    while(scanf("%d",&arr[i])!=EOF){
        i++;
        if(i>9){
            printf("Array Overflow");
            break;
        }
    }
    for(j=0; j<i; j++){
        printf("%d ",arr[j]);
    }

    arr[10] = {1, 2, 3, 4, 5, 6, 7};








    //int arr[10] = {2, 3 , 4, 7, 9, 3, 4, 3, 6, 1};
    /*
    int arr[10];
    arr[0] = 4;
    arr[1] = 3;
    arr[2] = 5;
    */


/*
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Output\n");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    */
/*
    do{

    }while();

    while(){

    }

    for(){

    }

*/


    return 0;
}








/*
# Create
# Insert
# Update
# Delete
# Access

*/
