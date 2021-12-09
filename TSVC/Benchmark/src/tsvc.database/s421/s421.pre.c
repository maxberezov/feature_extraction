real_t s421(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    storage classes and equivalencing
   //    equivalence- no overlap
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   xx = flat_2d_array;
   {
      int nl;

      for(nl = 0; nl <= 399999; nl += 1) {
         yy = xx;
         {
            int i;
loop_s421:            LU_NUB0 = 31999;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               xx[LU_IND0*1+0] = yy[LU_IND0*1+0+1]+a[LU_IND0*1+0];
l99783:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               xx[(LU_IND0+0)*1+0] = yy[(LU_IND0+0)*1+0+1]+a[(LU_IND0+0)*1+0];
               xx[(LU_IND0+1)*1+0] = yy[(LU_IND0+1)*1+0+1]+a[(LU_IND0+1)*1+0];
               xx[(LU_IND0+2)*1+0] = yy[(LU_IND0+2)*1+0+1]+a[(LU_IND0+2)*1+0];
               xx[(LU_IND0+3)*1+0] = yy[(LU_IND0+3)*1+0+1]+a[(LU_IND0+3)*1+0];
               xx[(LU_IND0+4)*1+0] = yy[(LU_IND0+4)*1+0+1]+a[(LU_IND0+4)*1+0];
               xx[(LU_IND0+5)*1+0] = yy[(LU_IND0+5)*1+0+1]+a[(LU_IND0+5)*1+0];
               xx[(LU_IND0+6)*1+0] = yy[(LU_IND0+6)*1+0+1]+a[(LU_IND0+6)*1+0];
               xx[(LU_IND0+7)*1+0] = yy[(LU_IND0+7)*1+0+1]+a[(LU_IND0+7)*1+0];
l99782:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 1.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
