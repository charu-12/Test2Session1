#include<stdio.h>
int input_number()
{
  int n;
  printf("enter number:");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for(int i=2;i<n;i++)
    {
      if(n%i!=0)
      {
        return 0;
      }
    return 1; 
    }
}
void output(int n,int is_prime)
{
  {
   if(is prime==0)
   printf("%d is a prime number\n",n);
  }
  else
  {
    printf("%d is not a prime number\n",n);
  }
}
int main()
{
  int n, is prime;
  n=input_number();
  is prime=is_prime(n);
  output(n,is prime);
  return 0;
}