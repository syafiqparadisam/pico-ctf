#include <stdio.h>
#include <string.h>


int tes(char *param_1)

{
  size_t sVar1;
  char uVar2;
  long in_FS_OFFSET;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  char local_ba [2];
  byte local_b8 [16];
  byte local_a8 [16];
  char local_98 [32];
  char local_78 [12];
  char local_6c;
  char local_66;
  char local_5f;
  char local_5e;
  char local_58 [32];
  char auStack_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  builtin_memcpy(local_98,"picoCTF{br1ng_y0ur_0wn_k3y_",0x1c);
  local_ba[0] = '}';
  local_ba[1] = '\0';
  sVar1 = strlen((char *)local_98);
  MD5(local_98,sVar1,local_b8);
  sVar1 = strlen((char *)local_ba);
  MD5(local_ba,sVar1,local_a8);
  local_d0 = 0;
  for (local_cc = 0; local_cc < 0x10; local_cc = local_cc + 1) {
    sprintf(local_78 + local_d0,"%02x",(ulong)local_b8[local_cc]);
    local_d0 = local_d0 + 2;
  }
  local_d0 = 0;
  for (local_c8 = 0; local_c8 < 0x10; local_c8 = local_c8 + 1) {
    sprintf(local_58 + local_d0,"%02x",(ulong)local_a8[local_c8]);
    local_d0 = local_d0 + 2;
  }
  for (local_c4 = 0; local_c4 < 0x1b; local_c4 = local_c4 + 1) {
    auStack_38[local_c4] = local_98[local_c4];
  }
  auStack_38[0x1b] = local_66;
  auStack_38[0x1c] = local_5e;
  auStack_38[0x1d] = local_5f;
  auStack_38[0x1e] = local_78[0];
  auStack_38[0x1f] = local_5e;
  auStack_38[0x20] = local_66;
  auStack_38[0x21] = local_6c;
  auStack_38[0x22] = local_5e;
  auStack_38[0x23] = local_ba[0];
  sVar1 = strlen(param_1);
  if (sVar1 == 0x24) {
    for (local_c0 = 0; local_c0 < 0x24; local_c0 = local_c0 + 1) {
      if (param_1[local_c0] != auStack_38[local_c0]) {
        uVar2 = 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }

  return uVar2;
}

int main(int argc, char const *argv[])
{
  tes("tes");
  return 0;
}