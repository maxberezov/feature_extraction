real_t s316(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    reductions
   //    if to min reduction
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t x;
   {
      int nl;
      for(nl = 0; nl <= 499999; nl += 1) {
         x = a[0];
         {
            int i;
loop_s316:            LU_NUB0 = 31999;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               if (a[LU_IND0*1+1]<x)
                  x = a[LU_IND0*1+1];
l99821:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               if (a[(LU_IND0+0)*1+1]<x)
                  x = a[(LU_IND0+0)*1+1];
               if (a[(LU_IND0+1)*1+1]<x)
                  x = a[(LU_IND0+1)*1+1];
               if (a[(LU_IND0+2)*1+1]<x)
                  x = a[(LU_IND0+2)*1+1];
               if (a[(LU_IND0+3)*1+1]<x)
                  x = a[(LU_IND0+3)*1+1];
               if (a[(LU_IND0+4)*1+1]<x)
                  x = a[(LU_IND0+4)*1+1];
               if (a[(LU_IND0+5)*1+1]<x)
                  x = a[(LU_IND0+5)*1+1];
               if (a[(LU_IND0+6)*1+1]<x)
                  x = a[(LU_IND0+6)*1+1];
               if (a[(LU_IND0+7)*1+1]<x)
                  x = a[(LU_IND0+7)*1+1];
l99820:               ;
            }
            i = 1+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, x);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return x;
}
