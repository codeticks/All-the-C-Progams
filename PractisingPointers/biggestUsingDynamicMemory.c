#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num;
    float* data;

    printf("How many elements u want to enter:: ");
    scanf("%d",&num);

    data = (float*)calloc(num,sizeof(float));

    if(data == NULL)
    {
        printf("Error!!! Unable to allocate memory.");
        exit(0);
    }

    for(i=0; i<=num; i++)
    {
        printf("\nEnter Number %d :: ", i+1);
        scanf("%f", data + 1);
    }

    for(i=1; i<num; ++i)
    {
        if(*data < *(data + i))
            *data = *(data + i);
    }

    printf("\nLargest element = %.2f\n",*data);
    return 0;

}
