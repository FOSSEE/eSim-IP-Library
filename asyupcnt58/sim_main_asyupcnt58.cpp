/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vasyupcnt58.h"
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
        extern "C" int temp_q[1024];
        extern "C" int port_q;
        extern "C" int temp_qb[1024];
        extern "C" int port_qb;
        extern "C" int fooasyupcnt58(int,int);
        
        void int2arrasyupcnt58(int  num, int array[], int n)
        {
            for (int i = 0; i < n && num>=0; i++)
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intasyupcnt58(int array[],int n)
        {
            int i,k=0;
            for (i = 0; i < n; i++)
                k = 2 * k + array[i];
            return k;
        }
        
        int fooasyupcnt58(int init,int count)
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vasyupcnt58* asyupcnt58[1024];
            count--;
            if (init==0)
            {
                asyupcnt58[count]=new Vasyupcnt58{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============asyupcnt58 : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", asyupcnt58[count] ->clk);
				printf("rst=%d\n", asyupcnt58[count] ->rst);
				printf("q=%d\n", asyupcnt58[count] ->q);
				printf("qb=%d\n", asyupcnt58[count] ->qb);
				asyupcnt58[count]->clk = arr2intasyupcnt58(temp_clk, port_clk);
				asyupcnt58[count]->rst = arr2intasyupcnt58(temp_rst, port_rst);
				asyupcnt58[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", asyupcnt58[count] ->clk);
				printf("rst=%d\n", asyupcnt58[count] ->rst);
				printf("q=%d\n", asyupcnt58[count] ->q);
				printf("qb=%d\n", asyupcnt58[count] ->qb);
				int2arrasyupcnt58(asyupcnt58[count] -> q, temp_q, port_q);
				int2arrasyupcnt58(asyupcnt58[count] -> qb, temp_qb, port_qb);

            }
            return 0;
        }