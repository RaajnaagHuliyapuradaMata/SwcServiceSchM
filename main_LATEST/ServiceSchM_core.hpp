#pragma once
/******************************************************************************/
/* File   : ServiceSchM_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceSchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SCHM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, SCHM_CODE) Enter              (void);                 \
              FUNC(void, SCHM_CODE) Exit               (void);                 \
              FUNC(void, SCHM_CODE) ActMainFunction    (void);                 \
              FUNC(void, SCHM_CODE) McalCancelMainFunction (void);                 \

#define SCHM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, SCHM_CODE) Enter              (void) = 0;             \
      virtual FUNC(void, SCHM_CODE) Exit               (void) = 0;             \
      virtual FUNC(void, SCHM_CODE) ActMainFunction    (void) = 0;             \
      virtual FUNC(void, SCHM_CODE) McalCancelMainFunction (void) = 0;             \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceSchM_Functionality{
   public:
      SCHM_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
