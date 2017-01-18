// +build !minimal

#pragma once

#ifndef GO_QTSCXML_H
#define GO_QTSCXML_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct QtScxml_PackedString { char* data; long long len; };
struct QtScxml_PackedList { void* data; long long len; };
char QScxmlCppDataModel_In(void* ptr, char* stateName);
char QScxmlCppDataModel_HasScxmlProperty(void* ptr, char* name);
char QScxmlCppDataModel_HasScxmlPropertyDefault(void* ptr, char* name);
void* QScxmlCppDataModel_ScxmlEvent(void* ptr);
void* QScxmlCppDataModel_ScxmlProperty(void* ptr, char* name);
void* QScxmlCppDataModel_ScxmlPropertyDefault(void* ptr, char* name);
void QScxmlCppDataModel_SetScxmlEvent(void* ptr, void* event);
char QScxmlCppDataModel_SetScxmlProperty(void* ptr, char* name, void* value, char* context);
char QScxmlCppDataModel_SetScxmlPropertyDefault(void* ptr, char* name, void* value, char* context);
void QScxmlCppDataModel_TimerEvent(void* ptr, void* event);
void QScxmlCppDataModel_TimerEventDefault(void* ptr, void* event);
void QScxmlCppDataModel_ChildEvent(void* ptr, void* event);
void QScxmlCppDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlCppDataModel_ConnectNotify(void* ptr, void* sign);
void QScxmlCppDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlCppDataModel_CustomEvent(void* ptr, void* event);
void QScxmlCppDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlCppDataModel_DeleteLater(void* ptr);
void QScxmlCppDataModel_DeleteLaterDefault(void* ptr);
void QScxmlCppDataModel_DisconnectNotify(void* ptr, void* sign);
void QScxmlCppDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
char QScxmlCppDataModel_Event(void* ptr, void* e);
char QScxmlCppDataModel_EventDefault(void* ptr, void* e);
char QScxmlCppDataModel_EventFilter(void* ptr, void* watched, void* event);
char QScxmlCppDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlCppDataModel_MetaObject(void* ptr);
void* QScxmlCppDataModel_MetaObjectDefault(void* ptr);
char QScxmlDataModel_HasScxmlProperty(void* ptr, char* name);
void* QScxmlDataModel_ScxmlProperty(void* ptr, char* name);
void QScxmlDataModel_SetScxmlEvent(void* ptr, void* event);
char QScxmlDataModel_SetScxmlProperty(void* ptr, char* name, void* value, char* context);
void QScxmlDataModel_SetStateMachine(void* ptr, void* stateMachine);
void* QScxmlDataModel_StateMachine(void* ptr);
void QScxmlDataModel_ConnectStateMachineChanged(void* ptr);
void QScxmlDataModel_DisconnectStateMachineChanged(void* ptr);
void QScxmlDataModel_StateMachineChanged(void* ptr, void* stateMachine);
void QScxmlDataModel_TimerEvent(void* ptr, void* event);
void QScxmlDataModel_TimerEventDefault(void* ptr, void* event);
void QScxmlDataModel_ChildEvent(void* ptr, void* event);
void QScxmlDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlDataModel_ConnectNotify(void* ptr, void* sign);
void QScxmlDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlDataModel_CustomEvent(void* ptr, void* event);
void QScxmlDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlDataModel_DeleteLater(void* ptr);
void QScxmlDataModel_DeleteLaterDefault(void* ptr);
void QScxmlDataModel_DisconnectNotify(void* ptr, void* sign);
void QScxmlDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
char QScxmlDataModel_Event(void* ptr, void* e);
char QScxmlDataModel_EventDefault(void* ptr, void* e);
char QScxmlDataModel_EventFilter(void* ptr, void* watched, void* event);
char QScxmlDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlDataModel_MetaObject(void* ptr);
void* QScxmlDataModel_MetaObjectDefault(void* ptr);
void* QScxmlEcmaScriptDataModel_NewQScxmlEcmaScriptDataModel(void* parent);
void* QScxmlEcmaScriptDataModel_Engine(void* ptr);
char QScxmlEcmaScriptDataModel_HasScxmlProperty(void* ptr, char* name);
char QScxmlEcmaScriptDataModel_HasScxmlPropertyDefault(void* ptr, char* name);
void* QScxmlEcmaScriptDataModel_ScxmlProperty(void* ptr, char* name);
void* QScxmlEcmaScriptDataModel_ScxmlPropertyDefault(void* ptr, char* name);
void QScxmlEcmaScriptDataModel_SetEngine(void* ptr, void* engine);
void QScxmlEcmaScriptDataModel_SetScxmlEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_SetScxmlEventDefault(void* ptr, void* event);
char QScxmlEcmaScriptDataModel_SetScxmlProperty(void* ptr, char* name, void* value, char* context);
char QScxmlEcmaScriptDataModel_SetScxmlPropertyDefault(void* ptr, char* name, void* value, char* context);
void QScxmlEcmaScriptDataModel_TimerEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_TimerEventDefault(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_ChildEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_ConnectNotify(void* ptr, void* sign);
void QScxmlEcmaScriptDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlEcmaScriptDataModel_CustomEvent(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlEcmaScriptDataModel_DeleteLater(void* ptr);
void QScxmlEcmaScriptDataModel_DeleteLaterDefault(void* ptr);
void QScxmlEcmaScriptDataModel_DisconnectNotify(void* ptr, void* sign);
void QScxmlEcmaScriptDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
char QScxmlEcmaScriptDataModel_Event(void* ptr, void* e);
char QScxmlEcmaScriptDataModel_EventDefault(void* ptr, void* e);
char QScxmlEcmaScriptDataModel_EventFilter(void* ptr, void* watched, void* event);
char QScxmlEcmaScriptDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlEcmaScriptDataModel_MetaObject(void* ptr);
void* QScxmlEcmaScriptDataModel_MetaObjectDefault(void* ptr);
void* QScxmlError_NewQScxmlError();
void* QScxmlError_NewQScxmlError3(void* other);
void* QScxmlError_NewQScxmlError2(char* fileName, int line, int column, char* description);
int QScxmlError_Column(void* ptr);
struct QtScxml_PackedString QScxmlError_Description(void* ptr);
struct QtScxml_PackedString QScxmlError_FileName(void* ptr);
char QScxmlError_IsValid(void* ptr);
int QScxmlError_Line(void* ptr);
struct QtScxml_PackedString QScxmlError_ToString(void* ptr);
void QScxmlError_DestroyQScxmlError(void* ptr);
void* QScxmlEvent_NewQScxmlEvent();
void* QScxmlEvent_NewQScxmlEvent2(void* other);
void QScxmlEvent_Clear(void* ptr);
void* QScxmlEvent_Data(void* ptr);
int QScxmlEvent_Delay(void* ptr);
struct QtScxml_PackedString QScxmlEvent_ErrorMessage(void* ptr);
long long QScxmlEvent_EventType(void* ptr);
struct QtScxml_PackedString QScxmlEvent_InvokeId(void* ptr);
char QScxmlEvent_IsErrorEvent(void* ptr);
struct QtScxml_PackedString QScxmlEvent_Name(void* ptr);
struct QtScxml_PackedString QScxmlEvent_Origin(void* ptr);
struct QtScxml_PackedString QScxmlEvent_OriginType(void* ptr);
struct QtScxml_PackedString QScxmlEvent_ScxmlType(void* ptr);
struct QtScxml_PackedString QScxmlEvent_SendId(void* ptr);
void QScxmlEvent_SetData(void* ptr, void* data);
void QScxmlEvent_SetDelay(void* ptr, int delayInMiliSecs);
void QScxmlEvent_SetErrorMessage(void* ptr, char* message);
void QScxmlEvent_SetEventType(void* ptr, long long ty);
void QScxmlEvent_SetInvokeId(void* ptr, char* invokeid);
void QScxmlEvent_SetName(void* ptr, char* name);
void QScxmlEvent_SetOrigin(void* ptr, char* origin);
void QScxmlEvent_SetOriginType(void* ptr, char* origintype);
void QScxmlEvent_SetSendId(void* ptr, char* sendid);
void QScxmlEvent_DestroyQScxmlEvent(void* ptr);
char QScxmlEventFilter_Handle(void* ptr, void* event, void* stateMachine);
void QScxmlEventFilter_DestroyQScxmlEventFilter(void* ptr);
void QScxmlEventFilter_DestroyQScxmlEventFilterDefault(void* ptr);
void* QScxmlNullDataModel_NewQScxmlNullDataModel(void* parent);
char QScxmlNullDataModel_HasScxmlProperty(void* ptr, char* name);
char QScxmlNullDataModel_HasScxmlPropertyDefault(void* ptr, char* name);
void* QScxmlNullDataModel_ScxmlProperty(void* ptr, char* name);
void* QScxmlNullDataModel_ScxmlPropertyDefault(void* ptr, char* name);
void QScxmlNullDataModel_SetScxmlEvent(void* ptr, void* event);
void QScxmlNullDataModel_SetScxmlEventDefault(void* ptr, void* event);
char QScxmlNullDataModel_SetScxmlProperty(void* ptr, char* name, void* value, char* context);
char QScxmlNullDataModel_SetScxmlPropertyDefault(void* ptr, char* name, void* value, char* context);
void QScxmlNullDataModel_TimerEvent(void* ptr, void* event);
void QScxmlNullDataModel_TimerEventDefault(void* ptr, void* event);
void QScxmlNullDataModel_ChildEvent(void* ptr, void* event);
void QScxmlNullDataModel_ChildEventDefault(void* ptr, void* event);
void QScxmlNullDataModel_ConnectNotify(void* ptr, void* sign);
void QScxmlNullDataModel_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlNullDataModel_CustomEvent(void* ptr, void* event);
void QScxmlNullDataModel_CustomEventDefault(void* ptr, void* event);
void QScxmlNullDataModel_DeleteLater(void* ptr);
void QScxmlNullDataModel_DeleteLaterDefault(void* ptr);
void QScxmlNullDataModel_DisconnectNotify(void* ptr, void* sign);
void QScxmlNullDataModel_DisconnectNotifyDefault(void* ptr, void* sign);
char QScxmlNullDataModel_Event(void* ptr, void* e);
char QScxmlNullDataModel_EventDefault(void* ptr, void* e);
char QScxmlNullDataModel_EventFilter(void* ptr, void* watched, void* event);
char QScxmlNullDataModel_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlNullDataModel_MetaObject(void* ptr);
void* QScxmlNullDataModel_MetaObjectDefault(void* ptr);
void* QScxmlParser_NewQScxmlParser(void* reader);
void QScxmlParser_AddError(void* ptr, char* msg);
struct QtScxml_PackedList QScxmlParser_Errors(void* ptr);
struct QtScxml_PackedString QScxmlParser_FileName(void* ptr);
void QScxmlParser_InstantiateDataModel(void* ptr, void* stateMachine);
void* QScxmlParser_InstantiateStateMachine(void* ptr);
void QScxmlParser_Parse(void* ptr);
long long QScxmlParser_QtMode(void* ptr);
void QScxmlParser_SetFileName(void* ptr, char* fileName);
void QScxmlParser_SetQtMode(void* ptr, long long mode);
void QScxmlParser_DestroyQScxmlParser(void* ptr);
void* QScxmlParser_errors_atList(void* ptr, int i);
char QScxmlStateMachine_IsInitialized(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_ActiveStateNames(void* ptr, char compress);
void QScxmlStateMachine_CancelDelayedEvent(void* ptr, char* sendId);
long long QScxmlStateMachine_DataBinding(void* ptr);
void* QScxmlStateMachine_DataModel(void* ptr);
void QScxmlStateMachine_ConnectDataModelChanged(void* ptr);
void QScxmlStateMachine_DisconnectDataModelChanged(void* ptr);
void QScxmlStateMachine_DataModelChanged(void* ptr, void* model);
void QScxmlStateMachine_ConnectEventOccurred(void* ptr);
void QScxmlStateMachine_DisconnectEventOccurred(void* ptr);
void QScxmlStateMachine_EventOccurred(void* ptr, void* event);
void QScxmlStateMachine_ConnectExternalEventOccurred(void* ptr);
void QScxmlStateMachine_DisconnectExternalEventOccurred(void* ptr);
void QScxmlStateMachine_ExternalEventOccurred(void* ptr, void* event);
void QScxmlStateMachine_ConnectFinished(void* ptr);
void QScxmlStateMachine_DisconnectFinished(void* ptr);
void QScxmlStateMachine_Finished(void* ptr);
void* QScxmlStateMachine_QScxmlStateMachine_FromData(void* data, char* fileName);
void* QScxmlStateMachine_QScxmlStateMachine_FromFile(char* fileName);
struct QtScxml_PackedString QScxmlStateMachine_QScxmlStateMachine_GenerateSessionId(char* prefix);
char QScxmlStateMachine_Init(void* ptr);
char QScxmlStateMachine_InitDefault(void* ptr);
void QScxmlStateMachine_ConnectInitializedChanged(void* ptr);
void QScxmlStateMachine_DisconnectInitializedChanged(void* ptr);
void QScxmlStateMachine_InitializedChanged(void* ptr, char initialized);
char QScxmlStateMachine_IsActive(void* ptr, char* scxmlStateName);
char QScxmlStateMachine_IsDispatchableTarget(void* ptr, char* target);
char QScxmlStateMachine_IsInvoked(void* ptr);
char QScxmlStateMachine_IsRunning(void* ptr);
void QScxmlStateMachine_ConnectLog(void* ptr);
void QScxmlStateMachine_DisconnectLog(void* ptr);
void QScxmlStateMachine_Log(void* ptr, char* label, char* msg);
struct QtScxml_PackedString QScxmlStateMachine_Name(void* ptr);
struct QtScxml_PackedList QScxmlStateMachine_ParseErrors(void* ptr);
void QScxmlStateMachine_ConnectReachedStableState(void* ptr);
void QScxmlStateMachine_DisconnectReachedStableState(void* ptr);
void QScxmlStateMachine_ReachedStableState(void* ptr);
void QScxmlStateMachine_ConnectRunningChanged(void* ptr);
void QScxmlStateMachine_DisconnectRunningChanged(void* ptr);
void QScxmlStateMachine_RunningChanged(void* ptr, char running);
void* QScxmlStateMachine_ScxmlEventFilter(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_SessionId(void* ptr);
void QScxmlStateMachine_SetDataModel(void* ptr, void* model);
void QScxmlStateMachine_SetRunning(void* ptr, char running);
void QScxmlStateMachine_SetScxmlEventFilter(void* ptr, void* newFilter);
void QScxmlStateMachine_SetSessionId(void* ptr, char* id);
void QScxmlStateMachine_Start(void* ptr);
void QScxmlStateMachine_StartDefault(void* ptr);
struct QtScxml_PackedString QScxmlStateMachine_StateNames(void* ptr, char compress);
void QScxmlStateMachine_Stop(void* ptr);
void QScxmlStateMachine_StopDefault(void* ptr);
void QScxmlStateMachine_SubmitEvent(void* ptr, void* event);
void QScxmlStateMachine_SubmitEvent2(void* ptr, char* eventName);
void QScxmlStateMachine_SubmitEvent3(void* ptr, char* eventName, void* data);
void* QScxmlStateMachine_parseErrors_atList(void* ptr, int i);
void QScxmlStateMachine_TimerEvent(void* ptr, void* event);
void QScxmlStateMachine_TimerEventDefault(void* ptr, void* event);
void QScxmlStateMachine_ChildEvent(void* ptr, void* event);
void QScxmlStateMachine_ChildEventDefault(void* ptr, void* event);
void QScxmlStateMachine_ConnectNotify(void* ptr, void* sign);
void QScxmlStateMachine_ConnectNotifyDefault(void* ptr, void* sign);
void QScxmlStateMachine_CustomEvent(void* ptr, void* event);
void QScxmlStateMachine_CustomEventDefault(void* ptr, void* event);
void QScxmlStateMachine_DeleteLater(void* ptr);
void QScxmlStateMachine_DeleteLaterDefault(void* ptr);
void QScxmlStateMachine_DisconnectNotify(void* ptr, void* sign);
void QScxmlStateMachine_DisconnectNotifyDefault(void* ptr, void* sign);
char QScxmlStateMachine_Event(void* ptr, void* e);
char QScxmlStateMachine_EventDefault(void* ptr, void* e);
char QScxmlStateMachine_EventFilter(void* ptr, void* watched, void* event);
char QScxmlStateMachine_EventFilterDefault(void* ptr, void* watched, void* event);
void* QScxmlStateMachine_MetaObject(void* ptr);
void* QScxmlStateMachine_MetaObjectDefault(void* ptr);

#ifdef __cplusplus
}
#endif

#endif