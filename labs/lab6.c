#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int date_key(const char *s) {
    int d, m, y;
    if (sscanf(s, "%d.%d.%d", &d, &m, &y) != 3) return -1;
    if (y < 100) y += 2000;
    return y * 10000 + m * 100 + d;
}

static double amount_value(const char *s) {
    char buf[64];
    size_t n = strlen(s);
    if (n >= sizeof(buf)) n = sizeof(buf) - 1;
    memcpy(buf, s, n);
    buf[n] = '\0';
    for (size_t i = 0; buf[i]; ++i) if (buf[i] == ',') buf[i] = '.';
    return strtod(buf, NULL);
}

static int is_expense(const char *s) {
    return strcmp(s, "Расход") == 0 || strcmp(s, "EXPENSE") == 0 || strcmp(s, "-") == 0;
}

int main(int argc, char **argv) {
    const char *fname = (argc >= 2) ? argv[1] : "clients.txt";
    FILE *fp = fopen(fname, "r");
    if (!fp) return 0;

    int target_id;
    char from_s[32], to_s[32];
    if (scanf("%d %31s %31s", &target_id, from_s, to_s) != 3) {
        fclose(fp);
        return 0;
    }

    int from_k = date_key(from_s);
    int to_k = date_key(to_s);
    if (from_k < 0 || to_k < 0) {
        fclose(fp);
        return 0;
    }
    if (from_k > to_k) { int t = from_k; from_k = to_k; to_k = t; }

    double total = 0.0;

    while (1) {
        int id;
        char sname[64], name[64], pat[64];
        int m;

        if (fscanf(fp, "%d", &id) != 1) break;
        if (fscanf(fp, "%63s %63s %63s", sname, name, pat) != 3) break;
        if (fscanf(fp, "%d", &m) != 1) break;

        for (int i = 0; i < m; ++i) {
            char ds[32], ts[32], kind[64], ams[64];
            if (fscanf(fp, "%31s %31s %63s %63s", ds, ts, kind, ams) != 4) {
                fclose(fp);
                return 0;
            }

            if (id == target_id && is_expense(kind)) {
                int dk = date_key(ds);
                if (dk >= from_k && dk <= to_k) total += amount_value(ams);
            }
        }
    }

    fclose(fp);
    printf("%.2f\n", total);
    return 0;
}
