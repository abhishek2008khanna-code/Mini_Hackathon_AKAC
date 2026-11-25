// ATM Simulation using if-else, switch-case and do-while loop

#include <stdio.h>

int main()
{
    int choice = 0;
    double balance = 5000.00, amount;

    printf("\n================================");
    printf("\n          WELCOME TO ATM");
    printf("\n================================\n");

    do
    {
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            // Clear invalid input from the input buffer.
            while (getchar() != '\n');
            printf("\nInvalid input! Please enter a number from 1 to 4.\n");
            choice = 0;
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("\nYour Current Balance = Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ");

                if (scanf("%lf", &amount) != 1)
                {
                    while (getchar() != '\n');
                    printf("\nInvalid input! Please enter a numeric amount.\n");
                    break;
                }

                if (amount > 0)
                {
                    balance += amount;

                    printf("\n========== TRANSACTION RECEIPT ==========");
                    printf("\nTransaction Type : Deposit");
                    printf("\nAmount Deposited : Rs. %.2f", amount);
                    printf("\nUpdated Balance  : Rs. %.2f", balance);
                    printf("\n=========================================\n");
                }
                else
                {
                    printf("\nInvalid amount! Please enter a positive amount.\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ");

                if (scanf("%lf", &amount) != 1)
                {
                    while (getchar() != '\n');
                    printf("\nInvalid input! Please enter a numeric amount.\n");
                    break;
                }

                if (amount > 0 && amount <= balance)
                {
                    balance -= amount;

                    printf("\n========== TRANSACTION RECEIPT ==========");
                    printf("\nTransaction Type : Withdrawal");
                    printf("\nAmount Withdrawn : Rs. %.2f", amount);
                    printf("\nRemaining Balance: Rs. %.2f", balance);
                    printf("\n=========================================\n");
                }
                else
                {
                    printf("\nInvalid amount or insufficient balance!\n");
                }
                break;

            case 4:
                printf("\nThank you for using our ATM!");
                printf("\nPlease visit again.\n");
                break;

            default:
                printf("\nInvalid choice! Please select between 1 and 4.\n");
        }

    } while (choice != 4);

    return 0;
}
