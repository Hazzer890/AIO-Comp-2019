
#include <cstdio>

/* N is the number of flowers. */
int N;
int a;
int b;
int c;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("vasesin.txt", "r");
    FILE *output_file = fopen("vasesout.txt", "w");

    /* Read the value of N from the input file.  */
    fscanf(input_file, "%d", &N);

    if (N<6) {
        a=0;
        b=0;
        c=0;
    } else {
        a=1;
        b=2;
        c=(N-3);
    }

    /* Write the answer to the output file. */
    fprintf(output_file, "%d %d %d\n", a, b, c);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
