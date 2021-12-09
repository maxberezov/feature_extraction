real_t s122(struct args_t *func_args)
{
   
   //    induction variable recognition
   //    variable lower and upper bound, and stride
   //    reverse data access and jump in data access
   
   struct {
      int a;
      int b;
   } *x = func_args->arg_info;
   int n1 = x->a;
   int n3 = x->b;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int j, k;
   {
      int nl;
loop_s122:
      for(nl = 0; nl <= 99999; nl += 1) {
         j = 1;
         k = 0;
         {
            int i;
            i = n1-1;
            while (i<32000) {
               k += j;
               a[i] += b[32000-k];
               i += n3;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
