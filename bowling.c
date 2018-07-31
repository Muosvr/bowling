#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc > 23 || argc < 22){
        printf("Usage: bowling int int int ...\n");
        return 1;
    }

    // int throws[23];
    // int j = 0;

    for(int i=0; i<23; i++){
        printf("%s",argv[i+1]);

    }

    // for (int i=0;i<strlen(argv[1]);i++){
    //     // printf("%c",argv[1][i]);
    //     if(argv[1][i]!=','){
    //         throws[j] = argv[1][i]-48;
    //         printf("%d",throws[j]);
    //         j ++;
    //         // if(j>20){
    //         //     break;
    //         // }
    //     }
    //     // throws[i]=argv[1][i]
    // }
    // printf("\n");
    // printf("input: %s\n", argv[1]);

//   int throws[] = [1,4,4,5,6,4,5,5,10,0,0,1,7,3,6,4,10,0,2,8,6] //Cliff said cannot hard code this in
//   bool strike = FALSE;

//     for (i=0;i<22;i++){
//         if (throws[i] == 10){
//             //This is a trike
//             strike = TRUE;
//         }
//     }

}