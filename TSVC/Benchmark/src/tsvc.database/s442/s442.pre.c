real_t s442(struct args_t *func_args)
{
   
   //    non-logical if's
   //    computed goto
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 49999; nl += 1) {
         {
            int i;
loop_s442:
            for(i = 0; i <= 31999; i += 1) {
               if (indx[i]==1) goto _switch_3_case_1;
               if (indx[i]==2) goto _switch_3_case_2;
               if (indx[i]==3) goto _switch_3_case_3;
               if (indx[i]==4) goto _switch_3_case_4;
_break_3:               ;
L15:               a[i] += b[i]*b[i];
               goto L50;
_switch_3_case_4:               ;
L40:               a[i] += e[i]*e[i];
               goto L50;
_switch_3_case_3:               ;
L30:               a[i] += d[i]*d[i];
               goto L50;
_switch_3_case_2:               ;
L20:               a[i] += c[i]*c[i];
               goto L50;
_switch_3_case_1:               ;
               goto L15;
L50:               ;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
