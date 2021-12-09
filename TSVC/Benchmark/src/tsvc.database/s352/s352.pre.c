real_t s352(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    loop rerolling
   //    unrolled dot product
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t dot;
   {
      int nl;
      for(nl = 0; nl <= 799999; nl += 1) {
         dot = (real_t) 0.;
         {
            int i;
loop_s352:            LU_NUB0 = 6400;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               dot = dot+a[LU_IND0*5+0]*b[LU_IND0*5+0]+a[LU_IND0*5+0+1]*b[LU_IND0*5+0+1]+a[LU_IND0*5+0+2]*b[LU_IND0*5+0+2]+a[LU_IND0*5+0+3]*b[LU_IND0*5+0+3]+a[LU_IND0*5+0+4]*b[LU_IND0*5+0+4];
l99787:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               dot = dot+a[(LU_IND0+0)*5+0]*b[(LU_IND0+0)*5+0]+a[(LU_IND0+0)*5+0+1]*b[(LU_IND0+0)*5+0+1]+a[(LU_IND0+0)*5+0+2]*b[(LU_IND0+0)*5+0+2]+a[(LU_IND0+0)*5+0+3]*b[(LU_IND0+0)*5+0+3]+a[(LU_IND0+0)*5+0+4]*b[(LU_IND0+0)*5+0+4];
               dot = dot+a[(LU_IND0+1)*5+0]*b[(LU_IND0+1)*5+0]+a[(LU_IND0+1)*5+0+1]*b[(LU_IND0+1)*5+0+1]+a[(LU_IND0+1)*5+0+2]*b[(LU_IND0+1)*5+0+2]+a[(LU_IND0+1)*5+0+3]*b[(LU_IND0+1)*5+0+3]+a[(LU_IND0+1)*5+0+4]*b[(LU_IND0+1)*5+0+4];
               dot = dot+a[(LU_IND0+2)*5+0]*b[(LU_IND0+2)*5+0]+a[(LU_IND0+2)*5+0+1]*b[(LU_IND0+2)*5+0+1]+a[(LU_IND0+2)*5+0+2]*b[(LU_IND0+2)*5+0+2]+a[(LU_IND0+2)*5+0+3]*b[(LU_IND0+2)*5+0+3]+a[(LU_IND0+2)*5+0+4]*b[(LU_IND0+2)*5+0+4];
               dot = dot+a[(LU_IND0+3)*5+0]*b[(LU_IND0+3)*5+0]+a[(LU_IND0+3)*5+0+1]*b[(LU_IND0+3)*5+0+1]+a[(LU_IND0+3)*5+0+2]*b[(LU_IND0+3)*5+0+2]+a[(LU_IND0+3)*5+0+3]*b[(LU_IND0+3)*5+0+3]+a[(LU_IND0+3)*5+0+4]*b[(LU_IND0+3)*5+0+4];
               dot = dot+a[(LU_IND0+4)*5+0]*b[(LU_IND0+4)*5+0]+a[(LU_IND0+4)*5+0+1]*b[(LU_IND0+4)*5+0+1]+a[(LU_IND0+4)*5+0+2]*b[(LU_IND0+4)*5+0+2]+a[(LU_IND0+4)*5+0+3]*b[(LU_IND0+4)*5+0+3]+a[(LU_IND0+4)*5+0+4]*b[(LU_IND0+4)*5+0+4];
               dot = dot+a[(LU_IND0+5)*5+0]*b[(LU_IND0+5)*5+0]+a[(LU_IND0+5)*5+0+1]*b[(LU_IND0+5)*5+0+1]+a[(LU_IND0+5)*5+0+2]*b[(LU_IND0+5)*5+0+2]+a[(LU_IND0+5)*5+0+3]*b[(LU_IND0+5)*5+0+3]+a[(LU_IND0+5)*5+0+4]*b[(LU_IND0+5)*5+0+4];
               dot = dot+a[(LU_IND0+6)*5+0]*b[(LU_IND0+6)*5+0]+a[(LU_IND0+6)*5+0+1]*b[(LU_IND0+6)*5+0+1]+a[(LU_IND0+6)*5+0+2]*b[(LU_IND0+6)*5+0+2]+a[(LU_IND0+6)*5+0+3]*b[(LU_IND0+6)*5+0+3]+a[(LU_IND0+6)*5+0+4]*b[(LU_IND0+6)*5+0+4];
               dot = dot+a[(LU_IND0+7)*5+0]*b[(LU_IND0+7)*5+0]+a[(LU_IND0+7)*5+0+1]*b[(LU_IND0+7)*5+0+1]+a[(LU_IND0+7)*5+0+2]*b[(LU_IND0+7)*5+0+2]+a[(LU_IND0+7)*5+0+3]*b[(LU_IND0+7)*5+0+3]+a[(LU_IND0+7)*5+0+4]*b[(LU_IND0+7)*5+0+4];
l99786:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*5;
         }
         dummy(a, b, c, d, e, aa, bb, cc, dot);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return dot;
}
