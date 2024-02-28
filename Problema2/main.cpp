#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;
char cuv[100][100];
char text[100];
int i ;

void Ord()
{
    bool ok = 0;
    while(!ok)
        {
            ok = 1;
            for(int j=0;j<i-1;j++)
            if(strlen(cuv[j])<strlen(cuv[j+1]))
            {
                ok=0;
                char aux[100];
                strcpy(aux,cuv[j]);
                strcpy(cuv[j],cuv[j+1]);
                strcpy(cuv[j+1],aux);
            }
            else if(strlen(cuv[j])==strlen(cuv[j+1]))
            {
                if(strcmp(cuv[j],cuv[j+1])>0)
                {
                    ok=0;
                    char aux[100];
                    strcpy(aux,cuv[j]);
                    strcpy(cuv[j],cuv[j+1]);
                    strcpy(cuv[j+1],aux);
                }
            }
        }
}
int main()
{
    scanf("%[^\n]", text);
    char *p=strtok(text," ");
    while(p!=0)
    {
        strcpy(cuv[i],p);
        i++;
        p=strtok(NULL," ");
    }
    Ord();
    for(int j=0; j<i; j++)
      printf("%s\n", cuv[j]);
}
