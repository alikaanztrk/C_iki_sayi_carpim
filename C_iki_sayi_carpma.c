
#include<stdio.h>
int sonuc=0;
int sayi1,sayi2;

int main(){
    
    printf("iki adet sayi girin:\n ");
    scanf("%d%d",&sayi1,&sayi2);
        int i;
        for(i=1;i<=sayi2;i++){
        sonuc+=sayi1;
    }
    printf("%d x %d = %d",sayi1,sayi2,sonuc);
    
}
