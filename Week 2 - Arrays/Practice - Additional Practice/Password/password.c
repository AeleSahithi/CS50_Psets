// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and "
               "symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    // Creating Boolean Values
    bool lower_case = false;
    bool upper_case = false;
    bool number = false;
    bool symbol = false;

    // Iterating through Password Checking for Criteria
    for (int i = 0, strln = strlen(password); i < strln; i++)
    {
        if (isupper(password[i]))
        {
            upper_case = true;
        }
        else if (islower(password[i]))
        {
            lower_case = true;
        }
        else if (isdigit(password[i]))
        {
            number = true;
        }
        else
        {
            symbol = true;
        }
    }

    // Checking if all criterion is met
    if (upper_case == true && lower_case == true && number == true && symbol == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
