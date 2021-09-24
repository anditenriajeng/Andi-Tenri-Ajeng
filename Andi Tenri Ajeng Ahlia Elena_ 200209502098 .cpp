#include <stdio.h>
#include <string.h>
 
int main() {
    char str[100] = "Pendidikan Teknik Informatika UGM";
    strcat(str, " Jurusan ");

   	char nama[] = "Jurusan Pendidikan Teknik Informatika UGM";
    char kata = 'UGM';
    char* hasil;

	printf("Mencari kata UGM pada kata (Jurusan Pendidikan Teknik Informatika UGM)\n", kata);
    // mencari huruf
    hasil = strchr(nama, kata);

    while(hasil != NULL){
    printf("Ditemukan pada huruf ke-%d\n", hasil - nama+1);
    hasil = strchr(hasil+1, kata);
   
    char * hasil;
    hasil = strstr(str,"UGM");
    strncpy (hasil, "UNM", 4);
  
    printf("%s", str);
     
    return 0;
	}
}
