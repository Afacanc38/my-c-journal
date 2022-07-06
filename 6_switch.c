#include <stdio.h>

int main() {
  int haftanin_gunu = 4;

  switch(haftanin_gunu) {
    case 1:
      printf("Pazartesi\n");
      break; // kod bloğunu çalıştırmayı durdurur
    case 2:
      printf("Salı\n");
      break;
    case 3:
      printf("Çarşamba\n");
      break;
    case 4:
      printf("Perşembe\n");
      break;
    case 5:
      printf("Cuma\n");
      break;
    case 6:
      printf("Cumartesi\n");
      break;
    case 7:
      printf("Pazar\n");
      break;
    default:
      /*
       * bu kod bloğu else gibi çalışmaktadır.
       */
      printf("Çıkmaz ayın çıkmaz günü.\n");
  }

  return 0;
}
