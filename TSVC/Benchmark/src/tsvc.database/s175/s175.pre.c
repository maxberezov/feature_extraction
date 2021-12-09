real_t s175(struct args_t *func_args)
{
   
   //    symbolics
   //    symbolic dependence tests
   
   int inc = *((int *) func_args->arg_info);
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0, i0, i1, i2, i3, i4, i5, i6, i7, i8;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;


loop_s175:      LU_NUB0 = 100000;
      LU_IB0 = 0;
      for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {

         i0 = 0;
         while (i0<32000-1) {
            a[i0] = a[i0+inc]+b[i0];
            i0 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
l99935:         ;
      }
      for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {

         i8 = 0;
         while (i8<32000-1) {
            a[i8] = a[i8+inc]+b[i8];
            i8 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);

         i7 = 0;
         while (i7<32000-1) {
            a[i7] = a[i7+inc]+b[i7];
            i7 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);

         i6 = 0;
         while (i6<32000-1) {
            a[i6] = a[i6+inc]+b[i6];
            i6 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);

         i5 = 0;
         while (i5<32000-1) {
            a[i5] = a[i5+inc]+b[i5];
            i5 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);

         i4 = 0;
         while (i4<32000-1) {
            a[i4] = a[i4+inc]+b[i4];
            i4 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);

         i3 = 0;
         while (i3<32000-1) {
            a[i3] = a[i3+inc]+b[i3];
            i3 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);

         i2 = 0;
         while (i2<32000-1) {
            a[i2] = a[i2+inc]+b[i2];
            i2 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);

         i1 = 0;
         while (i1<32000-1) {
            a[i1] = a[i1+inc]+b[i1];
            i1 += inc;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
l99934:         ;
      }
      nl = 0+MAX0(LU_NUB0, 0)*1;
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
