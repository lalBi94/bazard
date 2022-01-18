#include <stdio.h>
#include "_complxLib.h"

int displayComplx(stockageComplx x){
    printf("%lf + %lfi", x.reel, x.imaginaire);
    return 0;
}
