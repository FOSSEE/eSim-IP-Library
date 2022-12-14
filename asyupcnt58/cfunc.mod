/* This is cfunc.mod file auto generated by gen_con_info.py
        Developed by Sumanto Kar at IIT Bombay */

                
        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include "sim_main_asyupcnt58.h"

        
void cm_asyupcnt58(ARGS) 
{
	Digital_State_t *_op_q, *_op_q_old;
	Digital_State_t *_op_qb, *_op_qb_old;

    static int inst_count=0;
    int count=0;
        
    if(INIT)
    {
        inst_count++;
        PARAM(instance_id)=inst_count;
        fooasyupcnt58(0,inst_count);
        /* Allocate storage for output ports and set the load for input ports */

        
        port_clk=PORT_SIZE(clk);

        port_rst=PORT_SIZE(rst);

        port_q=PORT_SIZE(q);

        port_qb=PORT_SIZE(qb);
		cm_event_alloc(0,4*sizeof(Digital_State_t));
		cm_event_alloc(1,4*sizeof(Digital_State_t));
		/* set the load for input ports. */
		int Ii;
		for(Ii=0;Ii<PORT_SIZE(clk);Ii++)
		{
			LOAD(clk[Ii])=PARAM(input_load); 
		}
		for(Ii=0;Ii<PORT_SIZE(rst);Ii++)
		{
			LOAD(rst[Ii])=PARAM(input_load); 
		}

		/*Retrieve Storage for output*/
		_op_q = _op_q_old = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_qb = _op_qb_old = (Digital_State_t *) cm_event_get_ptr(1,0);


	}
	else
	{
		_op_q = (Digital_State_t *) cm_event_get_ptr(0,0);
		_op_q_old = (Digital_State_t *) cm_event_get_ptr(0,1);
		_op_qb = (Digital_State_t *) cm_event_get_ptr(1,1);
		_op_qb_old = (Digital_State_t *) cm_event_get_ptr(1,2);
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
    for(Ii=0;Ii<PORT_SIZE(rst);Ii++)
    {
        if( INPUT_STATE(rst[Ii])==ZERO )
        {
            temp_rst[Ii]=0;            }
        else
        {
            temp_rst[Ii]=1;
        }
            }
	fooasyupcnt58(1,count);

	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(q);Ii++)
    {
        if(temp_q[Ii]==0)
        {
            _op_q[Ii]=ZERO;
            }
        else if(temp_q[Ii]==1)
        {
            _op_q[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(q[Ii]) = _op_q[Ii];
            }
        else if(_op_q[Ii] != _op_q_old[Ii])
        {
            OUTPUT_STATE(q[Ii]) = _op_q[Ii];
            OUTPUT_DELAY(q[Ii]) = ((_op_q[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(q[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(q[Ii]) = STRONG;
    }
	/* Scheduling event and processing them */
    for(Ii=0;Ii<PORT_SIZE(qb);Ii++)
    {
        if(temp_qb[Ii]==0)
        {
            _op_qb[Ii]=ZERO;
            }
        else if(temp_qb[Ii]==1)
        {
            _op_qb[Ii]=ONE;
            }
        else
        {
            printf("Unknown value\n");
                }

        if(ANALYSIS == DC)
        {
            OUTPUT_STATE(qb[Ii]) = _op_qb[Ii];
            }
        else if(_op_qb[Ii] != _op_qb_old[Ii])
        {
            OUTPUT_STATE(qb[Ii]) = _op_qb[Ii];
            OUTPUT_DELAY(qb[Ii]) = ((_op_qb[Ii] == ZERO) ? PARAM(fall_delay) : PARAM(rise_delay));
            }
        else
        {
            OUTPUT_CHANGED(qb[Ii]) = FALSE;
            }
        OUTPUT_STRENGTH(qb[Ii]) = STRONG;
    }

}