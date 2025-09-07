#include<stdio.h>

int main()
{
	char word[101];
	scanf("%s", &word);
	int word_strlen = strlen(word);
	for (int i = 0; i < word_strlen / 2; i++)
	{
		if (word[i] != word[word_strlen - 1 - i])
		{
			printf("0");
			return 0;
		}
	}
	printf("1");
}