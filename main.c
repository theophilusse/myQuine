#include <unistd.h>
#include <string.h>

/*
char quinn[] = "#include <unistd.h>\n#include <string.h>\n\nchar quinn[] = \"@@0\";\n\nint\t\t\t\tescape(char *p)\n{\n\tif (*p == '@')\n\t\treturn (0);\n\tif (*p == '\\n')\n\t\treturn (1);\n\tif (*p == '\\t')\n\t\treturn (2);\n\tif (*p == '\\\"')\n\t\treturn (3);\n\tif (*p == '\\\\')\n\t\treturn (4);\n\treturn (5);\n}\n\nvoid\t\t\t@@2(void)\n{\n\tunsigned char\tk;\n\tchar\t\t\tc[6];\n\tchar\t\t\td[5];\n\tchar\t\t\t*p;\n\n\tc[0] = '@';\n\tc[1] = '\\n';\n\tc[2] = '\\t';\n\tc[3] = '\\\"';\n\tc[4] = '\\\\';\n\td[0] = '@';\n\td[1] = 'n';\n\td[2] = 't';\n\td[3] = '\\\"';\n\td[4] = '\\\\';\n\tp = quinn;\n\twhile ((c[5] = *p) != '\\0')\n\t{\n\t\tif ((k = escape(p)) == 5)\n\t\t\twrite(1, p, 1);\n\t\telse\n\t\t{\n\t\t\tif (k != 0)\n\t\t\t\twrite(1, &c[4], 1);\n\t\t\twrite(1, &d[k], 1);\n\t\t}\n\t\tp++;\n\t}\n}\n\nvoid\t\t@@1(char *name, char *bride)\n{\n\tchar\t\t*p;\n\n\tif (!name)\n\t\treturn ;\n\tp = quinn;\n\twhile (*p)\n\t{\n\t\tif (*p == '@' && *(p + 1) == '@')\n\t\t{\n\t\t\tif (*(p + 2) == '0')\n\t\t\t\t@@2();\n\t\t\tif (*(p + 2) == '1')\n\t\t\t{\n\t\t\t\twrite(1, name, sizeof(char) * strlen(name));\n\t\t\t}\n\t\t\tif (*(p + 2) == '2')\n\t\t\t{\n\t\t\t\twrite(1, bride, sizeof(char) * strlen(bride));\n\t\t\t}\n\t\t\tp += 2;\n\t\t}\n\t\telse\n\t\t{\n\t\t\tif (*(p + 1) != '@' || ((*p == 39 || *p == '\"') && *(p + 1) == '@'))\n\t\t\t\twrite(1, p, 1);\n\t\t}\n\t\tp++;\n\t}\n}\n\nint\t\t\tmain(int ac, char **av)\n{\n\tif (ac != 3)\n\t\treturn (1);\n\t\t@@1(av[1], av[2]);\n\treturn (0);\n}\n";
*/

