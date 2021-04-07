#include "types.h"
#include "user.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"
#include "stat.h"
#include "fs.h"

int main(int argc, char *argv[]) {
    int fd;
    fd = open("README", O_RDONLY);
    if(fd == -1){
        printf(1,"unable to open file.\n");
    }
    lseek(fd, -10, SEEK_END);
    char buffer[60];
    read(fd, buffer, 40);
    printf(1, "%s\n", buffer);
    exit();
}