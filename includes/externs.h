#pragma once
#include <queue>
#include <mutex>
#include <condition_variable>
#include <vector>
#include "datastructs.h"

//the mutexes
extern std::mutex mutex_order_inQ;
extern std::mutex mutex_order_outQ;

//the condition variable
extern std::condition_variable cv_order_inQ;

//when true, baker can quit when there 
//are no more orders in order_in_Q
extern bool b_WaiterIsFinished;

//where orders are stored
extern std::queue<ORDER> order_in_Q;
extern std::vector<ORDER> order_out_Vector;
