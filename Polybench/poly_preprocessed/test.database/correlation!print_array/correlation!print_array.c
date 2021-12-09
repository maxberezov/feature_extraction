# 44 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
static
void print_array(int m,
                 double corr[ 1200 + 0][1200 + 0])

{
        int i, j;

        fprintf(
# 51 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c" 3 4
       stderr
# 51 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
       , "==BEGIN DUMP_ARRAYS==\n");
        fprintf(
# 52 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c" 3 4
       stderr
# 52 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
       , "begin dump: %s", "corr");
        for (i = 0; i < m; i++)
                for (j = 0; j < m; j++) {
                        if ((i * m + j) % 20 == 0) fprintf (
# 55 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c" 3 4
                                                           stderr
# 55 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
                                                                                , "\n");
                        fprintf (
# 56 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c" 3 4
                                stderr
# 56 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
                                                     , "%0.2lf ", corr[i][j]);
                }
        fprintf(
# 58 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c" 3 4
       stderr
# 58 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
       , "\nend   dump: %s\n", "corr");
        fprintf(
# 59 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c" 3 4
       stderr
# 59 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
       , "==END   DUMP_ARRAYS==\n");
}
