/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 *
 * Retourne: rien (void)
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
