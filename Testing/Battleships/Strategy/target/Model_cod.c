
/* Coder .c file for system Model */
/* Program generated by Cadvanced 4.3.0  */
#define XSCT_CADVANCED

#define SCT_VERSION_4_3
#include "coderucf.h"
#include "Model.ifc"
#include "Model_cod.h"
#ifdef CODERINFO
#include "coderinfo.h"
#endif

/* *** SignalId *** */
tSDLTypeInfo ySDL_SignalId = {type_SDL_SignalId, 0, 0 T_SDL_OPFUNCS(0)
  T_SDL_EXTRA_VALUE T_SDL_Names("SignalId")};

/* *** SIGNAL FinishSimulation *** */
static tSDLSignalParaInfo fSDL_FinishSimulation[] = {
  {(tSDLTypeInfo *)&ySDL_SDL_Integer, xOffsetOf(yPDef_FinishSimulation,
    Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_FinishSimulation, Param2)}
};
tSDLSignalInfo ySDL_FinishSimulation = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_FinishSimulation) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("FinishSimulation"), fSDL_FinishSimulation, 2};

/* *** SIGNAL OrderSpeedRequest *** */
static tSDLSignalParaInfo fSDL_OrderSpeedRequest[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderSpeedRequest, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderSpeedRequest, Param2)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1L_tFactorAcceleration,
    xOffsetOf(yPDef_OrderSpeedRequest, Param3)}
};
tSDLSignalInfo ySDL_OrderSpeedRequest = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderSpeedRequest) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderSpeedRequest"), fSDL_OrderSpeedRequest, 3};

/* *** SIGNAL OrderTurnRequest *** */
static tSDLSignalParaInfo fSDL_OrderTurnRequest[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderTurnRequest, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderTurnRequest, Param2)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_0X_tHeadingChange,
    xOffsetOf(yPDef_OrderTurnRequest, Param3)}
};
tSDLSignalInfo ySDL_OrderTurnRequest = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderTurnRequest) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderTurnRequest"), fSDL_OrderTurnRequest, 3};

/* *** SIGNAL OrderFireRequest *** */
static tSDLSignalParaInfo fSDL_OrderFireRequest[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderFireRequest, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderFireRequest, Param2)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_0V_tNameWeaponry,
    xOffsetOf(yPDef_OrderFireRequest, Param3)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_19_tStringShotsList,
    xOffsetOf(yPDef_OrderFireRequest, Param4)}
};
tSDLSignalInfo ySDL_OrderFireRequest = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderFireRequest) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderFireRequest"), fSDL_OrderFireRequest, 4};

/* *** SIGNAL InitDataComplete *** */
tSDLSignalInfo ySDL_InitDataComplete = {type_SDL_Signal, 0,
  (xptrint)sizeof(XSIGNALHEADERTYPE) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("InitDataComplete"), 0, 0};

/* *** SIGNAL StartSimulation *** */
static tSDLSignalParaInfo fSDL_StartSimulation[] = {
  {(tSDLTypeInfo *)&ySDL_SDL_Integer, xOffsetOf(yPDef_StartSimulation, Param1)}
};
tSDLSignalInfo ySDL_StartSimulation = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_StartSimulation) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("StartSimulation"), fSDL_StartSimulation, 1};

/* *** SIGNAL DestroyShip *** */
static tSDLSignalParaInfo fSDL_DestroyShip[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId, xOffsetOf(yPDef_DestroyShip,
    Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_DestroyShip, Param2)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_0W_tNameShip,
    xOffsetOf(yPDef_DestroyShip, Param3)}
};
tSDLSignalInfo ySDL_DestroyShip = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_DestroyShip) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("DestroyShip"), fSDL_DestroyShip, 3};

/* *** SIGNAL OrderSpeedResponse *** */
static tSDLSignalParaInfo fSDL_OrderSpeedResponse[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderSpeedResponse, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderSpeedResponse, Param2)}
};
tSDLSignalInfo ySDL_OrderSpeedResponse = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderSpeedResponse) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderSpeedResponse"), fSDL_OrderSpeedResponse, 2};

