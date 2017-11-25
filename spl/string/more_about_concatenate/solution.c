#include<stdio.h>

int main()
{
    int i, j, num, s1Length, s2Length, s3Length;
    char s1[20], s2[20], s3[20];

    printf("Enter a string: \n");
    scanf("%s",s1);

    printf("Enter another string: \n");
    scanf("%s",s2);

    printf("Enter an integer number: \n");
    scanf("%d",&num);

    s1Length = strlen(s1);
    s2Length = strlen(s2);

    if(num <= 0){
        for(i=0; i<s2Length; i++){
            s3[i] = s2[i];
        }

        for(i=0, j = s2Length; i<s1Length; i++, j++){
            s3[j] = s1[i];
        }
    }else if(num >= s1Length){
        for(i=0; i<s1Length; i++){
            s3[i] = s1[i];
        }

        for(i=0, j = s1Length; i<s2Length; i++, j++){
            s3[j] = s2[i];
        }
    }else{
        for(i=0; i<num; i++){
            s3[i] = s1[i];
        }

        for(i=0, j = num; i<s2Length; i++, j++){
            s3[j] = s2[i];
        }

        s3Length = strlen(s3);

        for(i=num, j=s3Length; i<s1Length; i++, j++){
            s3[j] = s1[i];
        }
    }

    s3[j] = '\0';
    printf("After concatenation: %s", s3);

    return 0;
}
