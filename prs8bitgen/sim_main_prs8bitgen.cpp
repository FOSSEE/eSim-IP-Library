/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vprs8bitgen.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_clk[1024];
        extern "C" int port_clk;
        extern "C" int temp_rst[1024];
        extern "C" int port_rst;
        extern "C" int temp_out[1024];
        extern "C" int port_out;
        extern "C" int fooprs8bitgen(int,int);
        
        void int2arrprs8bitgen(int  num, int array[], int n)
        {
            for (int i = 0; i < n && num>=0; i++)
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intprs8bitgen(int array[],int n)
        {
            int i,k=0;
            for (i = 0; i < n; i++)
                k = 2 * k + array[i];
            return k;
        }
        
        int fooprs8bitgen(int init,int count)
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vprs8bitgen* prs8bitgen[1024];
            count--;
            if (init==0)
            {
                prs8bitgen[count]=new Vprs8bitgen{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============prs8bitgen : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", prs8bitgen[count] ->clk);
				printf("rst=%d\n", prs8bitgen[count] ->rst);
				printf("out=%d\n", prs8bitgen[count] ->out);
				prs8bitgen[count]->clk = arr2intprs8bitgen(temp_clk, port_clk);
				prs8bitgen[count]->rst = arr2intprs8bitgen(temp_rst, port_rst);
				prs8bitgen[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", prs8bitgen[count] ->clk);
				printf("rst=%d\n", prs8bitgen[count] ->rst);
				printf("out=%d\n", prs8bitgen[count] ->out);
				int2arrprs8bitgen(prs8bitgen[count] -> out, temp_out, port_out);

            }
            return 0;
        }