#include <stdio.h> // Main Library.

int main()
{
    int Num[] = {25, 50, 75, 100}; //insert Number.

    prinft("%d",Num); //print Array.
    printf("%d", Num[0]); //Print 0 Index.

    Num[0] = 20; //change 0 index with 20.

    printf("%d",Num); //change Array.
    printf("%d",sizeof(Num)); //Print Size Array.

    return 0;
}