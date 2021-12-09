real_t s1232(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    loop interchange
   //    interchanging of triangular loops
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 38999; nl += 1) {
         {
            int j;
            for(j = 0; j <= 255; j += 1) {
               int i;
loop_s1232:               LU_NUB0 = (255-j+1)/1;
               LU_IB0 = MOD(LU_NUB0, 8);
               for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
                  aa[LU_IND0*1+j][j] = bb[LU_IND0*1+j][j]+cc[LU_IND0*1+j][j];
l99915:                  ;
               }
               for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
                  aa[(LU_IND0+0)*1+j][j] = bb[(LU_IND0+0)*1+j][j]+cc[(LU_IND0+0)*1+j][j];
                  aa[(LU_IND0+1)*1+j][j] = bb[(LU_IND0+1)*1+j][j]+cc[(LU_IND0+1)*1+j][j];
                  aa[(LU_IND0+2)*1+j][j] = bb[(LU_IND0+2)*1+j][j]+cc[(LU_IND0+2)*1+j][j];
                  aa[(LU_IND0+3)*1+j][j] = bb[(LU_IND0+3)*1+j][j]+cc[(LU_IND0+3)*1+j][j];
                  aa[(LU_IND0+4)*1+j][j] = bb[(LU_IND0+4)*1+j][j]+cc[(LU_IND0+4)*1+j][j];
                  aa[(LU_IND0+5)*1+j][j] = bb[(LU_IND0+5)*1+j][j]+cc[(LU_IND0+5)*1+j][j];
                  aa[(LU_IND0+6)*1+j][j] = bb[(LU_IND0+6)*1+j][j]+cc[(LU_IND0+6)*1+j][j];
                  aa[(LU_IND0+7)*1+j][j] = bb[(LU_IND0+7)*1+j][j]+cc[(LU_IND0+7)*1+j][j];
l99914:                  ;
               }
               i = j+MAX0(LU_NUB0, 0)*1;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 1.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
