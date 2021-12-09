real_t s31111(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    reductions
   //    sum reduction
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t sum;
   {
      int nl;
loop_s31111:      LU_NUB0 = 200000000;
      LU_IB0 = 0;
      for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
l99831:         ;
      }
      for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
         sum = (real_t) 0.;
         sum += test(a);
         sum += test(&a[4]);
         sum += test(&a[8]);
         sum += test(&a[12]);
         sum += test(&a[16]);
         sum += test(&a[20]);
         sum += test(&a[24]);
         sum += test(&a[28]);
         dummy(a, b, c, d, e, aa, bb, cc, sum);
l99830:         ;
      }
      nl = 0+MAX0(LU_NUB0, 0)*1;
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
