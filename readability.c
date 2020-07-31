#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(void)
{
    string s = get_string("Enter : ");

    int n = strlen(s);

    int words = 1;
    int sentence = 0;
    int letters = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            words++;
        }

        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            sentence++;
        }
        
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            letters++;
            
        }

    }

    float index =  round(0.0588 * (100 * letters / words) - 0.296 * (100 * sentence / words) - 15.8);

    printf("Words : %i and sentences : %i and letters : %i\n", words, sentence, letters);
    
    if (index <= 1)
    {
        printf("1\n");
    }
    else if (index >= 16)
    {
        printf("16+\n");
    }
    else
    {
        printf("%i\n", (int)index);
    }    
}
