#include <stdio.h>
int main() {

  char line[150];
  int vowels, consonant, digit, space;

  vowels = consonant = digit = space = 0;


  printf("Enter a line of string: ");
  fgets(line, sizeof(line), stdin);


  for (int i = 0; line[i] != '\0'; ++i) {


    line[i] = tolower(line[i]);


    if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
        line[i] == 'o' || line[i] == 'u') {


      ++vowels;
    }

    else if ((line[i] >= 'a' && line[i] <= 'z')) {
      ++consonant;
    }


    else if (line[i] >= '0' && line[i] <= '9') {
      ++digit;
    }


    else if (line[i] == ' ') {
      ++space;
    }
  }

  printf("Vowels: %d", vowels);
  printf("\nConsonants: %d", consonant);
  printf("\nDigits: %d", digit);
  printf("\nWhite spaces: %d", space);

  return 0;
}
