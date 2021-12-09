real_t s351(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    loop rerolling
   //    unrolled saxpy
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t alpha = c[0];
   {
      int nl;
      for(nl = 0; nl <= 799999; nl += 1) {
         {
            int i;
loop_s351:            LU_NUB0 = 6400;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a[LU_IND0*5+0] += alpha*b[LU_IND0*5+0];
               a[LU_IND0*5+0+1] += alpha*b[LU_IND0*5+0+1];
               a[LU_IND0*5+0+2] += alpha*b[LU_IND0*5+0+2];
               a[LU_IND0*5+0+3] += alpha*b[LU_IND0*5+0+3];
               a[LU_IND0*5+0+4] += alpha*b[LU_IND0*5+0+4];
l99791:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a[(LU_IND0+0)*5+0] += alpha*b[(LU_IND0+0)*5+0];
               a[(LU_IND0+0)*5+0+1] += alpha*b[(LU_IND0+0)*5+0+1];
               a[(LU_IND0+0)*5+0+2] += alpha*b[(LU_IND0+0)*5+0+2];
               a[(LU_IND0+0)*5+0+3] += alpha*b[(LU_IND0+0)*5+0+3];
               a[(LU_IND0+0)*5+0+4] += alpha*b[(LU_IND0+0)*5+0+4];
               a[(LU_IND0+1)*5+0] += alpha*b[(LU_IND0+1)*5+0];
               a[(LU_IND0+1)*5+0+1] += alpha*b[(LU_IND0+1)*5+0+1];
               a[(LU_IND0+1)*5+0+2] += alpha*b[(LU_IND0+1)*5+0+2];
               a[(LU_IND0+1)*5+0+3] += alpha*b[(LU_IND0+1)*5+0+3];
               a[(LU_IND0+1)*5+0+4] += alpha*b[(LU_IND0+1)*5+0+4];
               a[(LU_IND0+2)*5+0] += alpha*b[(LU_IND0+2)*5+0];
               a[(LU_IND0+2)*5+0+1] += alpha*b[(LU_IND0+2)*5+0+1];
               a[(LU_IND0+2)*5+0+2] += alpha*b[(LU_IND0+2)*5+0+2];
               a[(LU_IND0+2)*5+0+3] += alpha*b[(LU_IND0+2)*5+0+3];
               a[(LU_IND0+2)*5+0+4] += alpha*b[(LU_IND0+2)*5+0+4];
               a[(LU_IND0+3)*5+0] += alpha*b[(LU_IND0+3)*5+0];
               a[(LU_IND0+3)*5+0+1] += alpha*b[(LU_IND0+3)*5+0+1];
               a[(LU_IND0+3)*5+0+2] += alpha*b[(LU_IND0+3)*5+0+2];
               a[(LU_IND0+3)*5+0+3] += alpha*b[(LU_IND0+3)*5+0+3];
               a[(LU_IND0+3)*5+0+4] += alpha*b[(LU_IND0+3)*5+0+4];
               a[(LU_IND0+4)*5+0] += alpha*b[(LU_IND0+4)*5+0];
               a[(LU_IND0+4)*5+0+1] += alpha*b[(LU_IND0+4)*5+0+1];
               a[(LU_IND0+4)*5+0+2] += alpha*b[(LU_IND0+4)*5+0+2];
               a[(LU_IND0+4)*5+0+3] += alpha*b[(LU_IND0+4)*5+0+3];
               a[(LU_IND0+4)*5+0+4] += alpha*b[(LU_IND0+4)*5+0+4];
               a[(LU_IND0+5)*5+0] += alpha*b[(LU_IND0+5)*5+0];
               a[(LU_IND0+5)*5+0+1] += alpha*b[(LU_IND0+5)*5+0+1];
               a[(LU_IND0+5)*5+0+2] += alpha*b[(LU_IND0+5)*5+0+2];
               a[(LU_IND0+5)*5+0+3] += alpha*b[(LU_IND0+5)*5+0+3];
               a[(LU_IND0+5)*5+0+4] += alpha*b[(LU_IND0+5)*5+0+4];
               a[(LU_IND0+6)*5+0] += alpha*b[(LU_IND0+6)*5+0];
               a[(LU_IND0+6)*5+0+1] += alpha*b[(LU_IND0+6)*5+0+1];
               a[(LU_IND0+6)*5+0+2] += alpha*b[(LU_IND0+6)*5+0+2];
               a[(LU_IND0+6)*5+0+3] += alpha*b[(LU_IND0+6)*5+0+3];
               a[(LU_IND0+6)*5+0+4] += alpha*b[(LU_IND0+6)*5+0+4];
               a[(LU_IND0+7)*5+0] += alpha*b[(LU_IND0+7)*5+0];
               a[(LU_IND0+7)*5+0+1] += alpha*b[(LU_IND0+7)*5+0+1];
               a[(LU_IND0+7)*5+0+2] += alpha*b[(LU_IND0+7)*5+0+2];
               a[(LU_IND0+7)*5+0+3] += alpha*b[(LU_IND0+7)*5+0+3];
               a[(LU_IND0+7)*5+0+4] += alpha*b[(LU_IND0+7)*5+0+4];
l99790:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*5;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
