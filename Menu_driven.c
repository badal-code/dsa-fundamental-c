#include<stdio.h>
// DSA Fundamentals - C Practice

int main(){
    int arr[100], evenSum, oddSum, isPrime, primeSum, n, choice;
    printf("Enter the no element of array:\n");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array elements are:\n");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }

    do
    {
        printf("\n\nMenu:\n");
        printf("1. Sum of even numbers\n");
        printf("2. Sum of odd numbers\n");
        printf("3. Sum of prime numbers\n");
        printf("4. Exit\n");
        printf("Enter your choice:\n");
        
        scanf("%d", &choice);

        switch(choice){
            case 1:
                evenSum = 0;
                for(int i=0; i<n; i++){
                    if(arr[i] % 2 == 0){
                        evenSum += arr[i];
                    }
                }
                printf("Sum of even numbers: %d\n", evenSum);
                break;

            case 2:
                oddSum = 0;
                for(int i=0; i<n; i++){
                    if(arr[i] % 2 != 0){
                        oddSum += arr[i];
                    }
                }
                printf("Sum of odd numbers: %d\n", oddSum);
                break;

            case 3:
                primeSum = 0;
                for(int i=0; i<n; i++){
                    isPrime = 1;
                    if(arr[i] <= 1){
                        isPrime = 0;
                    } else {
                        for(int j=2; j*j <= arr[i]; j++){
                            if(arr[i] % j == 0){
                                isPrime = 0;
                                break;
                            }
                        }
                    }
                    if(isPrime){
                        primeSum += arr[i];
                    }
                }
                printf("Sum of prime numbers: %d\n", primeSum);
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }  while(choice != 4);

   return 0;
}