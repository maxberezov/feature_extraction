real_t s132(struct args_t *func_args)
{
   //    global data flow analysis
   //    loop with multiple dimension ambiguous subscripts
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int m = 0;
   int j = m;
   int k = m+1;
   {
      int nl;
      for(nl = 0; nl <= 39999999; nl += 1) {
         {
            int i;
loop_s132:
            for(i = 1; i <= 255; i += 1)
               aa[j][i] = aa[k][i-1]+b[i]*c[1];
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
