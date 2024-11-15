#include <stdio.h>
#include <unistd.h>

int main(){

    for (int i = 1; i<100; i*=2){
        printf("%i\n",i);
        sleep(1);
    }
}
