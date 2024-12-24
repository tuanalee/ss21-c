#include <stdio.h>

int main() {
    char chuoi[100];
    FILE *file;

    fgets(chuoi, sizeof(chuoi), stdin);

    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        return 1;
    }

    fprintf(file, "%s", chuoi);

    fclose(file);

    return 0;
}

