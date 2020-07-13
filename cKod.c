#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

	char asilDosya[30],kopyaDosya[30];// değişkenler
	int sonuc=0;

	printf("kaynak dosya adi ");
	scanf("%s",asilDosya);//dosya adları alınıyor
	printf("hedef dosya adi ");
	scanf("%s",kopyaDosya);
//dosya göstericileri tanımlanıyor.
	FILE *f1 = fopen(asilDosya,"r+");
	FILE *f2 = fopen(kopyaDosya,"a");
// dosyalar var mı yok mu kontrol ediliyor.
	if(f1==NULL){
		printf("böyle ibr dosya yok.");
		exit(0);
	}
	
	if(f2==NULL){
		printf("dosya zaten var");
		exit(0);
	}
// dosya içeriği diğer dosyaya yazılıyor.
	while(!feof(f1)){
		fputc(fgetc(f1),f2);

		}
//dosyalar kapatılıyor.
	printf("islem tamam");
	fclose(f1);
	fclose(f2);


return 0;

}
