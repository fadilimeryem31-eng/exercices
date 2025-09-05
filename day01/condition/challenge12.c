#include <stdio.h>

int main() {
    int h, m, s;
    int h1, m1, s1;

    printf("Entrer la première date HH:MM:SS: ");
    scanf("%d:%d:%d", &h, &m, &s);

    printf("Entrer la deuxième date HH:MM:SS: ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("La date1 : %02d:%02d:%02d\n", h, m, s);
    printf("La date2 : %02d:%02d:%02d\n", h1, m1, s1);

    if (h < h1 || (h == h1 && m < m1) || (h == h1 && m == m1 && s < s1)) {
        printf("Le premier instant vient avant le deuxième.\n");
    } else if (h > h1 || (h == h1 && m > m1) || (h == h1 && m == m1 && s > s1)) {
        printf("Le deuxième instant vient avant le premier.\n");
    } else {
        printf("Il s'agit du même instant.\n");
    }

    return 0;
}
