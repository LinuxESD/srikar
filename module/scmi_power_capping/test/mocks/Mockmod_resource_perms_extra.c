/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "Mockmod_resource_perms_extra.h"

static const char* CMockString_agent_has_protocol_permission = "agent_has_protocol_permission";
static const char* CMockString_agent_has_resource_permission = "agent_has_resource_permission";
static const char* CMockString_agent_id = "agent_id";
static const char* CMockString_message_id = "message_id";
static const char* CMockString_protocol_id = "protocol_id";
static const char* CMockString_resource_id = "resource_id";

typedef struct _CMOCK_agent_has_protocol_permission_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  enum mod_res_perms_permissions ReturnVal;
  uint32_t Expected_agent_id;
  uint32_t Expected_protocol_id;
  char IgnoreArg_agent_id;
  char IgnoreArg_protocol_id;

} CMOCK_agent_has_protocol_permission_CALL_INSTANCE;

typedef struct _CMOCK_agent_has_resource_permission_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  enum mod_res_perms_permissions ReturnVal;
  uint32_t Expected_agent_id;
  uint32_t Expected_protocol_id;
  uint32_t Expected_message_id;
  uint32_t Expected_resource_id;
  char IgnoreArg_agent_id;
  char IgnoreArg_protocol_id;
  char IgnoreArg_message_id;
  char IgnoreArg_resource_id;

} CMOCK_agent_has_resource_permission_CALL_INSTANCE;