/* *** SIGNAL OrderSpeedReject *** */
static tSDLSignalParaInfo fSDL_OrderSpeedReject[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderSpeedReject, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderSpeedReject, Param2)}
};
tSDLSignalInfo ySDL_OrderSpeedReject = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderSpeedReject) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderSpeedReject"), fSDL_OrderSpeedReject, 2};

/* *** SIGNAL OrderTurnResponse *** */
static tSDLSignalParaInfo fSDL_OrderTurnResponse[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderTurnResponse, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderTurnResponse, Param2)}
};
tSDLSignalInfo ySDL_OrderTurnResponse = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderTurnResponse) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderTurnResponse"), fSDL_OrderTurnResponse, 2};

/* *** SIGNAL OrderTurnReject *** */
static tSDLSignalParaInfo fSDL_OrderTurnReject[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderTurnReject, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderTurnReject, Param2)}
};
tSDLSignalInfo ySDL_OrderTurnReject = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderTurnReject) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderTurnReject"), fSDL_OrderTurnReject, 2};

/* *** SIGNAL OrderFireResponse *** */
static tSDLSignalParaInfo fSDL_OrderFireResponse[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderFireResponse, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderFireResponse, Param2)}
};
tSDLSignalInfo ySDL_OrderFireResponse = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderFireResponse) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderFireResponse"), fSDL_OrderFireResponse, 2};

/* *** SIGNAL OrderFireReject *** */
static tSDLSignalParaInfo fSDL_OrderFireReject[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1M_tShipId,
    xOffsetOf(yPDef_OrderFireReject, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_OrderFireReject, Param2)}
};
tSDLSignalInfo ySDL_OrderFireReject = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_OrderFireReject) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("OrderFireReject"), fSDL_OrderFireReject, 2};

/* *** SIGNAL ShipsCurrentState *** */
static tSDLSignalParaInfo fSDL_ShipsCurrentState[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_ShipsCurrentState, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_17_tStringShipCurrentState,
    xOffsetOf(yPDef_ShipsCurrentState, Param2)}
};
tSDLSignalInfo ySDL_ShipsCurrentState = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_ShipsCurrentState) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("ShipsCurrentState"), fSDL_ShipsCurrentState, 2};

/* *** SIGNAL VisibleShip *** */
static tSDLSignalParaInfo fSDL_VisibleShip[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_VisibleShip, Param1)},
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_18_tStringEnemyShip,
    xOffsetOf(yPDef_VisibleShip, Param2)}
};
tSDLSignalInfo ySDL_VisibleShip = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_VisibleShip) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("VisibleShip"), fSDL_VisibleShip, 2};

/* *** SIGNAL StrategyVictory *** */
static tSDLSignalParaInfo fSDL_StrategyVictory[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_StrategyVictory, Param1)}
};
tSDLSignalInfo ySDL_StrategyVictory = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_StrategyVictory) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("StrategyVictory"), fSDL_StrategyVictory, 1};

/* *** SIGNAL StrategyLose *** */
static tSDLSignalParaInfo fSDL_StrategyLose[] = {
  {(tSDLTypeInfo *)&ySDL_z_BasicTypes_1N_tStrategyId,
    xOffsetOf(yPDef_StrategyLose, Param1)}
};
tSDLSignalInfo ySDL_StrategyLose = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_StrategyLose) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("StrategyLose"), fSDL_StrategyLose, 1};

/* *** SIGNAL messageLog *** */
static tSDLSignalParaInfo fSDL_messageLog[] = {
  {(tSDLTypeInfo *)&ySDL_SDL_Charstring, xOffsetOf(yPDef_messageLog, Param1)}
};
tSDLSignalInfo ySDL_messageLog = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_messageLog) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("messageLog"), fSDL_messageLog, 1};

