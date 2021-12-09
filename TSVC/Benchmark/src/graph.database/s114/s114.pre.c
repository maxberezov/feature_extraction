real_t s114(struct args_t *func_args)
{
   
   //    linear dependence testing
   //    transpose vectorization
   //    Jump in data access - not vectorizable
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 77999; nl += 1) {
         {
            int i;
            for(i = 0; i <= 255; i += 1) {
               int j;
loop_s114:
               for(j = 0; j <= i-1; j += 1)
                  aa[i][j] = aa[j][i]+bb[i][j];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
