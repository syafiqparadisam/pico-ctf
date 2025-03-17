#include <stdio.h>
#include <string.h>

int main() {
	char local_68[100] = "0x6a68706e6e6b706d"; // Hexadecimal representatia
						   
						   
	char local_a8[64];

	printf("Password ?");
	scanf("%s", &local_a8);
//	char toascii[64] = "jhpnnkpm";
	char toascii[64] = "mpknnphj";
//    char *str = (char *)&toascii; 
int iVar1;
  int local_2c;
  int local_28;
  char local_21;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;

    size_t sVar2 = strlen(toascii);  // Calculate string length
    int local_14 = (int)sVar2;   // Store length as int
  local_c = 0;
  local_18 = 85;
  local_1c = 51;
  local_20 = 15;
  local_21 = 'a';
  for (; local_c < 3; local_c = local_c + 1) {
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
      local_28 = (local_10 % 255 >> 1 & local_18) + (local_10 % 255 & local_18);
      local_2c = ((int)local_28 >> 2 & local_1c) + (local_1c & local_28);
      iVar1 = ((int)local_2c >> 4 & local_20) +
              ((int)local_a8[local_10] - (int)local_21) + (local_20 & local_2c);
      local_a8[local_10] = local_21 + (char)iVar1 + (char)(iVar1 / 26) * -26;
    }
  }


    printf("String: %s\n", toascii);
    printf("Length: %d\n", local_14);
	
    printf("%s",local_a8);
   iVar1 = memcmp(local_a8,&toascii,(long)local_14);
    printf("%d", iVar1);

    return 0;
}

