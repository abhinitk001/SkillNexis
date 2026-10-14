#include <stdio.h>
#include <string.h>

int reverse(char *str){
    char *start = str;
    char *end = str;
    char temp;
    while(*end != '\0'){
        end++;
    }
    end--;
    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;
    start++;
    end--;
    }
}
int main(){
    char name[]="abhinit";
    reverse(name);
    printf("Reverse string %s\n", name);

    return 0;

}