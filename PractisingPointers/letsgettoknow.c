#include <stdio.h>
#include <stdlib.h>

int main()
{

int i,num;
float* data;

printf("Enter the no of elements :: ");
scanf("%d",&num);

data = (float*) calloc(num,sizeof(float));

if(data == NULL)
{
    printf("\nError!!!, Memory not allocated.");
    exit(0);
}

for(i=0; i<num; ++i)
{
    printf("Enter element %d :: ", i + 1);
    scanf("%f", data + i);
}

for(i=1; i<num; ++i)


}