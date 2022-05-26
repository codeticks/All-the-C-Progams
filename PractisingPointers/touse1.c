/*  C Program to Find Largest Number Using Dynamic Memory Allocation  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num; //declaring two integer variables
    float *data; //declaring one float type pointer variable.

    printf("How many elements u want to enter :: ");
    scanf("%d", &num); //assining value to the address of num.

    // Allocates the memory for 'num' elements.
    data = (float*) calloc(num, sizeof(float)); //allocate memory for vars and store the pointer to data
    printf("value at *data %p", *data);
    if(data == NULL) //check condition.
    {
        printf("\nError!!! memory not allocated.");
        exit(0);// if unable to allocate exit.
        //if unable to allocate program ends here.
        /*---------------------------------------------*/
    }

    /*
    otherwise
    */


    // Stores the number entered by the user.
    for(i = 0; i < num; ++i)//i will go from 0 to less than num. it will start with 0 then move up.
    {
        printf("value at *data %f", *data);
       printf("\nEnter Number %d :: ", i + 1);//printing the value of i, in first run it will print 1, since 0+1= 1;
       scanf("%f", data + i); //here we are passing the address of the array data[i]
    }

    // Loop to store largest number at address data
    for(i = 1; i < num; ++i)
    {
       // Change < to > if you want to find the smallest number
       printf("value at *data %f\n", *data);
       if(*data < *(data + i))//here if data[0] is smaller than data[i], then data[0] = data[i]
           *data = *(data + i);
    }

    printf("\nLargest element = %.2f\n", *data);

    return 0;hp
p