/* *** SIGNAL messageError *** */
static tSDLSignalParaInfo fSDL_messageError[] = {
  {(tSDLTypeInfo *)&ySDL_SDL_Charstring, xOffsetOf(yPDef_messageError, Param1)}
};
tSDLSignalInfo ySDL_messageError = {type_SDL_Signal, 0,
  (xptrint)sizeof(yPDef_messageError) T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE
  T_Signal_SDL_Names("messageError"), fSDL_messageError, 1};

/* *** SIGNAL booms *** */
static tSDLSignalParaInfo fSDL_booms[] = {
  {(tSDLTypeInfo *)&ySDL_SDL_Integer, xOffsetOf(yPDef_booms, Param1)}
};
tSDLSignalInfo ySDL_booms = {type_SDL_Signal, 0, (xptrint)sizeof(yPDef_booms)
  T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE T_Signal_SDL_Names("booms"), fSDL_booms,
  1};

/* *** SIGNAL found *** */
static tSDLSignalParaInfo fSDL_found[] = {
  {(tSDLTypeInfo *)&ySDL_SDL_Integer, xOffsetOf(yPDef_found, Param1)},
  {(tSDLTypeInfo *)&ySDL_SDL_Integer, xOffsetOf(yPDef_found, Param2)}
};
tSDLSignalInfo ySDL_found = {type_SDL_Signal, 0, (xptrint)sizeof(yPDef_found)
  T_SDL_OPFUNCS(0) T_SDL_EXTRA_VALUE T_Signal_SDL_Names("found"), fSDL_found,
  2};

/* *** List of signals *** */
tSDLSignalInfo * xSignalList[] = {&ySDL_FinishSimulation,
  &ySDL_OrderSpeedRequest, &ySDL_OrderTurnRequest, &ySDL_OrderFireRequest,
  &ySDL_InitDataComplete, &ySDL_StartSimulation, &ySDL_DestroyShip,
  &ySDL_OrderSpeedResponse, &ySDL_OrderSpeedReject, &ySDL_OrderTurnResponse,
  &ySDL_OrderTurnReject, &ySDL_OrderFireResponse, &ySDL_OrderFireReject,
  &ySDL_ShipsCurrentState, &ySDL_VisibleShip, &ySDL_StrategyVictory,
  &ySDL_StrategyLose, &ySDL_messageLog, &ySDL_messageError, &ySDL_booms,
  &ySDL_found, 0};
xSignalIdNode xSignalIdList[] = {&ySigR_z_BasicTypes_06_FinishSimulation,
  &ySigR_z_BasicTypes_07_OrderSpeedRequest,
  &ySigR_z_BasicTypes_08_OrderTurnRequest,
  &ySigR_z_BasicTypes_09_OrderFireRequest,
  &ySigR_z_BasicTypes_04_InitDataComplete,
  &ySigR_z_BasicTypes_05_StartSimulation, &ySigR_z_BasicTypes_0A_DestroyShip,
  &ySigR_z_BasicTypes_0D_OrderSpeedResponse,
  &ySigR_z_BasicTypes_0E_OrderSpeedReject,
  &ySigR_z_BasicTypes_0F_OrderTurnResponse,
  &ySigR_z_BasicTypes_0G_OrderTurnReject,
  &ySigR_z_BasicTypes_0H_OrderFireResponse,
  &ySigR_z_BasicTypes_0I_OrderFireReject,
  &ySigR_z_BasicTypes_0J_ShipsCurrentState, &ySigR_z_BasicTypes_0K_VisibleShip,
  &ySigR_z_BasicTypes_0B_StrategyVictory, &ySigR_z_BasicTypes_0C_StrategyLose,
  &ySigR_z_BasicTypes_0L_messageLog, &ySigR_z_BasicTypes_0M_messageError,
  &ySigR_z_BasicTypes_0O_booms, &ySigR_z_BasicTypes_0N_found, 0};
