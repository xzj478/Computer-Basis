#include <stdio.h>
#include <string.h>

int main(){
	char name[15];
	char ans[2];

	printf("whats ur name?\n");
	scanf("%s", name);

	printf("yes/no:\n");
	scanf("%s", ans);

	printf("ur name is: %s\n", name);
	printf("ur answer is: %s\n", ans);

	return 0;
}
