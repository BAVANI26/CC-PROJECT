#include <stdio.h>

int main() {
    int choice, n = 0, i;
    float marks[100], sum = 0, avg, max;

    do {
        printf("\n1.Add Marks\n2.Display Marks\n3.Average\n4.Highest\n5.Exit\n");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter number of students: ");
                scanf("%d", &n);
                for(i = 0; i < n; i++) {
                    scanf("%f", &marks[i]);
                }
                break;

            case 2:
                if(n == 0) {
                    printf("No data\n");
                } else {
                    for(i = 0; i < n; i++)
                        printf("%.2f ", marks[i]);
                }
                break;

            case 3:
                if(n == 0) {
                    printf("No data\n");
                } else {
                    sum = 0;
                    for(i = 0; i < n; i++)
                        sum += marks[i];
                    avg = sum / n;
                    printf("Average = %.2f\n", avg);
                }
                break;

            case 4:
                if(n == 0) {
                    printf("No data\n");
                } else {
                    max = marks[0];
                    for(i = 1; i < n; i++) {
                        if(marks[i] > max)
                            max = marks[i];
                    }
                    printf("Highest = %.2f\n", max);
                }
                break;

            case 5:
                printf("Exit\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}
