#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reverse[100];
    int length, i;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str); // স্ট্রিং-এর দৈর্ঘ্য নির্ণয়

    // উল্টো স্ট্রিং তৈরির জন্য লুপ
    for (i = 0; i < length; i++)
    {
        reverse[i] = str[length - i - 1];
    }
    reverse[length] = '\0'; // স্ট্রিং শেষ করার জন্য নাল ক্যারেক্টার যোগ করা

    printf("Reversed string: %s\n", reverse);

    return 0;
}

