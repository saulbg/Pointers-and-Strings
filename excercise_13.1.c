#include <stdio.h>
#include <string.h>

// Exercise 13-1: Write a program that uses pointers to set each element of an array to zero.
#define arrnumb 5 // defining the size of the array

int main()
{
  int numbers[arrnumb]={4,6,8,10,11}; //asigning the values in the array
  int *numbers_ptr; // creating the pointer of the array numbers
  numbers_ptr= &numbers[0]; // pointing the variable pointer to our array
  // This loop is to put all the values inside the array in zero, we are putting them in zero using our pointer.
  int i,j;
  //Showing the original values of the array
  for(i=0; i<arrnumb; i++)
  {
  printf("The original number [%i] is: %i \n",i, numbers[i]);
  }
  printf("\n");
  // Loop for assing the values of the array into zero
  for(numbers_ptr; numbers_ptr< &numbers[arrnumb]; numbers_ptr++)
  {
    *numbers_ptr=0; //replacing the values by zero
  }
  // This loop is to print the array with all the changes
  for(j=0; j< arrnumb; j++)
  {
    printf("The number [%i] now is: %i \n",j,numbers[j]);
  }
return 0;
}

