#include <stdio.h>

int main() {
    double salary;
    int exp;

    printf("Enter salary: ");
    scanf("%lf", &salary);

    printf("Enter years of experience: ");
    scanf("%d", &exp);

    /* 1. Geçersiz giriş kontrolü || işareti ya da demek
    */
    if (salary <= 0 || exp < 0) {
        printf("Invalid input!\n");
        return 1;
    }

    double rate = 0.0;

    // 2. Prim oranını if-else ile belirleme
    if (exp < 2) {
        rate = 0.0;       // 2 yıldan az ise %0
    } else if (exp <= 5) {
        rate = 0.05;      // 2–5 yıl arası ise %5
    } else {
        rate = 0.10;      // 5 yıldan fazla ise %10
    }

    // 3. Hesaplamalar
    double bonus = salary * rate;
    double final_salary = salary + bonus;

    // 4. Sonuçları ekrana yazdırma
    printf("\nBonus: %.2f TL\n", bonus);
    printf("Final salary: %.2f TL\n", final_salary);

    return 0;
}

