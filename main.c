#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int DataArray[2][11] = {
        {0,1,2,3,4,5,6,7,8,9,10},
        {0,8,9,12,15,14,15,13,14,15,13}
    };

    char VoltageArray[11][50];  // store strings (bars)

    for (int i = 0; i < 11; i++) {
        char temp[50] = "";  // start as empty string

        // build the stars
        for (int j = 0; j < DataArray[1][i]; j++) {
            strcat(temp, "*");
        }

        strcpy(VoltageArray[i], temp);  // copy to array
    }

    printf("Stored Chart Data:\n");
    for (int i = 0; i < 11; i++) {
        printf("chart[%d] = %s\n", i, VoltageArray[i]);
    }

    return EXIT_SUCCESS;
}