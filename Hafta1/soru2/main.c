#include <stdio.h>

int main(void) {
    int sayi,ters=0,basamak,temp;
    printf("Lutfen bir sayı giriniz: ");
    scanf("%d",&sayi);
    temp = sayi;

    while (temp>0) {
        basamak = temp %10;
        ters = (ters*10) +basamak;
        temp =temp/10;
    }
    if (sayi==ters) {
        printf("Girdiginiz sayi palindrom sayidir ");
    }else {
        printf("Girdiginiz sayi palindrom sayi değildir ");
    }

    return 0;
}
