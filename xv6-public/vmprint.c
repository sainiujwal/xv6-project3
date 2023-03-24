#include "types.h"
#include "user.h"


int main(int argc , char** argv) {
    if (argc != 2) {
        printf(1 , "Format: vmprint pid\n");
        exit();
    }

    int pid = atoi(argv[1]);

    //printf(1 , " %d \n", pid);
    vmprint(pid) ;

    exit();
}