static struct Mockmod_resource_perms_extraInstance
{
  char agent_has_protocol_permission_IgnoreBool;
  enum mod_res_perms_permissions agent_has_protocol_permission_FinalReturn;
  char agent_has_protocol_permission_CallbackBool;
  CMOCK_agent_has_protocol_permission_CALLBACK agent_has_protocol_permission_CallbackFunctionPointer;
  int agent_has_protocol_permission_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE agent_has_protocol_permission_CallInstance;
  char agent_has_resource_permission_IgnoreBool;
  enum mod_res_perms_permissions agent_has_resource_permission_FinalReturn;
  char agent_has_resource_permission_CallbackBool;
  CMOCK_agent_has_resource_permission_CALLBACK agent_has_resource_permission_CallbackFunctionPointer;
  int agent_has_resource_permission_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE agent_has_resource_permission_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockmod_resource_perms_extra_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.agent_has_protocol_permission_CallInstance;
  if (Mock.agent_has_protocol_permission_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_agent_has_protocol_permission);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.agent_has_protocol_permission_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.agent_has_resource_permission_CallInstance;
  if (Mock.agent_has_resource_permission_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_agent_has_resource_permission);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.agent_has_resource_permission_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void Mockmod_resource_perms_extra_Init(void)
{
  Mockmod_resource_perms_extra_Destroy();
}

void Mockmod_resource_perms_extra_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

enum mod_res_perms_permissions agent_has_protocol_permission(uint32_t agent_id, uint32_t protocol_id)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_agent_has_protocol_permission_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_agent_has_protocol_permission);
  cmock_call_instance = (CMOCK_agent_has_protocol_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.agent_has_protocol_permission_CallInstance);
  Mock.agent_has_protocol_permission_CallInstance = CMock_Guts_MemNext(Mock.agent_has_protocol_permission_CallInstance);
  if (Mock.agent_has_protocol_permission_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.agent_has_protocol_permission_FinalReturn;
    memcpy((void*)(&Mock.agent_has_protocol_permission_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(enum mod_res_perms_permissions[sizeof(cmock_call_instance->ReturnVal) == sizeof(enum mod_res_perms_permissions) ? 1 : -1])); /* add enum mod_res_perms_permissions to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.agent_has_protocol_permission_CallbackBool &&
      Mock.agent_has_protocol_permission_CallbackFunctionPointer != NULL)
  {
    enum mod_res_perms_permissions cmock_cb_ret = Mock.agent_has_protocol_permission_CallbackFunctionPointer(agent_id, protocol_id, Mock.agent_has_protocol_permission_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_agent_id)
  {
    UNITY_SET_DETAILS(CMockString_agent_has_protocol_permission,CMockString_agent_id);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_agent_id, agent_id, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_protocol_id)
  {
    UNITY_SET_DETAILS(CMockString_agent_has_protocol_permission,CMockString_protocol_id);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_protocol_id, protocol_id, cmock_line, CMockStringMismatch);
  }
  }
  if (Mock.agent_has_protocol_permission_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.agent_has_protocol_permission_CallbackFunctionPointer(agent_id, protocol_id, Mock.agent_has_protocol_permission_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_agent_has_protocol_permission(CMOCK_agent_has_protocol_permission_CALL_INSTANCE* cmock_call_instance, uint32_t agent_id, uint32_t protocol_id);
void CMockExpectParameters_agent_has_protocol_permission(CMOCK_agent_has_protocol_permission_CALL_INSTANCE* cmock_call_instance, uint32_t agent_id, uint32_t protocol_id)
{
  cmock_call_instance->Expected_agent_id = agent_id;
  cmock_call_instance->IgnoreArg_agent_id = 0;
  cmock_call_instance->Expected_protocol_id = protocol_id;
  cmock_call_instance->IgnoreArg_protocol_id = 0;
}

void agent_has_protocol_permission_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, enum mod_res_perms_permissions cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_agent_has_protocol_permission_CALL_INSTANCE));
  CMOCK_agent_has_protocol_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_protocol_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.agent_has_protocol_permission_CallInstance = CMock_Guts_MemChain(Mock.agent_has_protocol_permission_CallInstance, cmock_guts_index);
  Mock.agent_has_protocol_permission_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.agent_has_protocol_permission_IgnoreBool = (char)1;
}

void agent_has_protocol_permission_CMockStopIgnore(void)
{
  if(Mock.agent_has_protocol_permission_IgnoreBool)
    Mock.agent_has_protocol_permission_CallInstance = CMock_Guts_MemNext(Mock.agent_has_protocol_permission_CallInstance);
  Mock.agent_has_protocol_permission_IgnoreBool = (char)0;
}

void agent_has_protocol_permission_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, enum mod_res_perms_permissions cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_agent_has_protocol_permission_CALL_INSTANCE));
  CMOCK_agent_has_protocol_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_protocol_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.agent_has_protocol_permission_CallInstance = CMock_Guts_MemChain(Mock.agent_has_protocol_permission_CallInstance, cmock_guts_index);
  Mock.agent_has_protocol_permission_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void agent_has_protocol_permission_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t agent_id, uint32_t protocol_id, enum mod_res_perms_permissions cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_agent_has_protocol_permission_CALL_INSTANCE));
  CMOCK_agent_has_protocol_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_protocol_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.agent_has_protocol_permission_CallInstance = CMock_Guts_MemChain(Mock.agent_has_protocol_permission_CallInstance, cmock_guts_index);
  Mock.agent_has_protocol_permission_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_agent_has_protocol_permission(cmock_call_instance, agent_id, protocol_id);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(enum mod_res_perms_permissions[sizeof(cmock_to_return) == sizeof(enum mod_res_perms_permissions) ? 1 : -1])); /* add enum mod_res_perms_permissions to :treat_as_array if this causes an error */
}

void agent_has_protocol_permission_AddCallback(CMOCK_agent_has_protocol_permission_CALLBACK Callback)
{
  Mock.agent_has_protocol_permission_IgnoreBool = (char)0;
  Mock.agent_has_protocol_permission_CallbackBool = (char)1;
  Mock.agent_has_protocol_permission_CallbackFunctionPointer = Callback;
}

void agent_has_protocol_permission_Stub(CMOCK_agent_has_protocol_permission_CALLBACK Callback)
{
  Mock.agent_has_protocol_permission_IgnoreBool = (char)0;
  Mock.agent_has_protocol_permission_CallbackBool = (char)0;
  Mock.agent_has_protocol_permission_CallbackFunctionPointer = Callback;
}

void agent_has_protocol_permission_CMockIgnoreArg_agent_id(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_agent_has_protocol_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_protocol_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.agent_has_protocol_permission_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_agent_id = 1;
}

void agent_has_protocol_permission_CMockIgnoreArg_protocol_id(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_agent_has_protocol_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_protocol_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.agent_has_protocol_permission_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_protocol_id = 1;
}

enum mod_res_perms_permissions agent_has_resource_permission(uint32_t agent_id, uint32_t protocol_id, uint32_t message_id, uint32_t resource_id)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_agent_has_resource_permission);
  cmock_call_instance = (CMOCK_agent_has_resource_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.agent_has_resource_permission_CallInstance);
  Mock.agent_has_resource_permission_CallInstance = CMock_Guts_MemNext(Mock.agent_has_resource_permission_CallInstance);
  if (Mock.agent_has_resource_permission_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.agent_has_resource_permission_FinalReturn;
    memcpy((void*)(&Mock.agent_has_resource_permission_FinalReturn), (void*)(&cmock_call_instance->ReturnVal),
         sizeof(enum mod_res_perms_permissions[sizeof(cmock_call_instance->ReturnVal) == sizeof(enum mod_res_perms_permissions) ? 1 : -1])); /* add enum mod_res_perms_permissions to :treat_as_array if this causes an error */
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.agent_has_resource_permission_CallbackBool &&
      Mock.agent_has_resource_permission_CallbackFunctionPointer != NULL)
  {
    enum mod_res_perms_permissions cmock_cb_ret = Mock.agent_has_resource_permission_CallbackFunctionPointer(agent_id, protocol_id, message_id, resource_id, Mock.agent_has_resource_permission_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_agent_id)
  {
    UNITY_SET_DETAILS(CMockString_agent_has_resource_permission,CMockString_agent_id);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_agent_id, agent_id, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_protocol_id)
  {
    UNITY_SET_DETAILS(CMockString_agent_has_resource_permission,CMockString_protocol_id);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_protocol_id, protocol_id, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_message_id)
  {
    UNITY_SET_DETAILS(CMockString_agent_has_resource_permission,CMockString_message_id);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_message_id, message_id, cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_resource_id)
  {
    UNITY_SET_DETAILS(CMockString_agent_has_resource_permission,CMockString_resource_id);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_resource_id, resource_id, cmock_line, CMockStringMismatch);
  }
  }
  if (Mock.agent_has_resource_permission_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.agent_has_resource_permission_CallbackFunctionPointer(agent_id, protocol_id, message_id, resource_id, Mock.agent_has_resource_permission_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_agent_has_resource_permission(CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance, uint32_t agent_id, uint32_t protocol_id, uint32_t message_id, uint32_t resource_id);
void CMockExpectParameters_agent_has_resource_permission(CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance, uint32_t agent_id, uint32_t protocol_id, uint32_t message_id, uint32_t resource_id)
{
  cmock_call_instance->Expected_agent_id = agent_id;
  cmock_call_instance->IgnoreArg_agent_id = 0;
  cmock_call_instance->Expected_protocol_id = protocol_id;
  cmock_call_instance->IgnoreArg_protocol_id = 0;
  cmock_call_instance->Expected_message_id = message_id;
  cmock_call_instance->IgnoreArg_message_id = 0;
  cmock_call_instance->Expected_resource_id = resource_id;
  cmock_call_instance->IgnoreArg_resource_id = 0;
}

void agent_has_resource_permission_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, enum mod_res_perms_permissions cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_agent_has_resource_permission_CALL_INSTANCE));
  CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_resource_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.agent_has_resource_permission_CallInstance = CMock_Guts_MemChain(Mock.agent_has_resource_permission_CallInstance, cmock_guts_index);
  Mock.agent_has_resource_permission_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.agent_has_resource_permission_IgnoreBool = (char)1;
}

