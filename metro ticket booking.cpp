#include <stdio.h>

int main() {
    int choice;
    int source, destination;
    int booked = 0;
    int stations = 5;
    int fare;

    do {
        printf("\nMETRO TICKET BOOKING\n1.View Stations\n2.Book Ticket\n3.Show Ticket\n4.Exit\n");
        printf("Enter ur choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("1.Station A\n2.Station B\n3.Station C\n4.Station D\n5.Station E\n");
                break;

            case 2:
                printf("Enter source (1-5): ");
                scanf("%d", &source);
                printf("Enter destination (1-5): ");
                scanf("%d", &destination);

                if(source < 1 || source > 5 || destination < 1 || destination > 5) {
                    printf("Invalid station\n");
                }
                else if(source == destination) {
                    printf("Same station not allowed\n");
                }
                else {
                    int distance = source > destination ? source - destination : destination - source;
                    fare = distance * 10;
                    booked = 1;
                    printf("Ticket booked\n");
                }
                break;

            case 3:
                if(booked == 0) {
                    printf("No ticket booked\n");
                } else {
                    printf("Source: %d\nDestination: %d\nFare: %d\n", source, destination, fare);
                }
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}
