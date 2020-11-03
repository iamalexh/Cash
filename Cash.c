#include <cs50.h>
#include <stdio.h>
#include <math.h>


int main(void)
{
    float dollars;

    do
    {
        
        dollars = get_float("Enter the amount: ");
       
    }
    while (dollars < 0);
    
    int cents = round(dollars * 100);
    
//divide cents by 25 & pass remainder
    int i = cents / 25;
    int j = cents % 25;
   
//divide cents by 10 & pass remainder
   
    int k = j / 10;
    int m = j % 10;
   
//divide cents by 5 and pass remainder 
   
    int n = m / 5;
    int p = m % 5;
   
   
//divide cents by 1
   
    int q = p / 1;
   
//add totals and pass as output
   
    int totalCoins = i + k + n + q;
    printf("%i\n", totalCoins);
   
}
