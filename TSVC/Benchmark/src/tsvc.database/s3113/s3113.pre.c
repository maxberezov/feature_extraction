real_t s3113(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    reductions
   //    maximum of absolute value
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t max;
   {
      int nl;
      for(nl = 0; nl <= 399999; nl += 1) {
         max = fabsf(a[0]);
         {
            int i;
loop_s3113:            LU_NUB0 = 32000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               if (fabsf(a[LU_IND0*1+0])>max)
                  max = fabsf(a[LU_IND0*1+0]);
l99807:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               if (fabsf(a[(LU_IND0+0)*1+0])>max)
                  max = fabsf(a[(LU_IND0+0)*1+0]);
               if (fabsf(a[(LU_IND0+1)*1+0])>max)
                  max = fabsf(a[(LU_IND0+1)*1+0]);
               if (fabsf(a[(LU_IND0+2)*1+0])>max)
                  max = fabsf(a[(LU_IND0+2)*1+0]);
               if (fabsf(a[(LU_IND0+3)*1+0])>max)
                  max = fabsf(a[(LU_IND0+3)*1+0]);
               if (fabsf(a[(LU_IND0+4)*1+0])>max)
                  max = fabsf(a[(LU_IND0+4)*1+0]);
               if (fabsf(a[(LU_IND0+5)*1+0])>max)
                  max = fabsf(a[(LU_IND0+5)*1+0]);
               if (fabsf(a[(LU_IND0+6)*1+0])>max)
                  max = fabsf(a[(LU_IND0+6)*1+0]);
               if (fabsf(a[(LU_IND0+7)*1+0])>max)
                  max = fabsf(a[(LU_IND0+7)*1+0]);
l99806:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, max);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return max;
}
