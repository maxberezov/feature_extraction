real_t s1351(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    induction pointer recognition
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 799999; nl += 1) {
         real_t * restrict A = a;
         real_t * restrict B = b;
         real_t * restrict C = c;
         {
            int i;
loop_s1351:            LU_NUB0 = 32000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               *A = *B+*C;
               A++;
               B++;
               C++;
l99789:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               *A = *B+*C;
               A++;
               B++;
               C++;
               *A = *B+*C;
               A++;
               B++;
               C++;
               *A = *B+*C;
               A++;
               B++;
               C++;
               *A = *B+*C;
               A++;
               B++;
               C++;
               *A = *B+*C;
               A++;
               B++;
               C++;
               *A = *B+*C;
               A++;
               B++;
               C++;
               *A = *B+*C;
               A++;
               B++;
               C++;
               *A = *B+*C;
               A++;
               B++;
               C++;
l99788:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
