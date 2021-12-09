real_t s423(struct args_t *func_args)
{
   
   //    storage classes and equivalencing
   //    common and equivalenced variables - with anti-dependence
   
   // do this again here
   int vl = 64;
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   xx = flat_2d_array+vl;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 399999; nl += 1) {
         {
            int i;
loop_s423:            LU_NUB0 = 31999;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               flat_2d_array[LU_IND0*1+0+1] = xx[LU_IND0*1+0]+a[LU_IND0*1+0];
l99777:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               flat_2d_array[(LU_IND0+0)*1+0+1] = xx[(LU_IND0+0)*1+0]+a[(LU_IND0+0)*1+0];
               flat_2d_array[(LU_IND0+1)*1+0+1] = xx[(LU_IND0+1)*1+0]+a[(LU_IND0+1)*1+0];
               flat_2d_array[(LU_IND0+2)*1+0+1] = xx[(LU_IND0+2)*1+0]+a[(LU_IND0+2)*1+0];
               flat_2d_array[(LU_IND0+3)*1+0+1] = xx[(LU_IND0+3)*1+0]+a[(LU_IND0+3)*1+0];
               flat_2d_array[(LU_IND0+4)*1+0+1] = xx[(LU_IND0+4)*1+0]+a[(LU_IND0+4)*1+0];
               flat_2d_array[(LU_IND0+5)*1+0+1] = xx[(LU_IND0+5)*1+0]+a[(LU_IND0+5)*1+0];
               flat_2d_array[(LU_IND0+6)*1+0+1] = xx[(LU_IND0+6)*1+0]+a[(LU_IND0+6)*1+0];
               flat_2d_array[(LU_IND0+7)*1+0+1] = xx[(LU_IND0+7)*1+0]+a[(LU_IND0+7)*1+0];
l99776:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 1.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
