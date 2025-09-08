/*
 *
 * Data una stringa contenente solo i caratteri '(', ')', '{', '}', '[', ']',
 determina se l’input è una sequenza valida di parentesi.

 Una stringa è valida se:

 Ogni parentesi aperta ha una parentesi chiusa dello stesso tipo.
 Le parentesi sono chiuse nell’ordine corretto.
 🧩 Esempi
 Input: "()"         → Output: true
 Input: "()[]{}"     → Output: true
 Input: "(]"         → Output: false
 Input: "([)]"       → Output: false
 Input: "{[]}"       → Output: true
 */

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main() {
  char string[SIZE];
  char c;
  int round_flag = 0;
  int square_flags = 0;
  int curly_flags = 0;

  for (int i = 0; i < SIZE; i++) {
    scanf("%c", &string[i]);
  }

  int length = strlen(string);

  for (int i = 0; i <= length; i++) {
  }
}
