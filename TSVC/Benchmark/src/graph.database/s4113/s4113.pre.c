real_t s4113(struct args_t *func_args)
{
   
   //    indirect addressing
   //    indirect addressing on rhs and lhs
   //    gather and scatter is required
   
   int * restrict ip = func_args->arg_info;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s4113:
            for(i = 0; i <= 31999; i += 1)
               a[ip[i]] = b[ip[i]]+c[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
