#include <stdio.h>

//main
int main(void)
{
    userComputerChoice();
    return 0;
}

void userComputerChoice()
{
    int userGenerated;

    printf("I will be demonstrating the fibonacci sequence in C!\n",
    "The sequence can either start at 0, or any number of your choosing!");
    printf("Either enter 0 or enter a number and the sequence will display 15 iterations in Fibonacci!\n\n");
    scanf("%d", &userGenerated);
    
    if(userGenerated == 0){
        original();
    } else if(userGenerated > 0 && userGenerated <= 1000){
        computerGenerated(userGenerated);
    } else{
        printf("\nPlease enter a number 0 through 1000!\n");
        //recursively calls again based on user error
        userComputerChoice();
    }
}

//the origninal sequence starting at zero
void original()
{
    int t1 = 0, 
    t2 = 1, 
    sum,
    i;

    for(i = 0; i < 15; i++)
    {
        printf("%d, ", t1);
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }

    return 0;
}

//the same sequence but based on user input starting point < 1000
void computerGenerated(int num)
{
    int t1 = num,
    t2 = t1 + 1,
    sum,
    i;

    for(i = 0; i < 15; i++)
    {
        printf("%d, ", t1);
        sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }

    return 0;
}
