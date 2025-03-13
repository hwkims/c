#include <stdio.h>

#include <string.h>

void write_file_1()
{

    FILE *fp = fopen("sample.txt", "w");
    int i;
    for (i = 0; i < 26; i++)
        fputc('a' + i, fp);

    fclose(fp);
}

void write_file_csv()
{

    FILE *fp_w = fopen("sample.csv", "w");
    // int i;
    //     for (i=0; i<26;i++)
    //     fputc('a'+i,fp);

    fprintf(fp_w,"%d %lf %c %s\n", 3, 4.5, 'A', "ace");

        fprintf(fp_w,"%d %lf %c %s\n", 1, 2.7, 'B', "bed");

    fclose(fp_w);

    FILE *fp_r = fopen("sample.csv", "r");


    int a;
    double b;

    char c;

    char d[256];

    fscanf(fp_r,"%d %lf %c %s",&a,&b,&c,&d);

    printf("%d %lf %c %s\n",a,b,c,d);
    // int i;
    //     for (i=0; i<26;i++)
    //     fputc('a'+i,fp);

    fclose(fp_r);
}

// exit 할때 까지 입력한 모든 문자열 파일에 저장

void write_file_2()
{
    char buf[256];
    FILE *fp = fopen("sample.txt", "w"); // Open file for writing

    if (fp == NULL)
    {
        perror("Failed to open file");
        return; // Exit if the file cannot be opened
    }

    printf("Enter strings (type 'exit' to quit):\n");

    while (1)
    {
        scanf("%s", buf); // Read user input

        if (strcmp(buf, "exit") == 0)
        {
            break; // Exit the loop if user types "exit"
        }

        fprintf(fp, "%s\n", buf);   // Write the input to the file
        printf("Input: %s\n", buf); // Print the input to console
    }

    fclose(fp); // Close the file
    printf("All input has been saved to sample.txt\n");
}

int main()
{
    // FILE *file;
    // char line[256]; // Buffer to hold each line

    // // Open the file in read mode
    // file = fopen("poem.txt", "r");
    // if (file == NULL)
    // {
    //     printf("Error opening file.\n");
    //     return 1; // Exit if the file cannot be opened
    // }

    // // Read and print each line from the file
    // while (fgets(line, sizeof(line), file))
    // {
    //     printf("%s", line);
    // }

    // // Close the file
    // fclose(file);

    // write_file_1();
    // write_file_2();
     write_file_csv();
    return 0;
}