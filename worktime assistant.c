#include <stdio.h>

int main() {
    int n, p, hours, hours1, min, min1;
    int hour1, hour2, hour3, hour4;

    printf("If you are a commuter, type: 1\n");
    printf("If you simply need to classify your time, type: 2\n");
    scanf("%d", &n);

    switch (n)
    {
    case 2:
        printf("Enter your current time.\n");

        printf("Hours: ");
        scanf("%d", &hours);

        printf("Min: ");
        scanf("%d", &min);

        if (hours >= 0 && hours <= 23 && min >= 0 && min <= 59)
        {
            printf("Valid time.\n");

            if (hours >= 5 && hours <= 11)
            {
                printf("Morning");
            }
            else if (hours >= 12 && hours <= 16)
            {
                printf("Afternoon");
            }
            else if (hours >= 17 && hours <= 20)
            {
                printf("Evening");
            }
            else
            {
                printf("Night");
            }
        }
        else
        {
            printf("Invalid time.");
        }

        break;


    case 1:
        printf("State your work time (24hr format):\n");

        printf("From: ");
        scanf("%d", &hour1);

        printf("To: ");
        scanf("%d", &hour2);

        /* Validate work hours */
        if (hour1 < 0 || hour1 > 23 ||
            hour2 < 0 || hour2 > 23 ||
            hour1 >= hour2)
        {
            printf("Invalid work timing.");
            break;
        }

        printf("State your current time:\n");

        printf("Hours: ");
        scanf("%d", &hours);

        printf("Mins: ");
        scanf("%d", &min);

        /* Validate current time */
        if (hours >= 0 && hours <= 23 && min >= 0 && min <= 59)
        {
            printf("Valid time.\n");

            if (hours < hour1)
            {
                printf("You have not started working yet.");
            }
            else if ((hours >= hour1 && hours < hour2) ||
                     (hours == hour2 && min == 0))
            {
                printf("You are already at workplace.\n");

                printf("If there is a break time, press 1.\n");
                printf("If not, type 2 to find out how much time is remaining to clock out.\n");
                scanf("%d", &p);

                switch (p)
                {
                case 1:
                    printf("State the break timing.\n");

                    printf("From: ");
                    scanf("%d", &hour3);

                    printf("To: ");
                    scanf("%d", &hour4);

                    if (hour3 > hour1 &&
                        hour3 < hour2 &&
                        hour4 > hour3 &&
                        hour4 < hour2 &&
                        (hour4 - hour3) >= 2)
                    {
                        printf("Valid break time.\n");

                        if (hours < hour3)
                        {
                            printf("There is some time left before the break starts.");
                        }
                        else if (hours == hour3 && min == 0)
                        {
                            printf("Take a break! The break has just started.");
                        }
                        else if ((hours == hour3 && min > 0) ||
                                 (hours > hour3 && hours < hour4))
                        {
                            printf("You are in the middle of your break.");
                        }
                        else if (hours == hour4 && min == 0)
                        {
                            printf("Your break has ended. Get back to work!");
                        }
                        else
                        {
                            printf("Your break is already over.");
                        }
                    }
                    else
                    {
                        printf("Invalid break time.");
                    }

                    break;


                case 2:
                    printf("State your current time:\n");

                    printf("Hours: ");
                    scanf("%d", &hours1);

                    printf("Mins (0-59): ");
                    scanf("%d", &min1);

                    if (hours1 >= 0 && hours1 <= 23 &&
                        min1 >= 0 && min1 <= 59)
                    {
                        if (hours1 < hour1)
                        {
                            printf("You have not started working yet.");
                        }
                        else if (hours1 > hour2 ||
                                 (hours1 == hour2 && min1 > 0))
                        {
                            printf("You can clock out. Your work time is already over.");
                        }
                        else if (hours1 == hour2 && min1 == 0)
                        {
                            printf("You can clock out!");
                        }
                        else if (min1 == 0)
                        {
                            printf("You have remaining %d hours left to clock out!",
                                   hour2 - hours1);
                        }
                        else
                        {
                            printf("You have remaining %d hours and %d mins left to clock out!",
                                   (hour2 - hours1) - 1,
                                   60 - min1);
                        }
                    }
                    else
                    {
                        printf("Invalid current time.");
                    }

                    break;


                default:
                    printf("Invalid number!");
                    break;
                }
            }
            else
            {
                printf("Your work time has already ended.");
            }
        }
        else
        {
            printf("Invalid time.");
        }

        break;


    default:
        printf("Invalid number!");
        break;
    }

    return 0;
}