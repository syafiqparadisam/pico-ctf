#include <stdio.h>
#include <string.h>

int main() {
    int iVar1;
    size_t sVar2;
    char local_a8[64];  // Buffer untuk menyimpan input
    char local_68[] = "jhpnnkpm dyzghbgn pphakvtt gwpmkhve okkysxzd nfpeirk mdr"; 
    // Nilai yang harus dicocokkan

    unsigned int local_2c;
    unsigned int local_28;
    char local_21 = 'a';
    unsigned int local_20 = 0xF;
    unsigned int local_1c = 0x33;
    unsigned int local_18 = 0x55;
    int local_14;
    int local_10;
    int local_c;

    setvbuf(stdout, NULL, 2, 0);
    printf("Enter the secret password: ");
    scanf("%s", local_a8);

    local_c = 0;
    sVar2 = strlen(local_68);
    local_14 = (int)sVar2;

    // Modifikasi string berdasarkan loop
    for (; local_c < 3; local_c++) {
        for (local_10 = 0; local_10 < local_14; local_10++) {
            local_28 = ((local_10 % 0xFF) >> 1 & local_18) + ((local_10 % 0xFF) & local_18);
            local_2c = ((int)local_28 >> 2 & local_1c) + (local_1c & local_28);
            iVar1 = ((int)local_2c >> 4 & local_20) + ((int)local_a8[local_10] - (int)local_21) + (local_20 & local_2c);

            local_a8[local_10] = local_21 + (char)iVar1 + (char)(iVar1 / 0x1A) * -0x1A;
        }
    }
	printf(" local _a8 %s", local_a8);
    // Membandingkan hasil dengan target string
    iVar1 = memcmp(local_a8, local_68, (long)local_14);
    if (iVar1 == 0) {
        printf("SUCCESS! Here is your flag: %s\n", "picoCTF{sample_flag}");
    } else {
        puts("FAILED!");
    }

    return 0;
}

