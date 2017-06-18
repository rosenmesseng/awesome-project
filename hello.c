#include <stdio.h>

#define FALSE 0;
#define TRUE 1;

int main(){
	int c;
	int cc, lc, wc;
	int inWord = FALSE;

	c=EOF;
	while(c!=EOF){
		cc++;
		if(c=='\n')
			lc++;
		if(inWord && (c=='\n' || c=='\t' || c==' ')){
			wc++;
			inWord=0;
		}
		else if(!inWord && c!='\n' && c!='\t' && c!=' ')
			inWord=1;
		c=getchar();
		if(c==EOF&&inWord)
			wc++;
	}
	inWord = TRUE;
	if(inWord) printf("%d",1);
	//printf("Number of Characters: %d\n Number of Lines: %d\n Number of Words: %d\n",cc, lc, wc);
}
