// In the given text, find the longest word and the longest sentence.

#include <stdio.h>

void longestPhrase(char* text) {
    int max = 0;
    char Punctuation[] = ".,-?:_;!";
    char *first = text, *last, *firstMax = text, *lastMax;
    for( ;*text; text++) {
        for(int i = 0; Punctuation[i]; i++) {
            if (*text == Punctuation[i]) {
                last = text;
                if (last - first > max) {
                    max = last - first;
                    firstMax = first;
                    lastMax = last;
                }
                first = text + 1;
                break;
            }
        }
    }
    printf("the longest phrase:\n");
    while(firstMax <= lastMax)
        putchar(*firstMax++);
    putchar('\n');
}
void longestWord(char* text){
     int i, index=0, max=0, count=0, len = strlen(text);
    for (i=0; i<len; i++)
        if (text[i] != ' ')
            count ++;
        else {
            if (count > max) {
                max = count;
                index = i - count;
            }
            count = 0;
        }
    if (count > max) {
        max = count;
        index = i - count;
    }
    max += index;
    printf("The longest word:\n");
    for (i=index; i<max; i++)
        putchar(text[i]);
}
int main(){
    char text[] = "C  is a general purpose computer programming"
                   "language. It was created in the 1970s by"
                   "Dennis Ritchie, and remains very widely used"
                   "and influential. By design, C's features cleanly"
                   "reflect the capabilities of the targeted CPUs."
                   "It has found lasting use in operating systems,"
                   "device drivers, protocol stacks, though decreasingly"
                   "for application software, and is common in"
                   "computer architectures that range from the largest"
                   "supercomputers to the smallest microcontrollers"
                   "and embedded systems."
                  ;
    longestPhrase(text);
    printf("\n");
    longestWord(text);
    return 0;
}
