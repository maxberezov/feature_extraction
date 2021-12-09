real_t s125(struct args_t *func_args)
{
   
   //    induction variable recognition
   //    induction variable in two loops; collapsing possible
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int k;
   {
      int nl;
      for(nl = 0; nl <= 38999; nl += 1) {
         k = -1;
         {
            int i;
            for(i = 0; i <= 255; i += 1) {
               int j;
loop_s125:
               for(j = 0; j <= 255; j += 1) {
                  k++;
                  flat_2d_array[k] = aa[i][j]+bb[i][j]*cc[i][j];
               }
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
