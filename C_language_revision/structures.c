// // #include<stdio.h>
// // #include<string.h>
// // //strucutre can hold dissimilar data

// // struct Car{
// //     char name[20] ;
// //     float price;
// // };

// // void printArray(char * ptr){
// //     int counter = 0;
// //     while(ptr[counter] != '\0'){
// //         printf("%c", ptr[counter]);
// //         counter++;
// //     }
// // }

// // int main(){


// //     struct Car ferrari;
// //     strcpy(ferrari.name, "Lamborgini");
// //     ferrari.price = 500000.00;
// //     printf("The name of the ferrari is: ");
// //     printArray(ferrari.name);
// //     printf("\n");
// //     printf("The price of this thing is: %.2f", ferrari.price );


// //     return 0;
// // }


// // #include <stdio.h>

// // // printf and scanf tutorial
// // // master class complete understanding
// // // taking input array -> done
// // // printing out array -> done
// // //
// // int main()
// // {
// // // format specifier and string issue input and output
// //     int temp[3] = {0,100};

// //     int counter = 0;
// //     while(counter < 3){

// //         printf("Enter the value of %d element: ", counter + 1);
// //         scanf("%d", temp + counter);

// //         counter++;
// //     }

// //     int pconter = 0;
// //     while(pconter < 3){
// //         printf("%d ", temp[pconter]);
// //         pconter++;
// //     }
    



// //     return 0;
// // }

// #include<stdio.h>

// // string input -> not done
// // string output -> done
// // format specifier -> not done

// int main(){
//     // char name[5] ;
//     // printf("%d", strlen(name));
//     // name[10] = 's';
//     // printf("%c",name[2]);
//     // char name[] = "Aryan Agrawal";
//     // int counter =  0 ;
//     // while(name[counter] != '\0'){
//     //     printf("%c",name[counter]);
//     //     counter++;
//     // }
//     // char name [50];
//     // char nick [50];
//     // scanf("%[^\n]%*c", name);
//     // scanf("%*[^\n]", nick);
//     // // gets(name); !!! GETS FUNCTION IS NOT AVAILABLE THERE
//     // int counter = 0;
//     // while(name[counter] != '\0'){
//     //     printf("%c", name[counter]);
//     //     counter++;
//     // }
//     // counter = 0;
//     // while(nick[counter] != '\0'){
//     //     printf("%c", nick[counter]);
//     //     counter++;
//     // }

//     char first[20];
//     char second[20];
//     char nothing;
//     int one;
//     int two;

//     // scanf("%*[^\n]%*c");
//     // scanf("%c%*c", &nothing);
//     scanf("%d%*c",&one);
//     scanf("%d%*c",&two);
//     printf("Enter the name of First person: ");
//     scanf("%[^\n]%*c", first);
//     printf("Enter the name of Second person: ");
//     scanf("%[^\n]%*c", second);

//     //first
//     int fc = 0;
//     while(first[fc] != '\0'){
//         printf("%c", first[fc]);
//         fc++;
//     }
//     printf("\n");
//     //second
//     int sc = 0;
//     while(second[sc] != '\0'){
//         printf("%c", second[sc]);
//         sc++;
//     }

    

// }

// #include<stdio.h>

// int main(){
//     int j  = 10;

//     if (j = 0){
//         printf("I was wrong");
//     }else{
//         printf("I was right");
//     }
    
// }


//////////////////////////////////////////////
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//  int * ptr = (int *) malloc( 50 * sizeof(int));
//  free(ptr);
// }


// #include<stdio.h>

// int main(){

//     // char name[100];
//     // printf("Enter your name: ");
//     // scanf("%[^\n]%*c", name);
//     // puts(name);
//     // double dd;
//     // scanf("%f",&dd);
//     // printf("%f", dd);
//     char s;
//     char w[20];
//     char sen[100];

//     printf("Enter a character: ");
//     scanf("%c%*c", &s);
//     printf("Enter a word: ");
//     scanf("%s%*c", w);
//     printf("Enter a sentence: ");
//     scanf("%[^\n]%*c", sen);

//     // print
//     printf("%c\n", s);
//     printf("%s\n", w);
//     int counter = 0;
//     while (sen[counter] != '\0'){
        
//         printf("%c",sen[counter]);
//         counter++;
//     }

// }


#include<stdio.h>
#include<stdbool.h>

int main(){
    bool dd = -0;
    int n = -10;
    if(n){
        printf("%d", dd);
    }
}