/**
 * @brief Lê e imprime o conteúdo de um arquivo de texto.
 *
 * Esta função abre o arquivo "teste.txt" no diretório atual para leitura e
 * imprime seu conteúdo caracter por caracter na saída padrão. Caso o arquivo
 * não possa ser aberto, a função não fornece um retorno ou manipulação de erro
 * específica. O usuário deve garantir que o arquivo exista para evitar
 * comportamento indefinido.
 *
 * Nota: Esta função não realiza tratamento de erros relacionado à abertura do
 * arquivo ou leitura do mesmo e é sensível ao contexto do sistema de arquivos
 * no qual é executada.
 *
 * Exemplo de uso:
 * @code
 * read_from_file();
 * @endcode
 */
void read_from_file(void) {
  FILE *file = fopen("./teste.txt", "r");
  char c;

  while ((c = fgetc(file)) != EOF) {
    printf("%c", c);
  }

  fclose(file);
}
