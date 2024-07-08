#include<stdio.h>
int main()
{
    FILE *file;
    int n;
    file = fopen("numbers.txt","w");

    printf("Numbers: \n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        fprintf(file,"%d\n",i);
    }
    printf("Data has been written successfully \n\n");
    fclose(file);


    file = fopen("numbers.txt","r");

    printf("Inputted Data : \n");
    while(fscanf(file,"%d",&n)!=EOF)
    {
        printf("%d \t", n);
    }
    fclose(file);
    return 0;
}
