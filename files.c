#include <stdio.h>

int main() {
    
    FILE *file_pointer;
    //file_pointer = fopen("ctext_file.txt","w");
    //fprintf(file_pointer, "Some imaginative text, No?");
    file_pointer = fopen("ctext_file.txt", "a");
    fprintf(file_pointer, "\nMore Imaginative text!");
    fclose(file_pointer);

    FILE *read_file;

    read_file = fopen("directory_contents.txt", "r");
    char store_contents[100];
   if (read_file != NULL) {
    while(fgets(store_contents, 100, read_file)) {
        printf("%s", store_contents);
   }
   } else {
   
       printf("The file doesn't exist");
   }
    fclose(read_file);

    return 0;

}
