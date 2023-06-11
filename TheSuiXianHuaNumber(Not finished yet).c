#include <stdio.h>
#define MAX 10
long n_power(int n, long number);
int verify(long numtobeveri, int digits);

int main(void) 
{
  int Number_of_digits;
  int Eilgible_numbers[MAX];

Start:
  if (scanf("%d", &Number_of_digits) && Number_of_digits < 3 && Number_of_digits > 7) 
  {
    //Report Error and Restart
    printf("Please input a number between 3 and 7(3<=number<=7)");
    goto Start;
  }

  long MaxNumber = n_power(Number_of_digits + 1, 10);
  long LowestNumber = n_power(Number_of_digits, 10);

  for(long Number_ToBeVerified = LowestNumber; Number_ToBeVerified < MaxNumber; Number_ToBeVerified++)
  {
    int n1 = 0;
    if (verify(Number_ToBeVerified, Number_of_digits)) 
    {
    Eilgible_numbers[n1] = Number_ToBeVerified;
    n1++;
    }
  }
}

long n_power(int n, long number) 
{
  int temp = number;

  for(int count = 1; count <= number; count++) 
    number *= temp;

  return number;
}

int verify(long numtobeveri, int digits)
{
  char numbers[digits + 1];
  sprintf(numbers, "%l", numtobeveri);
  for(int count = 1; count < digits; count++)
  {
    
  }

}


