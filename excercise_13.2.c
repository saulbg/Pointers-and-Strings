#include <stdio.h>
#include <string.h>

// Exercise 13-2: Write a function that takes a single string as its argument and returns a pointer to the first nonwhite character

// Function with a pointer to take the value of the string
char *first_nonwhite(char *string)
{
int i;
// Loop to check each character in the string
for(i=0;i<sizeof(string);i++)
  {
  // Check if it is a space blank
    if (string[i] != ' ')
    {
      return &string[i]; // Give the value that is nonwhite space
    }
  }
return &string[i]; // Returns the first value nonwhite
}

int main()
{
char word[] = "   JUAN"; // Writing in the array
printf("The first nonwhite character is: %c\n",*first_nonwhite(word)); // Printing and calling the function
return 0;
}


