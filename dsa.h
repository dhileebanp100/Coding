#include<stdio.h>
#include<stdlib.h>
// functions in this file are
// 1. arr_input
// 2. arr_output
// 3. insert_First
// 4. insert_Last
// 5. insert_At
// 6. delete_First
// 7. delete_Last
// 8. delete_At
// 9. search
// 10. sort
// 11. reverse
// 12. merge
// 13. find_max
// 14. find_min
// 15. find_sum
// 16. find_avg
// end
void arr_input(int arr[], int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void arr_output(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
void insert_First(int arr[],int *n,int *x){
    for(int i=*n;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=*x;
    *n=*n+1;
}
void insert_Last(int arr[],int *n,int *x){
    arr[*n]=*x;
    *n=*n+1;
}
void insert_At(int arr[],int *n,int *x,int pos){
    for(int i=*n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=*x;
    *n=*n+1;
}
void delete_First(int arr[],int *n){
    for(int i=0;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    *n=*n-1;
}
void delete_Last(int arr[],int *n){
    *n=*n-1;
}
void delete_At(int arr[],int *n,int pos){
    for(int i=pos;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    *n=*n-1;
}
void search(int arr[],int n,int *x){
    for(int i=0;i<n;i++){
        if(arr[i]==*x){
            printf("Element found at position %d\n",i);
            return;
        }
    }
    printf("Element not found\n");
}
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}   
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
void merge(int arr1[],int n1,int arr2[],int n2,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}
void find_max(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum element is %d\n",max);
}
void find_min(int arr[],int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Minimum element is %d\n",min);
}
void find_sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Sum of elements is %d\n",sum);
}
void find_avg(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Average of elements is %f\n",(float)sum/n);
}