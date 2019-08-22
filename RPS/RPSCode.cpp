
#include <cstdio>

/* N is the number of rounds contested. */
int N;

/*
 * Ra, Pa and Sa are the number of times your opponent will throw rock, paper,
 * and scissors, respectively.
 */
int Ra;
int Pa;
int Sa;

/*
 * Rb, Pb and Sb are the number of times you will throw rock, paper, and
 * scissors, respectively.
 */
int Rb;
int Pb;
int Sb;

int answer;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("rpsin.txt", "r");
    FILE *output_file = fopen("rpsout.txt", "w");

    /* Read the value of N from the input file.  */
    fscanf(input_file, "%d", &N);

    /* Read the value of Ra, Pa and Sa from the input file.  */
    fscanf(input_file, "%d%d%d", &Ra, &Pa, &Sa);

    /* Read the value of Rb, Pb and Sb from the input file.  */
    fscanf(input_file, "%d%d%d", &Rb, &Pb, &Sb);

    answer = answer + Sb;
    answer = answer - Pb;
    answer = answer * -1;

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
