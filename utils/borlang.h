#include <curses.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void converge(int line, char *message);

void gotoxy(int x, int y) { printf("\033[%d;%dH", y, x); }

void converge(int line, char *message) {
  int i, j;
  for (i = 1, j = strlen(message); i < j; i++, j--) {
    gotoxy(i, line);
    printf("%c", message[i - 1]);
    gotoxy(j, line);
    printf("%c", message[j - 1]);
    fflush(stdout); // Força a saída do buffer, atualizando a tela
    usleep(100000); // Pausa por um curto período (100000 microssegundos)
  }
}
