#include <stdio.h>
int main() {
    FILE *f = fopen("sensor.txt", "r");
    float val, sum = 0;
    int count = 0;
    if(!f) { printf("File not found!"); return 0; }
    while(fscanf(f, "%f", &val) == 1) {
        sum += val; count++;
    }
    fclose(f);
    printf("Average Sensor Value = %.2f", (count>0)?sum/count:0);
    return 0;
}
