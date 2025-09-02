#include <stdio.h>

int main() {
  char caractére;
  printf("entrer un caractére: ");
  scanf ("%c", &caractére);
  switch (caractére) {
      case 'o':
      case 'i':
      case 'u':
      case 'e':
      case 'a':
      case 'y':
      printf("%c c'est un voyelle\n", caractére);
      break;
      default:
      printf("le caractere est une consomne\n");
  }
  
    

     return 0;
}