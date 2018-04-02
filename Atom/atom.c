#include <C:\Users\DPTer\Desktop\Atom\atom.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <limits.h>
const char *Atom_int(long n)
{
	char str[43];
	char *s = str + sizeof(str);
	unsigned long m;
	
	if (n == LONG_MIN)
		m = LONG_MAX + 1UL;
	else if (n < 0)
		m = -n;
	else
		m = n;
	do
	{
		*--s = m % 10 + '0';
	}while((m /= 10) > 0);
	if (n < 0)
		*--s = '-';
	return Atom_new(s, (str +sizeof(str)) - s );
} 
const char *Atom_string(const char *str)
{
	assert(str);
}
int main()
{
	Atom_int(3);
	return 0;
}