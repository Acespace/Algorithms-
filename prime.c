
#include <stdio.h>

int prime(int user_num);

int main()
{

int user_num, answer;

printf("Enter a number: ");
scanf("%d", &user_num);

answer = prime(user_num);

if (answer == 0)
   printf("%d is not a prime number\n", user_num);
else
   printf("%d is a prime number\n", user_num);
   
return 0;

}
int prime(int test_number)
{

for (int i = 2; i <= test_number/2; i++)
{
   if (test_number % i  == 0)
        return 0;
}
