#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    FILE * fp;
    char* line = new char[100];
    size_t len = 0;//am sa schimb cu int sa vad ce da;
    ssize_t read;
    int a=0, sum=0;


    fp = fopen ("in.txt", "r");

    if (fp == NULL)
    {
        printf("N-a mers");
        exit(EXIT_FAILURE);

    }

    while ((read = getline(&line, &len, fp)) != -1)
    {   int i = 0;
        while(line[i]!='\0' && line[i] != '\n')
        {
         a=a*10+(line[i]-'0');
         i++;
        }
        sum=sum+a;
        a=0;
    }
        printf("%d", sum);
        fclose(fp);
        return 0;
    }
