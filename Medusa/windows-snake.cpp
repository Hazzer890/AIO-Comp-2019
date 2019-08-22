#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

/* N is the number of letters in the snake's DNA. */
int N;

int snake[5];
char s = 'S';
char n = 'N';
char a = 'A';
char k = 'K';
char e = 'E';

/* dna contains the snake's DNA */
char dna[100005];
//char S = S;


int answer;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("snakein.txt", "r");
    FILE *output_file = fopen("snakeout.txt", "w");

    /* Read the values of N and the DNA sequence from the input file.  */
    fscanf(input_file, "%d", &N);
    fscanf(input_file, "%s", dna);

    for (int i = 0; i < N; i++){
        if (dna[i] == s){
            snake[0] = snake[0] + 1;
        }
        if (dna[i] == n){
            snake[1] = snake[1] + 1;
        }
        if (dna[i] == a){
            snake[2] = snake[2] + 1;
        }
        if (dna[i] == k){
            snake[3] = snake[3] + 1;
        }
        if (dna[i] == e){
            snake[4] = snake[4] + 1;
        }
    }
cout << snake[4] << endl;

    answer = snake[0];
    for (int i = 0; i < 5; i++){
        if (answer > snake[i]){
            answer = snake[i];
        }
    }
    fprintf(output_file, "%d\n", answer);

    fclose(input_file);
    fclose(output_file);

    return 0;
}
