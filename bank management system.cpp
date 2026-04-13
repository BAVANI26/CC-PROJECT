#include <stdio.h>

int main() {
    int choice;
    float balance = 0.0, amount;

    do {
        printf("\n--- BANK MENU ---\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0) {
                    balance += amount;
                    printf("Deposited successfully!\n");
                } else {
                    printf("Invalid amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= 0) {
                    printf("Invalid amount!\n");
                }
                else if(amount > balance) {
                    printf("Insufficient balance!\n");
                }
                else {
                    balance -= amount;
                    printf("Withdrawal successful!\n");
                }
                break;

            case 3:
                printf("Current Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you! Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 4);

    return 0;
}
