#include <stdio.h>

void space_line(char *input_string)
{
int i=0;
while(input_string[i]!='\0')
{
    if(input_string[i]==' ')
    printf("\n");
    else
    printf("%c", input_string[i]);
    i+=1;
}
printf("\n");
}
void sort_print(int *input_array, int input_size)
{
printf("Before: ");

for(int i=0; i<input_size; i++)

printf("%d ", input_array[i]);

printf("\n");

for(int i=0; i<input_size-1; i++)
{

    for(int j=0; j<input_size-1-i; j++)

    {

      if(input_array[j]>input_array[j+1])
      {

        int temp=input_array[j];

        input_array[j]=input_array[j+1];

        input_array[j+1]=temp;
      }
    }
}
printf("After: ");

for(int i=0; i<input_size; i++)
printf("%d ", input_array[i]);
printf("\n");
}

int main(void)

{
space_line("This is a test how was your day today sir?");
int input_array[]={26, 83, 17, 16, 91,21,100,45,56,79,102};
sort_print(input_array, 11);
return 0;
}
