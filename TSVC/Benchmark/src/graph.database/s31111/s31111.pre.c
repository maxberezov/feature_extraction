real_t s31111(struct args_t *func_args)
{
   
   //    reductions
   //    sum reduction
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t sum;
   {
      int nl;
loop_s31111:
      for(nl = 0; nl <= 199999999; nl += 1) {
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
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
