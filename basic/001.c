#include<stdio.h>

void main() {
    char first_name[30];
    char last_name[30];
    char birth_date[30];
    char mobile_number[30];

    printf("Enter your name [first name and last name]: ");
    scanf("%s", first_name);
    scanf("%s", last_name);

    printf("Enter your birthdate: ");
    scanf("%s", birth_date);

    printf("Enter your mobile number: ");
    scanf("%s", mobile_number);

    printf("Name          : %s %s\n", first_name, last_name);
    printf("Birth date    : %s\n", birth_date);
    printf("Mobile number : %s\n", mobile_number);

}