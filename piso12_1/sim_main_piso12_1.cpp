/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vpiso12_1.h"
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
        extern "C" int temp_load[1024];
        extern "C" int port_load;
        extern "C" int temp_Data_pr[1024];
        extern "C" int port_Data_pr;
        extern "C" int temp_Data_sr[1024];
        extern "C" int port_Data_sr;
        extern "C" int foopiso12_1(int,int);
        
        void int2arrpiso12_1(int  num, int array[], int n)
        {
            for (int i = 0; i < n && num>=0; i++)
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intpiso12_1(int array[],int n)
        {
            int i,k=0;
            for (i = 0; i < n; i++)
                k = 2 * k + array[i];
            return k;
        }
        
        int foopiso12_1(int init,int count)
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vpiso12_1* piso12_1[1024];
            count--;
            if (init==0)
            {
                piso12_1[count]=new Vpiso12_1{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============piso12_1 : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("clk=%d\n", piso12_1[count] ->clk);
				printf("load=%d\n", piso12_1[count] ->load);
				printf("Data_pr=%d\n", piso12_1[count] ->Data_pr);
				printf("Data_sr=%d\n", piso12_1[count] ->Data_sr);
				piso12_1[count]->clk = arr2intpiso12_1(temp_clk, port_clk);
				piso12_1[count]->load = arr2intpiso12_1(temp_load, port_load);
				piso12_1[count]->Data_pr = arr2intpiso12_1(temp_Data_pr, port_Data_pr);
				piso12_1[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("clk=%d\n", piso12_1[count] ->clk);
				printf("load=%d\n", piso12_1[count] ->load);
				printf("Data_pr=%d\n", piso12_1[count] ->Data_pr);
				printf("Data_sr=%d\n", piso12_1[count] ->Data_sr);
				int2arrpiso12_1(piso12_1[count] -> Data_sr, temp_Data_sr, port_Data_sr);

            }
            return 0;
        }