void agent_has_resource_permission_CMockStopIgnore(void)
{
  if(Mock.agent_has_resource_permission_IgnoreBool)
    Mock.agent_has_resource_permission_CallInstance = CMock_Guts_MemNext(Mock.agent_has_resource_permission_CallInstance);
  Mock.agent_has_resource_permission_IgnoreBool = (char)0;
}

void agent_has_resource_permission_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, enum mod_res_perms_permissions cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_agent_has_resource_permission_CALL_INSTANCE));
  CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_resource_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.agent_has_resource_permission_CallInstance = CMock_Guts_MemChain(Mock.agent_has_resource_permission_CallInstance, cmock_guts_index);
  Mock.agent_has_resource_permission_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void agent_has_resource_permission_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, uint32_t agent_id, uint32_t protocol_id, uint32_t message_id, uint32_t resource_id, enum mod_res_perms_permissions cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_agent_has_resource_permission_CALL_INSTANCE));
  CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_resource_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.agent_has_resource_permission_CallInstance = CMock_Guts_MemChain(Mock.agent_has_resource_permission_CallInstance, cmock_guts_index);
  Mock.agent_has_resource_permission_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_agent_has_resource_permission(cmock_call_instance, agent_id, protocol_id, message_id, resource_id);
  memcpy((void*)(&cmock_call_instance->ReturnVal), (void*)(&cmock_to_return),
         sizeof(enum mod_res_perms_permissions[sizeof(cmock_to_return) == sizeof(enum mod_res_perms_permissions) ? 1 : -1])); /* add enum mod_res_perms_permissions to :treat_as_array if this causes an error */
}

void agent_has_resource_permission_AddCallback(CMOCK_agent_has_resource_permission_CALLBACK Callback)
{
  Mock.agent_has_resource_permission_IgnoreBool = (char)0;
  Mock.agent_has_resource_permission_CallbackBool = (char)1;
  Mock.agent_has_resource_permission_CallbackFunctionPointer = Callback;
}

void agent_has_resource_permission_Stub(CMOCK_agent_has_resource_permission_CALLBACK Callback)
{
  Mock.agent_has_resource_permission_IgnoreBool = (char)0;
  Mock.agent_has_resource_permission_CallbackBool = (char)0;
  Mock.agent_has_resource_permission_CallbackFunctionPointer = Callback;
}

void agent_has_resource_permission_CMockIgnoreArg_agent_id(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_resource_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.agent_has_resource_permission_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_agent_id = 1;
}

void agent_has_resource_permission_CMockIgnoreArg_protocol_id(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_resource_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.agent_has_resource_permission_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_protocol_id = 1;
}

void agent_has_resource_permission_CMockIgnoreArg_message_id(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_resource_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.agent_has_resource_permission_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_message_id = 1;
}

void agent_has_resource_permission_CMockIgnoreArg_resource_id(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_agent_has_resource_permission_CALL_INSTANCE* cmock_call_instance = (CMOCK_agent_has_resource_permission_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.agent_has_resource_permission_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_resource_id = 1;
}

