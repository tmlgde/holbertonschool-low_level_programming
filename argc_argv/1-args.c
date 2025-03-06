#include <stdio.h>
/**
 * main - Affiche le nombre d'arguments passés au programme
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments (non utilisé)
 *
 * Return: 0 pour indiquer que l'exécution a réussi
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
		return (0);

}
