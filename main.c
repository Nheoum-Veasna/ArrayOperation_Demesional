#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // define row and cols
    // created date type array[][] min max sum and average;
    // intial array and loop with for loop
    int r =10;
    int c =100;
    int array[10][100];
    int sum =0;
    float average;
    int max , min;
    // initial random number of array
    srand(time(NULL));
    for (int k=0;k<r;k++) {
        for (int j=0;j<c;j++) {
            array[k][j] =rand()%1000;
            sum += array[k][j];
            printf("%d\t",array[k][j]);
            // initial array min and max with first element is =0;
            if (k==0 && j==0) {
                max = array[k][j];
                min = array[k][j];
            }
            // find max of 2D array
            if(array[k][j] > max ) {
                max = array[k][j];
            }
            if(array[k][j] < min) {
                min = array[k][j];
            }
        }
    }
    average = sum / (r * c);
    int choice;

    do {
        printf("\t\n=====================================================\n");
        printf("1. Dispaly  Sum of number \n");
        printf("2. Dispaly Average of number \n");
        printf("3. Dispaly Miximum of number \n");
        printf("4. Dispaly Minimum of number \n");
        printf("5. Exit");
        printf("\t\n=====================================================\n");
        printf("Eneter choise:");
        scanf("%d",&choice);
        switch (choice) {
            case 1 : {
                printf("%d",sum);
                break;
            }
            case 2: {
                printf("%.2f",average);
                break;
            }
            case 3: {
                printf("%d",max);
                break;
            }
            case 4: {
                printf("%d",min);
                break;
            }
            case 5: {
                printf("Exit");
                break;
            }
            default: {
                printf("Invalid Input");
                break;
            }
        }
    }while (choice !=5);

    return 0;
}
