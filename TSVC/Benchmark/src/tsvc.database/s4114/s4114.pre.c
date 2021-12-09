real_t s4114(struct args_t *func_args)
{
   
   //    indirect addressing
   //    mix indirect addressing with variable lower and upper bounds
   //    gather is required
   
   struct {
      int * restrict a;
      int b;
   } *x = func_args->arg_info;
   int * restrict ip = x->a;
   int n1 = x->b;
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int k;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s4114:            LU_NUB0 = (31999-(n1-1)+1)/1;
            LU_IB0 = MOD(LU_NUB0, 8);
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               k = ip[LU_IND0*1+(n1-1)];
               a[LU_IND0*1+(n1-1)] = b[LU_IND0*1+(n1-1)]+c[32000-k+1-2]*d[LU_IND0*1+(n1-1)];
               k += 5;
l99753:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               k = ip[(LU_IND0+0)*1+(n1-1)];
               a[(LU_IND0+0)*1+(n1-1)] = b[(LU_IND0+0)*1+(n1-1)]+c[32000-k+1-2]*d[(LU_IND0+0)*1+(n1-1)];
               k += 5;
               k = ip[(LU_IND0+1)*1+(n1-1)];
               a[(LU_IND0+1)*1+(n1-1)] = b[(LU_IND0+1)*1+(n1-1)]+c[32000-k+1-2]*d[(LU_IND0+1)*1+(n1-1)];
               k += 5;
               k = ip[(LU_IND0+2)*1+(n1-1)];
               a[(LU_IND0+2)*1+(n1-1)] = b[(LU_IND0+2)*1+(n1-1)]+c[32000-k+1-2]*d[(LU_IND0+2)*1+(n1-1)];
               k += 5;
               k = ip[(LU_IND0+3)*1+(n1-1)];
               a[(LU_IND0+3)*1+(n1-1)] = b[(LU_IND0+3)*1+(n1-1)]+c[32000-k+1-2]*d[(LU_IND0+3)*1+(n1-1)];
               k += 5;
               k = ip[(LU_IND0+4)*1+(n1-1)];
               a[(LU_IND0+4)*1+(n1-1)] = b[(LU_IND0+4)*1+(n1-1)]+c[32000-k+1-2]*d[(LU_IND0+4)*1+(n1-1)];
               k += 5;
               k = ip[(LU_IND0+5)*1+(n1-1)];
               a[(LU_IND0+5)*1+(n1-1)] = b[(LU_IND0+5)*1+(n1-1)]+c[32000-k+1-2]*d[(LU_IND0+5)*1+(n1-1)];
               k += 5;
               k = ip[(LU_IND0+6)*1+(n1-1)];
               a[(LU_IND0+6)*1+(n1-1)] = b[(LU_IND0+6)*1+(n1-1)]+c[32000-k+1-2]*d[(LU_IND0+6)*1+(n1-1)];
               k += 5;
               k = ip[(LU_IND0+7)*1+(n1-1)];
               a[(LU_IND0+7)*1+(n1-1)] = b[(LU_IND0+7)*1+(n1-1)]+c[32000-k+1-2]*d[(LU_IND0+7)*1+(n1-1)];
               k += 5;
l99752:               ;
            }
            i = n1-1+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
