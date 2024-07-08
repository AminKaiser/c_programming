#include<stdio.h>

int main()
{
    int n,i,n1;
    FILE *file_number, *file_even, *file_odd;

    file_number = fopen("all.txt","w");
    file_even = fopen("even.txt","w");
    file_odd = fopen("odd.txt","w");

    printf("How many numbers do you want to store in file? :\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &n1);

        fprintf(file_number, "%d\n", n1);

        if(n1%2 == 0)
        {
            fprintf(file_even,"%d\n",n1);
        }
        else
        {
            fprintf(file_odd,"%d\n",n1);
        }
    }

    fclose(file_number);
    fclose(file_even);
    fclose(file_odd);

    printf("\n\n Data Successfully Written to the files \n");

    file_even = fopen("even.txt","r");
    printf("Even Numbers are: \n");

    while(fscanf(file_even, "%d", &n)!= EOF)
    {
        printf("%d\t", n);
    }

    file_odd = fopen("odd.txt","r");
    printf("\n\nOdd Numbers are: \n");

    while(fscanf(file_odd, "%d", &n)!= EOF)
    {
        printf("%d\t", n);
    }


    fclose(file_even);
    fclose(file_odd);

    return 0;
}

