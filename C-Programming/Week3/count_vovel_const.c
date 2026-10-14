#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ConVov(char *name){
    int con=0, vov=0;
    int length = strlen(name);
    for(int i =0; name[i]!='\0'; i++){
        name[i]=tolower(name[i]);
    }
    for(int i = 0; i<length; i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='o' || name[i]== 'i' || name[i]=='u'){
            vov++;
        }
        else if(name[i]==' '){
            
        }
        else{
            con++;
        }
    }
    printf("Total vovels: %d\n", vov);
    printf("Total consonats is: %d", con);
    return 0;
}
int main(){
    char name[]="Abhinit is Strong";
    ConVov(name);
    
    return 0;
}