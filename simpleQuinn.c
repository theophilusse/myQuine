#include <unistd.h>
char quinn[] = "#include <unistd.h>\nchar quinn[] = \"@\";\n\nint\t\t\tisEscape(char *p)\n{\n\tif (*p == '@')\n\t\treturn(0);\n\tif (*p == '\\n')\n\t\treturn (1);\n\tif (*p == '\\t')\n\t\treturn (2);\n\tif (*p == '\"')\n\t\treturn (3);\n\tif (*p == '\\\\')\n\t\treturn (4);\n\treturn (5);\n}\n\nvoid\t\tft_quinn(void)\n{\n\tunsigned char\tk;\n\tchar\t\tc[6];\n\tchar\t\td[5];\n\tchar\t\t*p;\n\n\tc[0] = '@';\n\tc[1] = '\\n';\n\tc[2] = '\\t';\n\tc[3] = '\"';\n\tc[4] = '\\\\';\n\td[0] = '@';\n\td[1] = 'n';\n\td[2] = 't';\n\td[3] = '\"';\n\td[4] = '\\\\';\n\tp = quinn;\n\twhile ((c[5] = *p) != '\\0')\n\t{\n\t\tif ((k = isEscape(p)) == 5)\n\t\t\twrite(1, p, 1);\n\t\telse\n\t\t{\n\t\t\tif (k != 0)\n\t\t\t\twrite(1, &c[4], 1);\n\t\t\twrite(1, &d[k], 1);\n\t\t}\n\t\tp++;\n\t}\n}\n\nint\t\tmain(int ac, char **av)\n{\n\tchar\t\t*p;\n\n\tp = quinn;\n\twhile (*p)\n\t{\n\t\tif (*p == '@' && *(p - 1) == '\"')\n\t\t\tft_quinn();\n\t\telse\n\t\t\twrite(1, p, 1);\n\t\tp++;\n\t}\n\treturn (0);\n}\n";

int			isEscape(char *p)
{
	if (*p == '@')
		return(0);
	if (*p == '\n')
		return (1);
	if (*p == '\t')
		return (2);
	if (*p == '"')
		return (3);
	if (*p == '\\')
		return (4);
	return (5);
}

void		ft_quinn(void)
{
	unsigned char	k;
	char		c[6];
	char		d[5];
	char		*p;

	c[0] = '@';
	c[1] = '\n';
	c[2] = '\t';
	c[3] = '"';
	c[4] = '\\';
	d[0] = '@';
	d[1] = 'n';
	d[2] = 't';
	d[3] = '"';
	d[4] = '\\';
	p = quinn;
	while ((c[5] = *p) != '\0')
	{
		if ((k = isEscape(p)) == 5)
			write(1, p, 1);
		else
		{
			if (k != 0)
				write(1, &c[4], 1);
			write(1, &d[k], 1);
		}
		p++;
	}
}

int		main(int ac, char **av)
{
	char		*p;

	p = quinn;
	while (*p)
	{
		if (*p == '@' && *(p - 1) == '"')
			ft_quinn();
		else
			write(1, p, 1);
		p++;
	}
	return (0);
}
