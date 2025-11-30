// Q59: Count even and odd numbers in an array.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        int a = i + 1 ;
        printf("Enter %d element : ",a);
        scanf("%d",&arr[i]);
    }


    int even = 0,odd = 0; // even and odd 

    for(int i = 0 ; i < n ; i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even = %d\nOdd = %d",even,odd);
    return 0;
}