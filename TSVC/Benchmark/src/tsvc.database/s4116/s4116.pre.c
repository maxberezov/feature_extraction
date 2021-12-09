real_t s4116(struct args_t *func_args)
{
   
   //    indirect addressing
   //    more complicated sparse sdot
   //    gather is required
   
   struct {
      int * restrict a;
      int b;
      int c;
   } *x = func_args->arg_info;
   int * restrict ip = x->a;
   int j = x->b;
   int inc = x->c;
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t sum;
   int off;
   {
      int nl;
      for(nl = 0; nl <= 9999999; nl += 1) {
         sum = 0.;
         {
            int i;
loop_s4116:            LU_NUB0 = 255;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               off = inc+(LU_IND0*1+0);
               sum += a[off]*aa[j-1][ip[LU_IND0*1+0]];
l99749:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               off = inc+((LU_IND0+0)*1+0);
               sum += a[off]*aa[j-1][ip[(LU_IND0+0)*1+0]];
               off = inc+((LU_IND0+1)*1+0);
               sum += a[off]*aa[j-1][ip[(LU_IND0+1)*1+0]];
               off = inc+((LU_IND0+2)*1+0);
               sum += a[off]*aa[j-1][ip[(LU_IND0+2)*1+0]];
               off = inc+((LU_IND0+3)*1+0);
               sum += a[off]*aa[j-1][ip[(LU_IND0+3)*1+0]];
               off = inc+((LU_IND0+4)*1+0);
               sum += a[off]*aa[j-1][ip[(LU_IND0+4)*1+0]];
               off = inc+((LU_IND0+5)*1+0);
               sum += a[off]*aa[j-1][ip[(LU_IND0+5)*1+0]];
               off = inc+((LU_IND0+6)*1+0);
               sum += a[off]*aa[j-1][ip[(LU_IND0+6)*1+0]];
               off = inc+((LU_IND0+7)*1+0);
               sum += a[off]*aa[j-1][ip[(LU_IND0+7)*1+0]];
l99748:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return sum;
}
