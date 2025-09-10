#include <stdio.h>
int main() {
    int arr[100];
    int n = 0;
    int choice, i;
    int sum;
    float average;
    do {
        printf("\n- MENU -\n");
        printf("1. Input elements into the array\n");
        printf("2. Display all elements of the array\n");
        printf("3. Find the sum of all elements\n");
        printf("4. Find the average of all elements\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


switch (choice) {
 case 1:
printf("Enter the number of elements : ", arr);
 scanf("%d", &n);
 if (n > arr) {
  printf("Exceeded maximum size! Try again.\n");
  n = 0;
  break;
  }
printf("Enter %d elements:\n", n);
 for (i = 0; i < n; i++) {
printf("Element %d: ", i + 1);
 scanf("%d", &arr[i]);
 }
break;

  case 2:
     if (n == 0) {
     printf("Array is empty! Please input elements first.\n");
      break;
       }
     printf("Array elements are:\n");
     for (i = 0; i < n; i++) {
      printf("%d ", arr[i]);
      }
      printf("\n");
        break;

            case 3:
                if (n == 0) {
                    printf("Array is empty! Please input elements first.\n");
                    break;
                }
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum of all elements: %d\n", sum);
                break;

            case 4:
                if (n == 0) {
                    printf("Array is empty! Please input elements first.\n");
                    break;
                }
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                average = (float)sum / n;
                printf("Average of all elements: %.2f\n", average);
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}
