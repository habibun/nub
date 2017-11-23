#include<stdio.h>
#include <string.h>

int main()
{
	char s1[20], s2[20], s3[20];
	int i,j, s1Length;

	printf("Enter first string: \n");
	scanf("%s", s1);

	printf("Enter second string: \n");
	scanf("%s", s2);

    s1Length = strlen(s1);

    for(i=0; s1[i] != '\0'; i++){
        s3[i] = s1[i];
    }

    for(i=0, j = s1Length; s2[i] != '\0'; i++, j++){
        s3[j] = s2[i];
    }

    s3[j] = '\0';
    printf("After concatenation: %s", s3);

	return 0;
}
