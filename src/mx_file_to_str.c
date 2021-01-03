#include "../inc/libmx.h"

static int file_length(const char *file) {
    int len = 0;

    FILE *f = fopen(file, "r");

    len = fgetc(f);
    fclose(f);
    return len;
}

char *mx_file_to_str(const char *file) {
    char *res = mx_strnew(file_length(file));
    int len = file_length(file);

    FILE *f = fopen(file, "r");

    if (f == NULL)
        return NULL;
    else {
        fread(res, 1, len, f);
    }
    fclose(f);
    res[len] = '\n';
    return res;
}
//
//int main() {
//    printf("%s", mx_file_to_str("chmo.txt"));
//}
