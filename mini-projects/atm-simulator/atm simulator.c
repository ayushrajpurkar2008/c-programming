#include<stdio.h>

int main() {
    int balance, n, deposit, withdraw;

    balance = 10000;

    printf("press 1 to check balance\n");
    printf("press 2 to deposit money\n");
    printf("press 3 to withdraw money\n");
    printf("press 4 to exit\n");

    scanf("%d", &n);

    switch (n)
    {
    case 1:
          printf("your balance is: %d", balance);
          break;
         
    case 2:
          printf("enter the amount to be deposited: ");
          scanf("%d", &deposit);

          if (deposit <= 0)     //same here first write of invalid//
          {
            printf("invalid amount");
          }
          else
          {
            balance += deposit;
            printf("your amount of RS.%d has been deposited!\n", deposit);
            printf("your current balance is: %d", balance);
            
          }
          break;
    
    case 3:
          printf("Enter the amount to be withdraw: ");
          scanf("%d", &withdraw);

          if (withdraw <= 0)  //this is first coz if -500 then it would have shown low balance which isnt right//
          {
            printf("INVALID AMOUNT: This amount cannot be withdrawn");
          }
          else if (withdraw > balance)
          {
            printf("LOW BALANCE: This amount cannot be withdrawn");
          }
          else
          {
            printf("you have withdrawn RS.%d from your account\nYour current balance is: RS.%d", withdraw, balance  - withdraw);      
          } 
          break;

    case 4:
          printf("Thank you!");
          break;
    
    default:
          printf("invalid number!");
          break;
    }

   return 0;
}
