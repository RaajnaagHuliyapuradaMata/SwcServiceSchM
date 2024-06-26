/******************************************************************************/
/* File   : ServiceSchM.cpp                                                   */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceSchM.hpp"
#include "infServiceSchM_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICESCHM_AR_RELEASE_VERSION_MAJOR                                   4
#define SERVICESCHM_AR_RELEASE_VERSION_MINOR                                   3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICESCHM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICESCHM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICESCHM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICESCHM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceSchM, SERVICESCHM_VAR) ServiceSchM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICESCHM_CONST,       SERVICESCHM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESCHM_CONFIG_DATA, SERVICESCHM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceSchM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceSchM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceSchM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceSchM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceSchM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::DeInitFunction(
   void
){
#if(STD_ON == ServiceSchM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceSchM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceSchM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::MainFunction(
   void
){
#if(STD_ON == ServiceSchM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceSchM_InitCheck)
   }
   else{
#if(STD_ON == ServiceSchM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SERVICESCHM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::Start(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::StartTiming(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::ActMainFunction(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::McalCancelMainFunction(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::Enter(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::Exit(
   void
){
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::ServiceSchM_1ms(void){
   for(
      uint8 lu8Index = 0;
            lu8Index < lptrConst->u8SizeServiceSchMClients_1ms;
            lu8Index ++
   ){
      lptrConst->aptrServiceSchMClients_1ms[lu8Index]->MainFunction();
   }
}

FUNC(void, SERVICESCHM_CODE) module_ServiceSchM::ServiceSchM_25ms(void){
   for(
      uint8 lu8Index = 0;
            lu8Index < lptrConst->u8SizeServiceSchMClients_25ms;
            lu8Index ++
   ){
      lptrConst->aptrServiceSchMClients_25ms[lu8Index]->MainFunction();
   }
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

