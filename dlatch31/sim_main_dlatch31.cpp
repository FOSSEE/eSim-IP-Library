/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

        
        #include <memory>
        #include <verilated.h>
        #include "Vdlatch31.h"
        #include <stdio.h>
        #include <stdio.h>
        #include <fstream>
        #include <stdlib.h>
        #include <string>
        #include <iostream>
        #include <cstring>
        using namespace std;
        
        extern "C" int temp_d[1024];
        extern "C" int port_d;
        extern "C" int temp_en[1024];
        extern "C" int port_en;
        extern "C" int temp_rstn[1024];
        extern "C" int port_rstn;
        extern "C" int temp_q[1024];
        extern "C" int port_q;
        extern "C" int foodlatch31(int,int);
        
        void int2arrdlatch31(int  num, int array[], int n)
        {
            for (int i = 0; i < n && num>=0; i++)
            {
                array[n-i-1] = num % 2;
                num /= 2;
                }
        }
        int arr2intdlatch31(int array[],int n)
        {
            int i,k=0;
            for (i = 0; i < n; i++)
                k = 2 * k + array[i];
            return k;
        }
        
        int foodlatch31(int init,int count)
        {
            static VerilatedContext* contextp = new VerilatedContext;
            static Vdlatch31* dlatch31[1024];
            count--;
            if (init==0)
            {
                dlatch31[count]=new Vdlatch31{contextp};
                contextp->traceEverOn(true);
            }
            else
            {
                contextp->timeInc(1);
                printf("=============dlatch31 : New Iteration===========");
                printf("\nInstance : %d\n",count);
                printf("\nInside foo before eval.....\n");
				printf("d=%d\n", dlatch31[count] ->d);
				printf("en=%d\n", dlatch31[count] ->en);
				printf("rstn=%d\n", dlatch31[count] ->rstn);
				printf("q=%d\n", dlatch31[count] ->q);
				dlatch31[count]->d = arr2intdlatch31(temp_d, port_d);
				dlatch31[count]->en = arr2intdlatch31(temp_en, port_en);
				dlatch31[count]->rstn = arr2intdlatch31(temp_rstn, port_rstn);
				dlatch31[count]->eval();

                printf("\nInside foo after eval.....\n");
				printf("d=%d\n", dlatch31[count] ->d);
				printf("en=%d\n", dlatch31[count] ->en);
				printf("rstn=%d\n", dlatch31[count] ->rstn);
				printf("q=%d\n", dlatch31[count] ->q);
				int2arrdlatch31(dlatch31[count] -> q, temp_q, port_q);

            }
            return 0;
        }