
        #include <stdio.h>
    int main()
    {
        char a[100], b[100], i;
        printf("Enter string a: ");
        scanf("%s",a);
        for(i = 0; a[i] != '\0'; i++)
        {
            b[i] = a[i];
        }
        b[i] = '\0';
        printf("String b: %s", b);
        return 0;
    }
