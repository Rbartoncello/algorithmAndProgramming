
#include <stdio.h>
#include <string.h>
#define MAX_STR_LENGTH 15
#define MSJ_ENTER_STR "Ingrese una cadena de caracteres"
#define MSJ_ENTER_STR_2 "Ingrese la segunda cadena de caracteres"
#define MSJ_ENTER_INTEGER "Ingrese un numero donde desee colocar la cadena de caracteres."

int main(void)
{
	char str_1[MAX_STR_LENGTH]; 
	
	size_t posicion_str_1 = 0, str_length;
	int num;

	printf("%s\n", MSJ_ENTER_STR);
	fgets(str_1, sizeof(str_1) + 2, stdin);
	
	printf("%s\n", MSJ_ENTER_INTEGER);

	scanf("%d", &num);

	str_length = strlen(str_1);

    printf("%lu\n", str_length);

	if(str_length >= num)
	{
		fprintf(stderr, "Error, el str es mas largo que el num\n");
		return 1;
	}

	while (str_1[posicion_str_1] != '\0')
	{
		str_1[MAX_STR_LENGTH - num] = str_1[posicion_str_1];
		str_1[posicion_str_1] = ' ';
		num++;
		posicion_str_1++;
	}
	str_1[MAX_STR_LENGTH - 1] = '\0';

	puts(str_1);

	return 0;
}