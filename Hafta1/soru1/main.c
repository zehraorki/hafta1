#include <stdio.h>

int main(void) {
    int sayilar [10];
    int i;
    for (i=0;i<10;i++) {
        printf("Lütfen dizinin %d. elemanını giriniz: ",i+1);
        scanf("%d",&sayilar[i]);
    }
    printf("\n10 elemanlı dizi: ");
    for (i=0;i<10;i++) {
        printf("%d ",sayilar[i]);
    }
    return 0;
}
/*

 T(n) : temel işlem sayısı -> 7n+7
 O(n) : zaman karmaşıklığı -> O(n)
 S(n) : alan karmaşıklığı -> O(n)



*/