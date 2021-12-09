real_t s2710(struct args_t *func_args)
{
   
   //    control flow
   //    scalar and vector ifs
   
   int x = *((int *) func_args->arg_info);
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 49999; nl += 1) {
         {
            int i;
loop_s2710:            LU_NUB0 = 32000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               if (a[LU_IND0*1+0]>b[LU_IND0*1+0]) {
                  a[LU_IND0*1+0] += b[LU_IND0*1+0]*d[LU_IND0*1+0];
                  if (32000>10)
                     c[LU_IND0*1+0] += d[LU_IND0*1+0]*d[LU_IND0*1+0];
                  else
                     c[LU_IND0*1+0] = d[LU_IND0*1+0]*e[LU_IND0*1+0]+(real_t) 1.;
               }
               else {
                  b[LU_IND0*1+0] = a[LU_IND0*1+0]+e[LU_IND0*1+0]*e[LU_IND0*1+0];
                  if (x>(real_t) 0.)
                     c[LU_IND0*1+0] = a[LU_IND0*1+0]+d[LU_IND0*1+0]*d[LU_IND0*1+0];
                  else
                     c[LU_IND0*1+0] += e[LU_IND0*1+0]*e[LU_IND0*1+0];
               }
l99855:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               if (a[(LU_IND0+0)*1+0]>b[(LU_IND0+0)*1+0]) {
                  a[(LU_IND0+0)*1+0] += b[(LU_IND0+0)*1+0]*d[(LU_IND0+0)*1+0];
                  if (32000>10)
                     c[(LU_IND0+0)*1+0] += d[(LU_IND0+0)*1+0]*d[(LU_IND0+0)*1+0];
                  else
                     c[(LU_IND0+0)*1+0] = d[(LU_IND0+0)*1+0]*e[(LU_IND0+0)*1+0]+(real_t) 1.;
               }
               else {
                  b[(LU_IND0+0)*1+0] = a[(LU_IND0+0)*1+0]+e[(LU_IND0+0)*1+0]*e[(LU_IND0+0)*1+0];
                  if (x>(real_t) 0.)
                     c[(LU_IND0+0)*1+0] = a[(LU_IND0+0)*1+0]+d[(LU_IND0+0)*1+0]*d[(LU_IND0+0)*1+0];
                  else
                     c[(LU_IND0+0)*1+0] += e[(LU_IND0+0)*1+0]*e[(LU_IND0+0)*1+0];
               }
               if (a[(LU_IND0+1)*1+0]>b[(LU_IND0+1)*1+0]) {
                  a[(LU_IND0+1)*1+0] += b[(LU_IND0+1)*1+0]*d[(LU_IND0+1)*1+0];
                  if (32000>10)
                     c[(LU_IND0+1)*1+0] += d[(LU_IND0+1)*1+0]*d[(LU_IND0+1)*1+0];
                  else
                     c[(LU_IND0+1)*1+0] = d[(LU_IND0+1)*1+0]*e[(LU_IND0+1)*1+0]+(real_t) 1.;
               }
               else {
                  b[(LU_IND0+1)*1+0] = a[(LU_IND0+1)*1+0]+e[(LU_IND0+1)*1+0]*e[(LU_IND0+1)*1+0];
                  if (x>(real_t) 0.)
                     c[(LU_IND0+1)*1+0] = a[(LU_IND0+1)*1+0]+d[(LU_IND0+1)*1+0]*d[(LU_IND0+1)*1+0];
                  else
                     c[(LU_IND0+1)*1+0] += e[(LU_IND0+1)*1+0]*e[(LU_IND0+1)*1+0];
               }
               if (a[(LU_IND0+2)*1+0]>b[(LU_IND0+2)*1+0]) {
                  a[(LU_IND0+2)*1+0] += b[(LU_IND0+2)*1+0]*d[(LU_IND0+2)*1+0];
                  if (32000>10)
                     c[(LU_IND0+2)*1+0] += d[(LU_IND0+2)*1+0]*d[(LU_IND0+2)*1+0];
                  else
                     c[(LU_IND0+2)*1+0] = d[(LU_IND0+2)*1+0]*e[(LU_IND0+2)*1+0]+(real_t) 1.;
               }
               else {
                  b[(LU_IND0+2)*1+0] = a[(LU_IND0+2)*1+0]+e[(LU_IND0+2)*1+0]*e[(LU_IND0+2)*1+0];
                  if (x>(real_t) 0.)
                     c[(LU_IND0+2)*1+0] = a[(LU_IND0+2)*1+0]+d[(LU_IND0+2)*1+0]*d[(LU_IND0+2)*1+0];
                  else
                     c[(LU_IND0+2)*1+0] += e[(LU_IND0+2)*1+0]*e[(LU_IND0+2)*1+0];
               }
               if (a[(LU_IND0+3)*1+0]>b[(LU_IND0+3)*1+0]) {
                  a[(LU_IND0+3)*1+0] += b[(LU_IND0+3)*1+0]*d[(LU_IND0+3)*1+0];
                  if (32000>10)
                     c[(LU_IND0+3)*1+0] += d[(LU_IND0+3)*1+0]*d[(LU_IND0+3)*1+0];
                  else
                     c[(LU_IND0+3)*1+0] = d[(LU_IND0+3)*1+0]*e[(LU_IND0+3)*1+0]+(real_t) 1.;
               }
               else {
                  b[(LU_IND0+3)*1+0] = a[(LU_IND0+3)*1+0]+e[(LU_IND0+3)*1+0]*e[(LU_IND0+3)*1+0];
                  if (x>(real_t) 0.)
                     c[(LU_IND0+3)*1+0] = a[(LU_IND0+3)*1+0]+d[(LU_IND0+3)*1+0]*d[(LU_IND0+3)*1+0];
                  else
                     c[(LU_IND0+3)*1+0] += e[(LU_IND0+3)*1+0]*e[(LU_IND0+3)*1+0];
               }
               if (a[(LU_IND0+4)*1+0]>b[(LU_IND0+4)*1+0]) {
                  a[(LU_IND0+4)*1+0] += b[(LU_IND0+4)*1+0]*d[(LU_IND0+4)*1+0];
                  if (32000>10)
                     c[(LU_IND0+4)*1+0] += d[(LU_IND0+4)*1+0]*d[(LU_IND0+4)*1+0];
                  else
                     c[(LU_IND0+4)*1+0] = d[(LU_IND0+4)*1+0]*e[(LU_IND0+4)*1+0]+(real_t) 1.;
               }
               else {
                  b[(LU_IND0+4)*1+0] = a[(LU_IND0+4)*1+0]+e[(LU_IND0+4)*1+0]*e[(LU_IND0+4)*1+0];
                  if (x>(real_t) 0.)
                     c[(LU_IND0+4)*1+0] = a[(LU_IND0+4)*1+0]+d[(LU_IND0+4)*1+0]*d[(LU_IND0+4)*1+0];
                  else
                     c[(LU_IND0+4)*1+0] += e[(LU_IND0+4)*1+0]*e[(LU_IND0+4)*1+0];
               }
               if (a[(LU_IND0+5)*1+0]>b[(LU_IND0+5)*1+0]) {
                  a[(LU_IND0+5)*1+0] += b[(LU_IND0+5)*1+0]*d[(LU_IND0+5)*1+0];
                  if (32000>10)
                     c[(LU_IND0+5)*1+0] += d[(LU_IND0+5)*1+0]*d[(LU_IND0+5)*1+0];
                  else
                     c[(LU_IND0+5)*1+0] = d[(LU_IND0+5)*1+0]*e[(LU_IND0+5)*1+0]+(real_t) 1.;
               }
               else {
                  b[(LU_IND0+5)*1+0] = a[(LU_IND0+5)*1+0]+e[(LU_IND0+5)*1+0]*e[(LU_IND0+5)*1+0];
                  if (x>(real_t) 0.)
                     c[(LU_IND0+5)*1+0] = a[(LU_IND0+5)*1+0]+d[(LU_IND0+5)*1+0]*d[(LU_IND0+5)*1+0];
                  else
                     c[(LU_IND0+5)*1+0] += e[(LU_IND0+5)*1+0]*e[(LU_IND0+5)*1+0];
               }
               if (a[(LU_IND0+6)*1+0]>b[(LU_IND0+6)*1+0]) {
                  a[(LU_IND0+6)*1+0] += b[(LU_IND0+6)*1+0]*d[(LU_IND0+6)*1+0];
                  if (32000>10)
                     c[(LU_IND0+6)*1+0] += d[(LU_IND0+6)*1+0]*d[(LU_IND0+6)*1+0];
                  else
                     c[(LU_IND0+6)*1+0] = d[(LU_IND0+6)*1+0]*e[(LU_IND0+6)*1+0]+(real_t) 1.;
               }
               else {
                  b[(LU_IND0+6)*1+0] = a[(LU_IND0+6)*1+0]+e[(LU_IND0+6)*1+0]*e[(LU_IND0+6)*1+0];
                  if (x>(real_t) 0.)
                     c[(LU_IND0+6)*1+0] = a[(LU_IND0+6)*1+0]+d[(LU_IND0+6)*1+0]*d[(LU_IND0+6)*1+0];
                  else
                     c[(LU_IND0+6)*1+0] += e[(LU_IND0+6)*1+0]*e[(LU_IND0+6)*1+0];
               }
               if (a[(LU_IND0+7)*1+0]>b[(LU_IND0+7)*1+0]) {
                  a[(LU_IND0+7)*1+0] += b[(LU_IND0+7)*1+0]*d[(LU_IND0+7)*1+0];
                  if (32000>10)
                     c[(LU_IND0+7)*1+0] += d[(LU_IND0+7)*1+0]*d[(LU_IND0+7)*1+0];
                  else
                     c[(LU_IND0+7)*1+0] = d[(LU_IND0+7)*1+0]*e[(LU_IND0+7)*1+0]+(real_t) 1.;
               }
               else {
                  b[(LU_IND0+7)*1+0] = a[(LU_IND0+7)*1+0]+e[(LU_IND0+7)*1+0]*e[(LU_IND0+7)*1+0];
                  if (x>(real_t) 0.)
                     c[(LU_IND0+7)*1+0] = a[(LU_IND0+7)*1+0]+d[(LU_IND0+7)*1+0]*d[(LU_IND0+7)*1+0];
                  else
                     c[(LU_IND0+7)*1+0] += e[(LU_IND0+7)*1+0]*e[(LU_IND0+7)*1+0];
               }
l99854:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