char quinn[] = "#include <unistd.h>\n#include <s" \
	"tring.h>\n\nchar quinn[] = \"@@0\";\n" \
	"\nint\t\t\t\tescape(char *p)\n{\n\tif (*" \
	"p == '@')\n\t\treturn (0);\n\tif (*p " \
	"== '\\n')\n\t\treturn (1);\n\tif (*p =" \
	"= '\\t')\n\t\treturn (2);\n\tif (*p ==" \
	" '\\\"')\n\t\treturn (3);\n\tif (*p == " \
	"'\\\\')\n\t\treturn (4);\n\treturn (5);" \
	"\n}\n\nvoid\t\t\t@@2(void)\n{\n\tunsigned" \
	" char\tk;\n\tchar\t\t\tc[6];\n\tchar\t\t\td" \
	"[6];\n\tchar\t\t\t*p;\n\n\tc[0] = '@';\n\t" \
	"c[1] = '\\n';\n\tc[2] = '\\t';\n\tc[3]" \
	" = '\\\"';\n\tc[4] = '\\\\';\n\td[0] = '" \
	"@';\n\td[1] = 'n';\n\td[2] = 't';\n\td" \
	"[3] = '\\\"';\n\td[4] = '\\\\';\n\td[5] = 0;\n\tp = q" \
	"uinn;\n\twhile ((c[5] = *p) != '\\0" \
	"')\n\t{\n" \
	"\n\ŧ\t" \
	"if (++d[5] >= 32 && *(p - 1) != '\\\\')" \
	"\n\t\t{\n" \
	"\t\t\twrite(1, &c[3], 1);\n" \
	"\t\t\twrite(1, &c[4], 1);\n" \
	"\t\t\twrite(1, &c[1], 1);\n" \
	"\t\t\twrite(1, &c[2], 1);\n" \
	"\t\t\twrite(1, &c[3], 1);\n" \
	"\t\t\td[5] = 0;\n" \
	"\t\t}\n" \
	"\n\t\tif ((k = escape(p)) == 5" \
	")\n\t\t\twrite(1, p, 1);\n\t\telse\n\t\t{\n" \
	"\t\t\tif (k != 0)\n\t\t\t\twrite(1, &c[4" \
	"], 1);\n\t\t\twrite(1, &d[k], 1);\n\t\t" \
	"}\n\t\tp++;\n\t}\n}\n\nvoid\t\t@@1(char *n" \
	"ame, char *bride)\n{\n\tchar\t\t*p;\n\n" \
	"\tif (!name)\n\t\treturn ;\n\tp = quin" \
	"n;\n\twhile (*p)\n\t{\n\t\tif (*p == '@" \
	"' && *(p + 1) == '@')\n\t\t{\n\t\t\tif " \
	"(*(p + 2) == '0')\n\t\t\t\t@@2();\n\t\t\t" \
	"if (*(p + 2) == '1')\n\t\t\t{\n\t\t\t\twr" \
	"ite(1, name, sizeof(char) * strl" \
	"en(name));\n\t\t\t}" \
	"\n\t\t\tif (*(p + 2) == '2')\n\t\t\t{\n\t\t" \
	"\t\twrite(1, bride, sizeof(char) *" \
	" strlen(bride));" \
	"\n\t\t\t}\n\t\t\tp += 2;\n\t\t}\n\t\telse\n\t\t{" \
	"\n\t\t\tif (*(p + 1) != '@' || ((*p " \
	"== 39 || *p == '\\\"') && *(p + 1) " \
	"== '@'))\n\t\t\t\twrite(1, p, 1);\n\t\t}" \
	"\n\t\tp++;\n\t}\n}\n\nint\t\t\tmain(int ac," \
	" char **av)\n{\n\tif (ac != 3)\n\t\tre" \
	"turn (1);\n\t\t@@1(av[1], av[2]);\n\t" \
	"return (0);\n}\n";

int				escape(char *p)
{
	if (*p == '@')
		return (0);
	if (*p == '\n')
		return (1);
	if (*p == '\t')
		return (2);
	if (*p == '\"')
		return (3);
	if (*p == '\\')
		return (4);
	return (5);
}

void			queen(void)
{
	unsigned char	k;
	char			c[6];
	char			d[6];
	char			*p;

	c[0] = '@';
	c[1] = '\n';
	c[2] = '\t';
	c[3] = '\"';
	c[4] = '\\';
	d[0] = '@';
	d[1] = 'n';
	d[2] = 't';
	d[3] = '"';
	d[4] = '\\';
	d[5] = 0; //
	p = quinn;
	while ((c[5] = *p) != '\0')
	{
		if (++d[5] >= 32 && *(p - 1) != '\\')
		{
			write(1, &c[3], 1);
			write(1, &c[4], 1);
			write(1, &c[1], 1);
			write(1, &c[2], 1);
			write(1, &c[3], 1);
			d[5] = 0;
		}
		if ((k = escape(p)) == 5)
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

void		king(char *name, char *bride)
{
	char		*p;

	if (!name)
		return ;
	p = quinn;
	while (*p)
	{
		if (*p == '@' && *(p + 1) == '@')
		{
			if (*(p + 2) == '0')
				queen();
			if (*(p + 2) == '1')
			{
				write(1, name, sizeof(char) * strlen(name)); /* Signature. */
			}
			if (*(p + 2) == '2')
			{
				write(1, bride, sizeof(char) * strlen(bride)); /* Signature. */
			}
			p += 2;
		}
		else
		{
			if (*(p + 1) != '@' || ((*p == 39 || *p == '"') && *(p + 1) == '@'))
				write(1, p, 1);
		}
		p++;
	}
}

int			main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	king(av[1], av[2]);
	return (0);
}
