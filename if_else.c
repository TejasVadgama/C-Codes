#include<stdio.h>

int main() {
    int i = 1; //Here initalized the I Variable.

    if (i == 1) // Check Condition Value if I True then Print inner Printf Function.
    {
        printf("i Value is: %d\n",i);
    }else if (i == 0) //if condition false then The 2nd Is elif Condition Check If true then execute that condition.
    {
     printf("i value is: %d\n",i);
    }else
    {
        printf("i Has Undefined Value."); // if i false the condition then print else Statement.
    }
    return 0;
}