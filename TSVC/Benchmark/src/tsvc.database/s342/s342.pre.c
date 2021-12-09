real_t s342(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    packing
   //    unpacking
   //    not vectorizable, value of j in unknown at each iteration
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int j = 0;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         j = -1;
         {
            int i;
loop_s342:            LU_NUB0 = 32000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               if (a[LU_IND0*1+0]>(real_t) 0.) {
                  j++;
                  a[LU_IND0*1+0] = b[j];
               }
l99795:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               if (a[(LU_IND0+0)*1+0]>(real_t) 0.) {
                  j++;
                  a[(LU_IND0+0)*1+0] = b[j];
               }
               if (a[(LU_IND0+1)*1+0]>(real_t) 0.) {
                  j++;
                  a[(LU_IND0+1)*1+0] = b[j];
               }
               if (a[(LU_IND0+2)*1+0]>(real_t) 0.) {
                  j++;
                  a[(LU_IND0+2)*1+0] = b[j];
               }
               if (a[(LU_IND0+3)*1+0]>(real_t) 0.) {
                  j++;
                  a[(LU_IND0+3)*1+0] = b[j];
               }
               if (a[(LU_IND0+4)*1+0]>(real_t) 0.) {
                  j++;
                  a[(LU_IND0+4)*1+0] = b[j];
               }
               if (a[(LU_IND0+5)*1+0]>(real_t) 0.) {
                  j++;
                  a[(LU_IND0+5)*1+0] = b[j];
               }
               if (a[(LU_IND0+6)*1+0]>(real_t) 0.) {
                  j++;
                  a[(LU_IND0+6)*1+0] = b[j];
               }
               if (a[(LU_IND0+7)*1+0]>(real_t) 0.) {
                  j++;
                  a[(LU_IND0+7)*1+0] = b[j];
               }
l99794:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
