#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int status = system("./example_script.sh");
    if (status == 0) {
        printf("Program executed successfully\n");
    } else {
        printf("Program failed to execute\n");
    }

    //read file created by C_to_bash_example
    FILE *file = fopen("example_file.txt", "r");
    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    char line[100];
    fgets(line, 100, file);
    printf("File content: %s\n", line);
    fclose(file);

    return 0;
}
