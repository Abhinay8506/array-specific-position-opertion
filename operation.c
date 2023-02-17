#include<stdio.h>
#define max 20 
void insert(int [],int);
void delete(int [],int);
int main(){
    int arr[max];
    int n,ch;
    printf("enter no. of elements for insertion:");
    scanf("%d",&n);
    printf("enter elements for array\n");
    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }
    printf("[");
    for(int i=0;i<n;i++){

        printf("%d ",arr[i]);
    }
    printf("]\n");
    printf("Choose\n 1.insertion\n2.Deletion\n");
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            if(n<max){
             insert(arr,n);
             n++;
            }
            else{
                printf("overflow");
            }
            break;
             
        case 2:
            if(n>0){
                delete(arr,n);
                n--;
            }
            else{
                printf("underflow");
            }
            break;
        default:
              printf("invalid choice:");
              break;
    }
   
    return 0;
}
void insert(int a[],int n){
    int i,ele;
    printf("enter element for insertion:");
    scanf("%d",&ele);
    printf("\nenter position for insertion:");
    scanf("%d",&i);
    for(int j=n-1;j>=(i-1);j--){
        a[j+1]=a[j];
    }
    a[i-1]=ele;
    n++;
    printf("element inserted\n");
    printf("updated array as following\n");
    printf("[");
    for(int k=0;k<n;k++){

        printf("%d ",a[k]);
    }
    printf("]");
    
}
void delete(int a[],int n){
    int i;
    printf("enter elemnent position to be deleted:");
    scanf("%d",&i);
    for(int j=i-1;j<n--;j++){
        a[j]=a[j+1];
    }
    printf("updated array as following\n");
    printf("[");
    for(int k=0;k<n;k++){

        printf("%d ",a[k]);
    }
    printf("]");

}
