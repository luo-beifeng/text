#include<stdio.h>
#include<string.h>

char * my_strtok(char * str, const char * delim);

int main(int argc, char **argv)
{
    char str[] = "hello,world;this,is;a;test";
    char * delim = ",;";
    char *token = my_strtok(str,delim);

    while (token != NULL)
    {
        printf("%s",token);
        token = my_strtok(NULL,delim);
    }

    return 0;
}

char * my_strtok(char * str, const char * delim)
{
    static char *next_token = NULL;

    if(str != NULL)
    {
        next_token = str;

    }
    else 
    {
        if (next_token == NULL)
        {
            return NULL;
        }
    }

    next_token += strspn(next_token, delim);
    
    
    if (*next_token == '\0'){
        return NULL;
    }
    char * token = next_token;
    printf("这是token地址：%p\n", token);
    printf("这是next地址：%p\n", next_token);

     next_token += strcspn(next_token, delim);
     
     if (*next_token != '\0')
     {
        *next_token = '\0';
        next_token++;
     }
     else
     {
        next_token = NULL;
     }
     printf("这是调试部分：%s\n", token);
     return token;
}

