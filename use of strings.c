#include<stdio.h>
int main()
{
    char fname[20], mname[20], lname[20];
    printf("Enter full name in this format (first middle last): ");
    scanf("%s %s %s", fname, mname, lname);
    printf("Abbreviated name is %c. %c. %c\n", fname[0], mname[0], lname[0]);
    return 0;
}
