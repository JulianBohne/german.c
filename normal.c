#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {
    if(argc < 2) {
        fprintf(stderr, "Bitte uebergebe wie folgt eine Ganzzahl: programm <Ganzzahl>\n");
        return 1;
    }

    int num = atoi(argv[1]);

    if(num == 0) {
        printf("Das ist nicht sonderlich interessant.\n");
    } else {
        switch(num) {
            case 5:
                printf("Welch eine gute Wahl!\n");
                break;
            
            case 666:
                printf("Du dienst wohl dem Teufel!\n");
                break;
            
            default:
                printf("Ich bin an deinen Spielereien nicht interessiert.\n");
                break;
        }
    }

    return 0;
}