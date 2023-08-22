/**
 * count_int - counts number of digits
 * @a: integer input
 * Return: number of digits in integer
 */

int count_int(int a)
{
	if ((a / 10) == 0)
		return (1);
	return (1 + count_int(a / 10));
}
