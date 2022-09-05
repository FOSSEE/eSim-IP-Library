/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_count23.h"

        
void cm_count23(ARGS) 
{
	Digital_State_t *_op_counter, *_op_counter_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {
        inst_count++;
        PARAM(instance_id)=inst_count;
        foocount23(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_clk=PORT_SIZE(clk);

        port_reset=PORT_SIZE(reset);

        port_counter=PORT_SIZE(counter);
		cm_event_alloc(0,3*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
		{
			LOAD(clk[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(reset);Ii++)
		{
			LOAD(reset[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_counter = _op_counter_old = (Digital_State_t *) cm_event_get_ptr(0,0);


	}
	else
	{
		_op_counter = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_counter_old = (Digital_State_t *) cm_event_get_ptr(0,1);
	}

	//Formating data for sending it to client
	int Ii;
	count=(int)PARAM(instance_id);

    for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
    {
        if( INPUT_STATE(clk[Ii])==ZERO )
        {
            temp_clk[Ii]=0;            }
        else
        {
            temp_clk[Ii]=1;
        }
            }
    for(Ii=0;Ii<PORT_SIZE(reset);Ii++)
    {
        if( INPUT_STATE(reset[Ii])==ZERO )
        {
            temp_reset[Ii]=0;            }
        else
        {
            temp_reset[Ii]=1;
        }
            }
	foocount23(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(counter);Ii++)
    {
        if(temp_counter[Ii]==0)
        {
            _op_counter[Ii]=ZERO;
            }
        else if(temp_counter[Ii]==1)
        {
            _op_counter[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(counter[Ii]) = _op_counter[Ii];
            }
        else if(_op_counter[Ii] != _op_counter_old[Ii])
        {
            OUTPUT_STATE(counter[Ii]) = _op_counter[Ii];
            OUTPUT_DELAY(counter[Ii]) = ((_op_counter[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(counter[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(counter[Ii]) = STRONG;
    }

}