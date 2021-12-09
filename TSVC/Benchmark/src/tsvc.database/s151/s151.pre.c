real_t s151(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    interprocedural data flow analysis
   //    passing parameter information into a subroutine
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;


loop_s151:      LU_NUB0 = 500000;
      LU_IB0 = 0;
      for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
l99949:         ;
      }
      for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         s151s(a, b, 1);
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
l99948:         ;
      }
      nl = 0+MAX0(LU_NUB0, 0)*1;
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
