#pragma once
/******************************************************************************/
/* File   : ServiceSchM.hpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceSchM.hpp"
#include "CfgServiceSchM.hpp"
#include "ServiceSchM_core.hpp"
#include "infServiceSchM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSchM:
      INTERFACES_EXPORTED_SCHM
   ,  public abstract_module
   ,  public class_ServiceSchM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceSchM_Type* lptrConst = (ConstServiceSchM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SCHM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SCHM_CONST,       SCHM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SCHM_CONFIG_DATA, SCHM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SCHM_CODE) DeInitFunction (void);
      FUNC(void, SCHM_CODE) MainFunction   (void);
      SCHM_CORE_FUNCTIONALITIES

      FUNC(void, SCHM_CODE) Start          (void);
      FUNC(void, SCHM_CODE) StartTiming    (void);
      FUNC(void, SCHM_CODE) ServiceSchM_1ms       (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceSchM, SCHM_VAR) ServiceSchM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

