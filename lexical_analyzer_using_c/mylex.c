#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    int l=1;
    int t=0;
    int j=0;
    int i, flag;
    char ch, str[20];
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");
    char keyword[30][30] = {"int", "while", "if", "else", "do", "main", "include"};

    while(!feof(input))
    {
        i=0;
        flag=0;
        
    }
}