#include <stdlib.h>
#include <stdio.h>
char path[512];
char *blkdevice;
int main() {
    printf("Please enter the path to the .iso file.\n");
scanf("%s", &path);
    printf("Please enter the blockdevice");
    system("lsblk -d");
    printf("\n");
scanf("%s", &blkdevice);
    etch();
return 0;
}
void etch(void) {
char cmd[512];
//Used for testing
//printf("%s", &path);
sprintf(cmd, "sudo dd if=%s of=/dev/%s bs=1M status=progress\n", &path, &blkdevice);
//Used for testing, do not enable unless you are doing testing
//printf("%s", &cmd);
system(cmd);
}



