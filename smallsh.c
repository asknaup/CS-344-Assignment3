/*
Amanda Knaup
ONID: 934327219
CS-344 Assignment 3
*/

/*
1. Provide a prompt for running commands
2. Handle blank lines and comments, which are lines beginning with the # character
3. Provide expansion for the variable $$
4. Execute 3 commands exit, cd, and status via code built into the shell
5. Execute other commands by creating new processes using a function from the exec family of functions
6. Support input and output redirection
7. Support running commands in foreground and background processes
8. Implement custom handlers for 2 signals, SIGINT and SIGTSTP
*/
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

#define MAX 2048

void getInput(char *outputArr[]){
    char input[MAX];
    char *token;
    size_t 
    
    // command prompt
    printf(": ");
    fflush(stdout);
    int inputLine = getline(&input, &len, stdin);

    // change from new line to end string
    input[inputLine - 1] = '\0';


    // convert from new line to end of char arr
    // for(int i=0; i < MAX; i++){
    //     if(input[i] == '\n'){
    //         input[i] = '\0';    // convert here
    //         break;
    //     }
    //     i++;
    // }

    if(input[0] == ' '){
        printf("Empty Line\n");
        fflush(stdout);
    }
    // else 
    if(input[0] == '#'){
        printf("Comment Line\n");
        fflush(stdout);
    }
    // else 
    // if(strncmp(input, "$$", 2)){
    // }
    // else 
    // if (strncmp(input, "cd", 2) == 0){
    //     printf("Change working directory command\n");
    //     fflush(stdout);
    // } 
    // // else 
    // if(strcmp(input, "exit")){
    //     printf("Close shell and kill processes\n");
    //     fflush(stdout);
    // }
    // // else 
    // if(strcmp(input, "status") == 0){
    //     printf("Display exit status or terminating signal of last foreground process\n");
    //     fflush(stdout);
    // }

    printf("%s\n", input);
    fflush(stdout);
    printf("%d\n", inputLength);
    fflush(stdout);
}


int main(int argc, char* argv[]) {
    // int pid = getpid();
    char *input[512];

    for(int i=0; i<512; i++){
        input[i] = NULL;
    }

    int iter = 0;

    while (iter < 5) {
        getInput(input);
        // fflush(stdout);
        // printf("%s\n", txtArr);
        // scanf("%s", input);
        iter++;
    }

    return EXIT_SUCCESS;
}