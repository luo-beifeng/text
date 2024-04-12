#include <stdio.h>
#include <string.h>

char *my_strtok(char *str, const char *delim){
    static char *next_token = NULL;
    
    if (str != NULL){
        next_token = str;
    } else {
        if (next_token == NULL){
            return NULL;
        }
    }

    // Skip leading delimiters
    next_token += strspn(next_token, delim);
    printf("这是调试部分：%s\n", next_token);
    
    if (*next_token == '\0'){
        return NULL;
    }
    
    char *token = next_token;
    printf("这是调试部分token：%s\n", next_token);
    next_token += strcspn(next_token, delim);
    
    if (*next_token != '\0'){
        *next_token = '\0';
        next_token++;
    } else {
        next_token = NULL;
    }
    
    return token;
}

int main(){
    // Example usage
    char str[] = "Hello,world;this,is;a;test";
    char *delim = ",;";
    char *token = my_strtok(str, delim);

    while (token != NULL){
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }

    return 0;
}
