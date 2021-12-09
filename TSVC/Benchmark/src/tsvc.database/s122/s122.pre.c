real_t s122(struct args_t *func_args)
{
   
   //    induction variable recognition
   //    variable lower and upper bound, and stride
   //    reverse data access and jump in data access
   
   struct {
      int a;
      int b;
   } *x = func_args->arg_info;
   int n1 = x->a;
   int n3 = x->b;
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0, i0, i1, i2, i3, i4, i5, i6, i7, i8;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int j, k;
   {
      int nl;
loop_s122:      LU_NUB0 = 100000;
      LU_IB0 = 0;
      for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
         j = 1;
         k = 0;

         i0 = n1-1;
         while (i0<32000) {
            k += j;
            a[i0] += b[32000-k];
            i0 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
l99969:         ;
      }
      for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
         j = 1;
         k = 0;

         i8 = n1-1;
         while (i8<32000) {
            k += j;
            a[i8] += b[32000-k];
            i8 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         j = 1;
         k = 0;

         i7 = n1-1;
         while (i7<32000) {
            k += j;
            a[i7] += b[32000-k];
            i7 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         j = 1;
         k = 0;

         i6 = n1-1;
         while (i6<32000) {
            k += j;
            a[i6] += b[32000-k];
            i6 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         j = 1;
         k = 0;

         i5 = n1-1;
         while (i5<32000) {
            k += j;
            a[i5] += b[32000-k];
            i5 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         j = 1;
         k = 0;

         i4 = n1-1;
         while (i4<32000) {
            k += j;
            a[i4] += b[32000-k];
            i4 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         j = 1;
         k = 0;

         i3 = n1-1;
         while (i3<32000) {
            k += j;
            a[i3] += b[32000-k];
            i3 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         j = 1;
         k = 0;

         i2 = n1-1;
         while (i2<32000) {
            k += j;
            a[i2] += b[32000-k];
            i2 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
         j = 1;
         k = 0;

         i1 = n1-1;
         while (i1<32000) {
            k += j;
            a[i1] += b[32000-k];
            i1 += n3;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
l99968:         ;
      }
      nl = 0+MAX0(LU_NUB0, 0)*1;
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
