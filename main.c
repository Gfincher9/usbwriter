#include <stdlib.h>
#include <stdio.h>
/* I think someone who doesnt know c is going to read this so I'll tell you something real quick, dont change the bit allocation for arrays (like char path[512])
that is for support for long paths to .iso files, please dont alter it. Also, the etch() function is basically the backend for this tool, so i'd recommend not 
messing with that unless you know what you're doing. The main() fucntion is basically the CLI, so mess with that if you need to.*/
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



