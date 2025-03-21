#include<stdio.h>
int main()
{
    char str[1000];
    printf("Enter a string :");
    gets(str);
    int i,c=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]== ' '|| str[i]== '\t'|| str[i]=='\n')
        {
            c++;
        }
    }
     c=c+1;
     printf("number of words : %d\n",c);
}

/*#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // gets() এর পরিবর্তে fgets() ব্যবহার
    str[strcspn(str, "\n")] = '\0'; // নতুন লাইনের ক্যারেক্টার সরিয়ে ফেলা

    int i, c = 0, inWord = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inWord = 0; // শব্দ শেষ হলে ফ্ল্যাগ রিসেট
        } else if (inWord == 0) {
            inWord = 1; // নতুন শব্দ শুরু হলে ফ্ল্যাগ সেট
            c++;        // শব্দের সংখ্যা বাড়ানো
        }
    }

    printf("Number of words: %d\n", c);
    return 0;
}*/



