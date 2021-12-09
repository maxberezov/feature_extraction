real_t s242(struct args_t *func_args)
{
   
   //    node splitting
   
   struct {
      real_t a;
      real_t b;
   } *x = func_args->arg_info;
   real_t s1 = x->a;
   real_t s2 = x->b;
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 19999; nl += 1) {
         {
            int i;
loop_s242:            LU_NUB0 = 31999;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a[LU_IND0*1+1] = a[LU_IND0*1+1-1]+s1+s2+b[LU_IND0*1+1]+c[LU_IND0*1+1]+d[LU_IND0*1+1];
l99905:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a[(LU_IND0+0)*1+1] = a[(LU_IND0+0)*1+1-1]+s1+s2+b[(LU_IND0+0)*1+1]+c[(LU_IND0+0)*1+1]+d[(LU_IND0+0)*1+1];
               a[(LU_IND0+1)*1+1] = a[(LU_IND0+1)*1+1-1]+s1+s2+b[(LU_IND0+1)*1+1]+c[(LU_IND0+1)*1+1]+d[(LU_IND0+1)*1+1];
               a[(LU_IND0+2)*1+1] = a[(LU_IND0+2)*1+1-1]+s1+s2+b[(LU_IND0+2)*1+1]+c[(LU_IND0+2)*1+1]+d[(LU_IND0+2)*1+1];
               a[(LU_IND0+3)*1+1] = a[(LU_IND0+3)*1+1-1]+s1+s2+b[(LU_IND0+3)*1+1]+c[(LU_IND0+3)*1+1]+d[(LU_IND0+3)*1+1];
               a[(LU_IND0+4)*1+1] = a[(LU_IND0+4)*1+1-1]+s1+s2+b[(LU_IND0+4)*1+1]+c[(LU_IND0+4)*1+1]+d[(LU_IND0+4)*1+1];
               a[(LU_IND0+5)*1+1] = a[(LU_IND0+5)*1+1-1]+s1+s2+b[(LU_IND0+5)*1+1]+c[(LU_IND0+5)*1+1]+d[(LU_IND0+5)*1+1];
               a[(LU_IND0+6)*1+1] = a[(LU_IND0+6)*1+1-1]+s1+s2+b[(LU_IND0+6)*1+1]+c[(LU_IND0+6)*1+1]+d[(LU_IND0+6)*1+1];
               a[(LU_IND0+7)*1+1] = a[(LU_IND0+7)*1+1-1]+s1+s2+b[(LU_IND0+7)*1+1]+c[(LU_IND0+7)*1+1]+d[(LU_IND0+7)*1+1];
l99904:               ;
            }
            i = 1+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
