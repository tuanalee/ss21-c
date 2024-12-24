#include <stdio.h>

int main() {
    char chuoi[100];  
    FILE *file;       

   
    printf("Nhap chuoi can ghi vao file: ");
    fgets(chuoi, sizeof(chuoi), stdin);  

   
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Loi khi mo file.\n");
        return 1;  
    }

    
    fprintf(file, "%s", chuoi);

    
    fclose(file);

   
    printf("Chuong trinh da ghi chuoi vao file bt01.txt thanh cong!\n");

    return 0;
}

