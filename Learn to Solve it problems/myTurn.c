#include <stdio.h>
int main()
{
    int celsius, fahrenheit;

    for(fahrenheit = 0; fahrenheit <= 300; fahrenheit+=20)
    {
    celsius = 5*(fahrenheit-32)/9;
    printf("%d\t %d\n",fahrenheit,celsius);  
    }
    
return 0;
}

//this was just a sample program made for fund, nothing more nothing less.
