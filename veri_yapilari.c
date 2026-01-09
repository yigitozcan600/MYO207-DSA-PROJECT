#include <stdio.h>

// İsim SOYİSİM: YİĞİT ÖZCAN
// Öğrenci Numarası: 2420171050
// https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=7rptPBODb4

void insertionSort(int dizi[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = dizi[i];
        j = i - 1;

        while (j >= 0 && dizi[j] > key) {
            dizi[j + 1] = dizi[j];
            j--;
        }
        dizi[j + 1] = key;
    }
}

int binarySearch(int dizi[], int n, int aranan) {
    int sol = 0, sag = n - 1, orta;

    while (sol <= sag) {
        orta = (sol + sag) / 2;

        if (dizi[orta] == aranan)
            return orta;
        else if (dizi[orta] < aranan)
            sol = orta + 1;
        else
            sag = orta - 1;
    }

    return -1;
}

int main() {
    int dizi[100];
    int n, i, aranan, sonuc;

    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d", &n);

    printf("Dizinin elemanlarini giriniz:\n");
    for (i = 0; i < n; i++) {
        printf("%d. eleman: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    insertionSort(dizi, n);

    printf("\nSiralanmis Dizi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    printf("\n\nAranacak sayiyi giriniz: ");
    scanf("%d", &aranan);

    sonuc = binarySearch(dizi, n, aranan);

    if (sonuc != -1)
        printf("Sayi bulundu! Indeks: %d\n", sonuc);
    else
        printf("Sayi bulunamadi.\n");

    return 0;
}
