real_t s471(struct args_t *func_args)
{
   
   //    call statements
   
   int m = 32000;
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 49999; nl += 1) {
         {
            int i;
loop_s471:            LU_NUB0 = (m-1-0+1)/1;
            LU_IB0 = MOD(LU_NUB0, 8);
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               x[LU_IND0*1+0] = b[LU_IND0*1+0]+d[LU_IND0*1+0]*d[LU_IND0*1+0];
               s471s();
               b[LU_IND0*1+0] = c[LU_IND0*1+0]+d[LU_IND0*1+0]*e[LU_IND0*1+0];
l99763:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               x[(LU_IND0+0)*1+0] = b[(LU_IND0+0)*1+0]+d[(LU_IND0+0)*1+0]*d[(LU_IND0+0)*1+0];
               s471s();
               b[(LU_IND0+0)*1+0] = c[(LU_IND0+0)*1+0]+d[(LU_IND0+0)*1+0]*e[(LU_IND0+0)*1+0];
               x[(LU_IND0+1)*1+0] = b[(LU_IND0+1)*1+0]+d[(LU_IND0+1)*1+0]*d[(LU_IND0+1)*1+0];
               s471s();
               b[(LU_IND0+1)*1+0] = c[(LU_IND0+1)*1+0]+d[(LU_IND0+1)*1+0]*e[(LU_IND0+1)*1+0];
               x[(LU_IND0+2)*1+0] = b[(LU_IND0+2)*1+0]+d[(LU_IND0+2)*1+0]*d[(LU_IND0+2)*1+0];
               s471s();
               b[(LU_IND0+2)*1+0] = c[(LU_IND0+2)*1+0]+d[(LU_IND0+2)*1+0]*e[(LU_IND0+2)*1+0];
               x[(LU_IND0+3)*1+0] = b[(LU_IND0+3)*1+0]+d[(LU_IND0+3)*1+0]*d[(LU_IND0+3)*1+0];
               s471s();
               b[(LU_IND0+3)*1+0] = c[(LU_IND0+3)*1+0]+d[(LU_IND0+3)*1+0]*e[(LU_IND0+3)*1+0];
               x[(LU_IND0+4)*1+0] = b[(LU_IND0+4)*1+0]+d[(LU_IND0+4)*1+0]*d[(LU_IND0+4)*1+0];
               s471s();
               b[(LU_IND0+4)*1+0] = c[(LU_IND0+4)*1+0]+d[(LU_IND0+4)*1+0]*e[(LU_IND0+4)*1+0];
               x[(LU_IND0+5)*1+0] = b[(LU_IND0+5)*1+0]+d[(LU_IND0+5)*1+0]*d[(LU_IND0+5)*1+0];
               s471s();
               b[(LU_IND0+5)*1+0] = c[(LU_IND0+5)*1+0]+d[(LU_IND0+5)*1+0]*e[(LU_IND0+5)*1+0];
               x[(LU_IND0+6)*1+0] = b[(LU_IND0+6)*1+0]+d[(LU_IND0+6)*1+0]*d[(LU_IND0+6)*1+0];
               s471s();
               b[(LU_IND0+6)*1+0] = c[(LU_IND0+6)*1+0]+d[(LU_IND0+6)*1+0]*e[(LU_IND0+6)*1+0];
               x[(LU_IND0+7)*1+0] = b[(LU_IND0+7)*1+0]+d[(LU_IND0+7)*1+0]*d[(LU_IND0+7)*1+0];
               s471s();
               b[(LU_IND0+7)*1+0] = c[(LU_IND0+7)*1+0]+d[(LU_IND0+7)*1+0]*e[(LU_IND0+7)*1+0];
l99762:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
