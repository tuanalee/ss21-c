#include <stdio.h>

int main() {
    char dong[100];
    FILE *file;

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        return 1;
    }

    if (fgets(dong, sizeof(dong), file) != NULL) {
        printf("%s", dong);
    } else {
        printf("File rong hoac khong doc duoc du lieu.\n");
    }

    fclose(file);

    return 0;
}

