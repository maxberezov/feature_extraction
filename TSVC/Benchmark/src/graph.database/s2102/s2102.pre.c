real_t s2102(struct args_t *func_args)
{
   
   //    diagonals
   //    identity matrix, best results vectorize both inner and outer loops
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 38999; nl += 1) {
         {
            int i;
            for(i = 0; i <= 255; i += 1) {
               {
                  int j;
loop_s2102:
                  for(j = 0; j <= 255; j += 1)
                     aa[j][i] = (real_t) 0.;
               }
               aa[i][i] = (real_t) 1.;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
