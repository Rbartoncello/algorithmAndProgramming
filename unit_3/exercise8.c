#include <stdio.h>


int main(void) {

	char s[] = "ewqrttb";
	char t[] = "ewqrtta";
	size_t i = 0;
	int cmp;

	i = 0;
	while(s[i] == t[i] && (s[i]!='\0' && t[i]!='\0')){
		i++;
	}

	cmp = s[i] - t[i];

	printf("%d\n", cmp);
	return 0;
}
