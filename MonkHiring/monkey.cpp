#include <cstdio>

/* N is the number of monks. monk_skills contains their skill levels. */
int N;
int monk_skills[100005];

/*
 * S is the number of student jobs (which could be zero). student_job_skills
 * contains the skill limits for these jobs.
 */
int S;
int student_job_skills[100005];

/*
 * M is the number of student jobs (which could be zero). master_job_skills
 * contains the minimum required skill for these jobs.
 */
int M;
int master_job_skills[100005];

int monkey[100005];
int answer;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("hirein.txt", "r");
    FILE *output_file = fopen("hireout.txt", "w");

    /* Read the value of N and the skill level of the monks. */
    fscanf(input_file, "%d", &N);
    for (int i = 0; i < N; i++) {
        fscanf(input_file, "%d", &monk_skills[i]);
    }

    /* Read the value of S and the skill limits of the student jobs. */
    fscanf(input_file, "%d", &S);
    for (int i = 0; i < S; i++) {
        fscanf(input_file, "%d", &student_job_skills[i]);
    }

    /* Read the value of M and the minimum required skill of the master jobs. */
    fscanf(input_file, "%d", &M);
    for (int i = 0; i < M; i++) {
        fscanf(input_file, "%d", &master_job_skills[i]);
    }

    for (int i = 0; i < 1000; i++){
        if (monk_skills[i] >= 1000){
            answer++;
        }
    }

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
