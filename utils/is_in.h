/**
 * @brief Verifica se um caracter está presente em uma string.
 *
 * Esta função percorre cada caracter da string @p s e verifica se o caracter
 * @p i está presente. Se o caracter for encontrado, a função retorna 1,
 * caso contrário, retorna 0.
 *
 * Exemplo de uso:
 * @code
 * int res = is_in("victor", 'a');
 * if (res)
 *     printf("is in\n");
 * else
 *     printf("is not in\n");
 * @endcode
 *
 * @param s A string na qual a busca será realizada.
 * @param i O caracter a ser procurado na string.
 * @return 1 se @p i estiver na string @p s, 0 caso contrário.
 */
int is_in(char *s, char i) {
  while (*s) {
    if (*s == i)
      return 1;
    else
      s++;
  }
  return 0;
}
