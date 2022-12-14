/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vdff32.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_D[1024];
        extern "C" int port_D;
        extern "C" int temp_Clk[1024];
        extern "C" int port_Clk;
        extern "C" int temp_Reset[1024];
        extern "C" int port_Reset;
        extern "C" int temp_Q[1024];
        extern "C" int port_Q;
        extern "C" int temp_Qbar[1024];
        extern "C" int port_Qbar;
        extern "C" int foodff32(int,int);
        
        void int2arrdff32(int  num, int array[], int n)
        {
            for (int i = 0; i < n && num>=0; i++)
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intdff32(int array[],int n)
        {
            int i,k=0;
            for (i = 0; i < n; i++)
                k = 2 * k + array[i];
            return k;
        }
        
        int foodff32(int init,int count)
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vdff32* dff32[1024];
            count--;
            if (init==0)
            {
                dff32[count]=new Vdff32{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============dff32 : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("D=%d\n", dff32[count] ->D);
				printf("Clk=%d\n", dff32[count] ->Clk);
				printf("Reset=%d\n", dff32[count] ->Reset);
				printf("Q=%d\n", dff32[count] ->Q);
				printf("Qbar=%d\n", dff32[count] ->Qbar);
				dff32[count]->D = arr2intdff32(temp_D, port_D);
				dff32[count]->Clk = arr2intdff32(temp_Clk, port_Clk);
				dff32[count]->Reset = arr2intdff32(temp_Reset, port_Reset);
				dff32[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("D=%d\n", dff32[count] ->D);
				printf("Clk=%d\n", dff32[count] ->Clk);
				printf("Reset=%d\n", dff32[count] ->Reset);
				printf("Q=%d\n", dff32[count] ->Q);
				printf("Qbar=%d\n", dff32[count] ->Qbar);
				int2arrdff32(dff32[count] -> Q, temp_Q, port_Q);
				int2arrdff32(dff32[count] -> Qbar, temp_Qbar, port_Qbar);

            }
            return 0;
        }