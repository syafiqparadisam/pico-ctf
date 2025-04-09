#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *local_20 = fopen("flag.txt","r");
  	FILE *local_28 = fopen("rev_this","a");
  	char local_58[23];
  	char local_9;
  	char local_41;
  	size_t sVar1 = fread(&local_58,23,1,local_20);
	printf("%s\n", sVar1);

	printf("%s\n", local_58);
  	// if ((int)sVar1 < 1) {
  	// 	exit(0);
  	// }

  	printf("%s\n", "debugg");
  	for (int local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    	local_9 = local_58[local_10];
    	fputc((int)local_9,local_28);
    	printf("%c\n", local_9);
  	}

  	for (int local_14 = 8; local_14 < 23; local_14++) {
    	if ((local_14 & 1) == 0) {
      		local_9 = local_58[(int)local_14] + '\x05';
    	}
	    else {
	      local_9 = local_58[(int)local_14] + -2;
	    }
	    fputc((int)local_9,local_28);
  }
  local_9 = local_41;
  fputc((int)local_41,local_28);

  printf("%c\n", local_41);
  fclose(local_28);
  fclose(local_20);

	return 0;
}
