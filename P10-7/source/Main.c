#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//111360238
struct card
{
	char *face;
	char *suit;
};

int main(void)
{
	struct card aCard;
	struct card *cardPtr;

	aCard.face = "Ace";
	aCard.suit = "Spades";

	cardPtr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit, cardPtr->face, " of ", cardPtr->suit, (*cardPtr).face, " of ", (*cardPtr).suit);

	system("pause");
	return 0;
}