real_t s126(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    induction variable recognition
   //    induction variable in two loops; recurrence in inner loop
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int k;
   {
      int nl;
      for(nl = 0; nl <= 3899; nl += 1) {
         k = 1;
         {
            int i;
            for(i = 0; i <= 255; i += 1) {
               {
                  int j;
loop_s126:                  LU_NUB0 = 255;
                  LU_IB0 = 7;
                  for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
                     bb[LU_IND0*1+1][i] = bb[LU_IND0*1+1-1][i]+flat_2d_array[k-1]*cc[LU_IND0*1+1][i];
                     ++k;
l99961:                     ;
                  }
                  for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
                     bb[(LU_IND0+0)*1+1][i] = bb[(LU_IND0+0)*1+1-1][i]+flat_2d_array[k-1]*cc[(LU_IND0+0)*1+1][i];
                     ++k;
                     bb[(LU_IND0+1)*1+1][i] = bb[(LU_IND0+1)*1+1-1][i]+flat_2d_array[k-1]*cc[(LU_IND0+1)*1+1][i];
                     ++k;
                     bb[(LU_IND0+2)*1+1][i] = bb[(LU_IND0+2)*1+1-1][i]+flat_2d_array[k-1]*cc[(LU_IND0+2)*1+1][i];
                     ++k;
                     bb[(LU_IND0+3)*1+1][i] = bb[(LU_IND0+3)*1+1-1][i]+flat_2d_array[k-1]*cc[(LU_IND0+3)*1+1][i];
                     ++k;
                     bb[(LU_IND0+4)*1+1][i] = bb[(LU_IND0+4)*1+1-1][i]+flat_2d_array[k-1]*cc[(LU_IND0+4)*1+1][i];
                     ++k;
                     bb[(LU_IND0+5)*1+1][i] = bb[(LU_IND0+5)*1+1-1][i]+flat_2d_array[k-1]*cc[(LU_IND0+5)*1+1][i];
                     ++k;
                     bb[(LU_IND0+6)*1+1][i] = bb[(LU_IND0+6)*1+1-1][i]+flat_2d_array[k-1]*cc[(LU_IND0+6)*1+1][i];
                     ++k;
                     bb[(LU_IND0+7)*1+1][i] = bb[(LU_IND0+7)*1+1-1][i]+flat_2d_array[k-1]*cc[(LU_IND0+7)*1+1][i];
                     ++k;
l99960:                     ;
                  }
                  j = 1+MAX0(LU_NUB0, 0)*1;
               }
               ++k;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
