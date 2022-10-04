int _putchar(char c);
int print_alphabet(void)
{
char ch = 'a';
char n = '\n';

while (ch <= 'z')
{
putchar(ch);
ch++;
}

putchar(n);
return (0);
}
