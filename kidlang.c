
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a struct for variables
typedef struct {
    char name[20];
    int value;
} Variable;

// Function to execute KidLang commands
void execute_command(char* command) {
    // Split the command into tokens
    char* tokens[10];
    int num_tokens = 0;
    char* token = strtok(command, " ");
    while (token != NULL) {
        tokens[num_tokens] = token;
        num_tokens++;
        token = strtok(NULL, " ");
    }

    // Handle PRINT command
    if (strcmp(tokens[0], "PRINT") == 0) {
        printf("%s\n", tokens[1]);
    }
    // Handle LET command
    else if (strcmp(tokens[0], "LET") == 0) {
        Variable var;
        strcpy(var.name, tokens[1]);
        var.value = atoi(tokens[3]);
        // Store the variable (not implemented)
    }
    // Handle ADD command
    else if (strcmp(tokens[0], "ADD") == 0) {
        int result = atoi(tokens[1]) + atoi(tokens[2]);
        printf("%d\n", result);
    }
    // Handle SUB command
    else if (strcmp(tokens[0], "SUB") == 0) {
        int result = atoi(tokens[1]) - atoi(tokens[2]);
        printf("%d\n", result);
    }
  
}

int main() {
    char command[100];
    while (1) {
        printf("> ");
        fgets(command, sizeof(command), stdin);
        execute_command(command);
    }
    return 0;
}
