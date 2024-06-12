#include "Std_Types.hpp"

#include "types.hpp"
#include "SchM.hpp"
#include "Os.hpp"

void SchM_Deinit(void){
}

void SchM_Init(void){
}

void SchM_Enter_Det_Monitoring(void){
  __DI();
}

void SchM_Exit_Det_Monitoring(void){
  __EI();
}

void SchM_Enter_CanTrcv_30_Tja1043_CANTRCV_30_TJA1043_EXCLUSIVE_AREA_0(void){
  __DI();
}

void SchM_Exit_CanTrcv_30_Tja1043_CANTRCV_30_TJA1043_EXCLUSIVE_AREA_0(void){
  __EI();
}

