real_t s176(struct args_t *func_args)
{
   
   //    symbolics
   //    convolution
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int m = 32000/2;
   {
      int nl;
      for(nl = 0; nl <= 11; nl += 1) {
         {
            int j;
            for(j = 0; j <= 15999; j += 1) {
               int i;
loop_s176:
               for(i = 0; i <= m-1; i += 1)
                  a[i] += b[i+m-j-1]*c[j];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
