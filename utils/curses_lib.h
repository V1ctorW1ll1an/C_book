#include <ncurses.h>

void selected_option(int option) {

  switch (option) {
  case 1:
    printw("Voce selecionou a opcao 1");
    getch();
    break;
  case 2:
    printw("Voce selecionou a opcao 2");
    getch();
    break;
  case 3:
    printw("Voce selecionou a opcao 3");
    getch();
    break;
  default:
    break;
  }
}

void get_move(int *option, int key) {
  if (key == KEY_DOWN) {
    if (*option >= 3) {
      *option = 1;
    } else {
      (*option)++;
    }
  } else if (key == KEY_UP) {
    if (*option <= 1) {
      *option = 3;
    } else {
      (*option)--;
    }
  }
}

void curses_menu(void) {
  int ch;
  int current_position = 1;

  initscr();
  raw();
  keypad(stdscr, TRUE);
  noecho();

  printw("Use as setas para navegar e pressione q para sair\n");
  printw("> Opção 1\n");
  printw("Opção 2\n");
  printw("Opção 3\n");

  do {
    ch = getch();

    if ('\n' == ch) {
      selected_option(current_position);
    }

    get_move(&current_position, ch);

    switch (current_position) {
    case 1:
      clear();
      printw("Use as setas para navegar e pressione q para sair\n");
      printw("> Opção 1\n");
      printw("Opção 2\n");
      printw("Opção 3\n");
      break;
    case 2:
      clear();
      printw("Use as setas para navegar e pressione q para sair\n");
      printw("Opção 1\n");
      printw("> Opção 2\n");
      printw("Opção 3\n");
      break;
    case 3:
      clear();
      printw("Use as setas para navegar e pressione q para sair\n");
      printw("Opção 1\n");
      printw("Opção 2\n");
      printw("> Opção 3\n");
      break;
    default:
      clear();
      break;
    }
  } while (ch != 'q');

  endwin();
}
