#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(void)
{
	char MyString[117];
    int i;
    char M[]="mathematician";
    int strncmp(const char *str1, const char *str2, size_t n);
    int count=0;
    int ret;
    char s[]="scientist";
    char *str1= MyString;
    char *str2= M;
	char fname[] = "Cauchy.txt";   // File name for reading data
	
	FILE *finp;  // File pointer
	int c;
	// The next line specifies the complete path
	
	printf("\n");

	// Reads from the input file
	if ( (finp = fopen(fname, "r")) == NULL) 
    {
		fprintf(stderr, "File %s not found\n", fname);
	} 
        
    else 
    {
        for (c = getc(finp); c != EOF; c = getc(finp))
            {
                fscanf(finp, "%s", &MyString[0]);
                ret = strncmp(MyString, M, 12);
        if(ret==0)
            { ++count;}
                fprintf(stdout, "%s ", MyString);
            }
            printf("\n\n Mathematician appears %i times\n\n ",count);
    }

    if ((finp = fopen(fname, "r")) == NULL) 
        {
            fprintf(stderr, "File %s not found\n", fname);
        } 
        else 
        {
            for (c = getc(finp); c != EOF; c = getc(finp))
                {
                    fscanf(finp, "%s", &MyString[0]);
                    ret = strncmp(MyString, M, 12);
            if(ret==0)
            { 
            strcpy(MyString, s);
            }
                    fprintf(stdout, "%s ", MyString);
                }
        }
printf("\n\n");
}

            
        
        
