#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int num=0;
    if(argc==2){
        num = atoi(argv[1]);
    }
    else {
        printf("Arguments may be one interger.");
        return 0;
    }
    int n=0;
    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    register char *a;
    a = abc;
    while(*a!='\0' && n<num){
        printf("%c",*a);
        a++;
        n++;
    }
    return 0;
}
