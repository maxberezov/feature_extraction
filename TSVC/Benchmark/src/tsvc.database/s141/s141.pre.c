real_t s141(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    nonlinear dependence testing
   //    walk a row in a symmetric packed array
   //    element a(i,j) for (int j>i) stored in location j*(j-1)/2+i
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int k;
   {
      int nl;
      for(nl = 0; nl <= 77999; nl += 1) {
         {
            int i;
            for(i = 0; i <= 255; i += 1) {
               k = (i+1)*(i+1-1)/2+(i+1)-1;
               {
                  int j;
loop_s141:                  LU_NUB0 = (255-i+1)/1;
                  LU_IB0 = MOD(LU_NUB0, 8);
                  for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
                     flat_2d_array[k] += bb[LU_IND0*1+i][i];
                     k += LU_IND0*1+i+1;
l99951:                     ;
                  }
                  for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
                     flat_2d_array[k] += bb[(LU_IND0+0)*1+i][i];
                     k += (LU_IND0+0)*1+i+1;
                     flat_2d_array[k] += bb[(LU_IND0+1)*1+i][i];
                     k += (LU_IND0+1)*1+i+1;
                     flat_2d_array[k] += bb[(LU_IND0+2)*1+i][i];
                     k += (LU_IND0+2)*1+i+1;
                     flat_2d_array[k] += bb[(LU_IND0+3)*1+i][i];
                     k += (LU_IND0+3)*1+i+1;
                     flat_2d_array[k] += bb[(LU_IND0+4)*1+i][i];
                     k += (LU_IND0+4)*1+i+1;
                     flat_2d_array[k] += bb[(LU_IND0+5)*1+i][i];
                     k += (LU_IND0+5)*1+i+1;
                     flat_2d_array[k] += bb[(LU_IND0+6)*1+i][i];
                     k += (LU_IND0+6)*1+i+1;
                     flat_2d_array[k] += bb[(LU_IND0+7)*1+i][i];
                     k += (LU_IND0+7)*1+i+1;
l99950:                     ;
                  }
                  j = i+MAX0(LU_NUB0, 0)*1;
               }
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
