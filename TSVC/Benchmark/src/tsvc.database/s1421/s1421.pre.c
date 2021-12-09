real_t s1421(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    storage classes and equivalencing
   //    equivalence- no overlap
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   xx = &b[32000/2];
   {
      int nl;

      for(nl = 0; nl <= 799999; nl += 1) {
         {
            int i;
loop_s1421:            LU_NUB0 = 16000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               b[LU_IND0*1+0] = xx[LU_IND0*1+0]+a[LU_IND0*1+0];
l99781:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               b[(LU_IND0+0)*1+0] = xx[(LU_IND0+0)*1+0]+a[(LU_IND0+0)*1+0];
               b[(LU_IND0+1)*1+0] = xx[(LU_IND0+1)*1+0]+a[(LU_IND0+1)*1+0];
               b[(LU_IND0+2)*1+0] = xx[(LU_IND0+2)*1+0]+a[(LU_IND0+2)*1+0];
               b[(LU_IND0+3)*1+0] = xx[(LU_IND0+3)*1+0]+a[(LU_IND0+3)*1+0];
               b[(LU_IND0+4)*1+0] = xx[(LU_IND0+4)*1+0]+a[(LU_IND0+4)*1+0];
               b[(LU_IND0+5)*1+0] = xx[(LU_IND0+5)*1+0]+a[(LU_IND0+5)*1+0];
               b[(LU_IND0+6)*1+0] = xx[(LU_IND0+6)*1+0]+a[(LU_IND0+6)*1+0];
               b[(LU_IND0+7)*1+0] = xx[(LU_IND0+7)*1+0]+a[(LU_IND0+7)*1+0];
l99780:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 1.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
