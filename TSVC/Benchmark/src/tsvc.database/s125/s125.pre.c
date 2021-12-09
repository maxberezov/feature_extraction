real_t s125(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    induction variable recognition
   //    induction variable in two loops; collapsing possible
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int k;
   {
      int nl;
      for(nl = 0; nl <= 38999; nl += 1) {
         k = -1;
         {
            int i;
            for(i = 0; i <= 255; i += 1) {
               int j;
loop_s125:               LU_NUB0 = 256;
               LU_IB0 = 0;
               for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
                  k++;
                  flat_2d_array[k] = aa[i][LU_IND0*1+0]+bb[i][LU_IND0*1+0]*cc[i][LU_IND0*1+0];
l99963:                  ;
               }
               for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
                  k++;
                  flat_2d_array[k] = aa[i][(LU_IND0+0)*1+0]+bb[i][(LU_IND0+0)*1+0]*cc[i][(LU_IND0+0)*1+0];
                  k++;
                  flat_2d_array[k] = aa[i][(LU_IND0+1)*1+0]+bb[i][(LU_IND0+1)*1+0]*cc[i][(LU_IND0+1)*1+0];
                  k++;
                  flat_2d_array[k] = aa[i][(LU_IND0+2)*1+0]+bb[i][(LU_IND0+2)*1+0]*cc[i][(LU_IND0+2)*1+0];
                  k++;
                  flat_2d_array[k] = aa[i][(LU_IND0+3)*1+0]+bb[i][(LU_IND0+3)*1+0]*cc[i][(LU_IND0+3)*1+0];
                  k++;
                  flat_2d_array[k] = aa[i][(LU_IND0+4)*1+0]+bb[i][(LU_IND0+4)*1+0]*cc[i][(LU_IND0+4)*1+0];
                  k++;
                  flat_2d_array[k] = aa[i][(LU_IND0+5)*1+0]+bb[i][(LU_IND0+5)*1+0]*cc[i][(LU_IND0+5)*1+0];
                  k++;
                  flat_2d_array[k] = aa[i][(LU_IND0+6)*1+0]+bb[i][(LU_IND0+6)*1+0]*cc[i][(LU_IND0+6)*1+0];
                  k++;
                  flat_2d_array[k] = aa[i][(LU_IND0+7)*1+0]+bb[i][(LU_IND0+7)*1+0]*cc[i][(LU_IND0+7)*1+0];
l99962:                  ;
               }
               j = 0+MAX0(LU_NUB0, 0)*1;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
