#include <stdio.h>
#include <string.h>

struct students{ 

    int rollno;
    char name[50];
    float marks;
};
int main(){
    struct students s1;
    s1.rollno = 50;
    s1.marks = 43.4;
    strcpy(s1.name, "Abhinit");

    printf("student details \n");
    printf("Name %s\n", s1.name);
    printf("Roll No %d\n", s1.rollno);
    printf("Marks %.2f", s1.rollno);
}