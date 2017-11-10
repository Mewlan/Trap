#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "InputCtrl.h"
#include "ULCtrl.h"

int main(int argc, char const *argv[])
{
	char *s = "Mewlan";
	char *t = " Musajan";
	char *r;
	/* r = malloc(strlen(s) + strlen(t)); is wrong.*/ 
	r = malloc(strlen(s) + strlen(t) + 1);
	if (!r)
	{
		exit(1);
	}
	strcpy(r, s);
	strcat(r, t);
	printf("%s\n", r);
//	inPutCtrl();
	int c;
	while ((c = getchar()) != EOF)
		putchar((toLower(c)));
	free(r);
	return 0;
}
