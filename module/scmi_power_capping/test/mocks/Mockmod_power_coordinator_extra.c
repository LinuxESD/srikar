/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "Mockmod_power_coordinator_extra.h"

static const char* CMockString_domain_id = "domain_id";
static const char* CMockString_get_coordinator_period = "get_coordinator_period";
static const char* CMockString_period = "period";
static const char* CMockString_set_coordinator_period = "set_coordinator_period";

typedef struct _CMOCK_get_coordinator_period_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  fwk_id_t Expected_domain_id;
  uint32_t* Expected_period;
  int Expected_period_Depth;
  char ReturnThruPtr_period_Used;
  uint32_t* ReturnThruPtr_period_Val;
  size_t ReturnThruPtr_period_Size;
  char IgnoreArg_domain_id;
  char IgnoreArg_period;

} CMOCK_get_coordinator_period_CALL_INSTANCE;

typedef struct _CMOCK_set_coordinator_period_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  char ExpectAnyArgsBool;
  int ReturnVal;
  fwk_id_t Expected_domain_id;
  uint32_t Expected_period;
  char IgnoreArg_domain_id;
  char IgnoreArg_period;

} CMOCK_set_coordinator_period_CALL_INSTANCE;

static struct Mockmod_power_coordinator_extraInstance
{
  char get_coordinator_period_IgnoreBool;
  int get_coordinator_period_FinalReturn;
  char get_coordinator_period_CallbackBool;
  CMOCK_get_coordinator_period_CALLBACK get_coordinator_period_CallbackFunctionPointer;
  int get_coordinator_period_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE get_coordinator_period_CallInstance;
  char set_coordinator_period_IgnoreBool;
  int set_coordinator_period_FinalReturn;
  char set_coordinator_period_CallbackBool;
  CMOCK_set_coordinator_period_CALLBACK set_coordinator_period_CallbackFunctionPointer;
  int set_coordinator_period_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE set_coordinator_period_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mockmod_power_coordinator_extra_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_MEM_INDEX_TYPE call_instance;
  call_instance = Mock.get_coordinator_period_CallInstance;
  if (Mock.get_coordinator_period_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_get_coordinator_period);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.get_coordinator_period_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
  call_instance = Mock.set_coordinator_period_CallInstance;
  if (Mock.set_coordinator_period_IgnoreBool)
    call_instance = CMOCK_GUTS_NONE;
  if (CMOCK_GUTS_NONE != call_instance)
  {
    UNITY_SET_DETAIL(CMockString_set_coordinator_period);
    UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
  }
  if (Mock.set_coordinator_period_CallbackFunctionPointer != NULL)
  {
    call_instance = CMOCK_GUTS_NONE;
    (void)call_instance;
  }
}

void Mockmod_power_coordinator_extra_Init(void)
{
  Mockmod_power_coordinator_extra_Destroy();
}

void Mockmod_power_coordinator_extra_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

int get_coordinator_period(fwk_id_t domain_id, uint32_t* period)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_get_coordinator_period);
  cmock_call_instance = (CMOCK_get_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.get_coordinator_period_CallInstance);
  Mock.get_coordinator_period_CallInstance = CMock_Guts_MemNext(Mock.get_coordinator_period_CallInstance);
  if (Mock.get_coordinator_period_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.get_coordinator_period_FinalReturn;
    Mock.get_coordinator_period_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.get_coordinator_period_CallbackBool &&
      Mock.get_coordinator_period_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.get_coordinator_period_CallbackFunctionPointer(domain_id, period, Mock.get_coordinator_period_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_domain_id)
  {
    UNITY_SET_DETAILS(CMockString_get_coordinator_period,CMockString_domain_id);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_domain_id), (void*)(&domain_id), sizeof(fwk_id_t), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_period)
  {
    UNITY_SET_DETAILS(CMockString_get_coordinator_period,CMockString_period);
    if (cmock_call_instance->Expected_period == NULL)
      { UNITY_TEST_ASSERT_NULL(period, cmock_line, CMockStringExpNULL); }
    else
      { UNITY_TEST_ASSERT_EQUAL_HEX32_ARRAY(cmock_call_instance->Expected_period, period, cmock_call_instance->Expected_period_Depth, cmock_line, CMockStringMismatch); }
  }
  }
  if (Mock.get_coordinator_period_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.get_coordinator_period_CallbackFunctionPointer(domain_id, period, Mock.get_coordinator_period_CallbackCalls++);
  }
  if (cmock_call_instance->ReturnThruPtr_period_Used)
  {
    UNITY_TEST_ASSERT_NOT_NULL(period, cmock_line, CMockStringPtrIsNULL);
    memcpy((void*)period, (void*)cmock_call_instance->ReturnThruPtr_period_Val,
      cmock_call_instance->ReturnThruPtr_period_Size);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_get_coordinator_period(CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance, fwk_id_t domain_id, uint32_t* period, int period_Depth);
void CMockExpectParameters_get_coordinator_period(CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance, fwk_id_t domain_id, uint32_t* period, int period_Depth)
{
  memcpy((void*)(&cmock_call_instance->Expected_domain_id), (void*)(&domain_id),
         sizeof(fwk_id_t[sizeof(domain_id) == sizeof(fwk_id_t) ? 1 : -1])); /* add fwk_id_t to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_domain_id = 0;
  cmock_call_instance->Expected_period = period;
  cmock_call_instance->Expected_period_Depth = period_Depth;
  cmock_call_instance->IgnoreArg_period = 0;
  cmock_call_instance->ReturnThruPtr_period_Used = 0;
}

void get_coordinator_period_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_coordinator_period_CALL_INSTANCE));
  CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_coordinator_period_CallInstance = CMock_Guts_MemChain(Mock.get_coordinator_period_CallInstance, cmock_guts_index);
  Mock.get_coordinator_period_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.get_coordinator_period_IgnoreBool = (char)1;
}

void get_coordinator_period_CMockStopIgnore(void)
{
  if(Mock.get_coordinator_period_IgnoreBool)
    Mock.get_coordinator_period_CallInstance = CMock_Guts_MemNext(Mock.get_coordinator_period_CallInstance);
  Mock.get_coordinator_period_IgnoreBool = (char)0;
}

void get_coordinator_period_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_coordinator_period_CALL_INSTANCE));
  CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_coordinator_period_CallInstance = CMock_Guts_MemChain(Mock.get_coordinator_period_CallInstance, cmock_guts_index);
  Mock.get_coordinator_period_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void get_coordinator_period_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, fwk_id_t domain_id, uint32_t* period, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_coordinator_period_CALL_INSTANCE));
  CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_coordinator_period_CallInstance = CMock_Guts_MemChain(Mock.get_coordinator_period_CallInstance, cmock_guts_index);
  Mock.get_coordinator_period_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_get_coordinator_period(cmock_call_instance, domain_id, period, 1);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void get_coordinator_period_AddCallback(CMOCK_get_coordinator_period_CALLBACK Callback)
{
  Mock.get_coordinator_period_IgnoreBool = (char)0;
  Mock.get_coordinator_period_CallbackBool = (char)1;
  Mock.get_coordinator_period_CallbackFunctionPointer = Callback;
}

void get_coordinator_period_Stub(CMOCK_get_coordinator_period_CALLBACK Callback)
{
  Mock.get_coordinator_period_IgnoreBool = (char)0;
  Mock.get_coordinator_period_CallbackBool = (char)0;
  Mock.get_coordinator_period_CallbackFunctionPointer = Callback;
}

void get_coordinator_period_CMockExpectWithArrayAndReturn(UNITY_LINE_TYPE cmock_line, fwk_id_t domain_id, uint32_t* period, int period_Depth, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_get_coordinator_period_CALL_INSTANCE));
  CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.get_coordinator_period_CallInstance = CMock_Guts_MemChain(Mock.get_coordinator_period_CallInstance, cmock_guts_index);
  Mock.get_coordinator_period_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_get_coordinator_period(cmock_call_instance, domain_id, period, period_Depth);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void get_coordinator_period_CMockReturnMemThruPtr_period(UNITY_LINE_TYPE cmock_line, uint32_t* period, size_t cmock_size)
{
  CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.get_coordinator_period_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringPtrPreExp);
  cmock_call_instance->ReturnThruPtr_period_Used = 1;
  cmock_call_instance->ReturnThruPtr_period_Val = period;
  cmock_call_instance->ReturnThruPtr_period_Size = cmock_size;
}

void get_coordinator_period_CMockIgnoreArg_domain_id(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.get_coordinator_period_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_domain_id = 1;
}

void get_coordinator_period_CMockIgnoreArg_period(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_get_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_get_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.get_coordinator_period_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_period = 1;
}

int set_coordinator_period(fwk_id_t domain_id, uint32_t period)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_set_coordinator_period_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_set_coordinator_period);
  cmock_call_instance = (CMOCK_set_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.set_coordinator_period_CallInstance);
  Mock.set_coordinator_period_CallInstance = CMock_Guts_MemNext(Mock.set_coordinator_period_CallInstance);
  if (Mock.set_coordinator_period_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.set_coordinator_period_FinalReturn;
    Mock.set_coordinator_period_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  if (!Mock.set_coordinator_period_CallbackBool &&
      Mock.set_coordinator_period_CallbackFunctionPointer != NULL)
  {
    int cmock_cb_ret = Mock.set_coordinator_period_CallbackFunctionPointer(domain_id, period, Mock.set_coordinator_period_CallbackCalls++);
    UNITY_CLR_DETAILS();
    return cmock_cb_ret;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->ExpectAnyArgsBool)
  {
  if (!cmock_call_instance->IgnoreArg_domain_id)
  {
    UNITY_SET_DETAILS(CMockString_set_coordinator_period,CMockString_domain_id);
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_domain_id), (void*)(&domain_id), sizeof(fwk_id_t), cmock_line, CMockStringMismatch);
  }
  if (!cmock_call_instance->IgnoreArg_period)
  {
    UNITY_SET_DETAILS(CMockString_set_coordinator_period,CMockString_period);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_period, period, cmock_line, CMockStringMismatch);
  }
  }
  if (Mock.set_coordinator_period_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.set_coordinator_period_CallbackFunctionPointer(domain_id, period, Mock.set_coordinator_period_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_set_coordinator_period(CMOCK_set_coordinator_period_CALL_INSTANCE* cmock_call_instance, fwk_id_t domain_id, uint32_t period);
void CMockExpectParameters_set_coordinator_period(CMOCK_set_coordinator_period_CALL_INSTANCE* cmock_call_instance, fwk_id_t domain_id, uint32_t period)
{
  memcpy((void*)(&cmock_call_instance->Expected_domain_id), (void*)(&domain_id),
         sizeof(fwk_id_t[sizeof(domain_id) == sizeof(fwk_id_t) ? 1 : -1])); /* add fwk_id_t to :treat_as_array if this causes an error */
  cmock_call_instance->IgnoreArg_domain_id = 0;
  cmock_call_instance->Expected_period = period;
  cmock_call_instance->IgnoreArg_period = 0;
}

void set_coordinator_period_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_set_coordinator_period_CALL_INSTANCE));
  CMOCK_set_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.set_coordinator_period_CallInstance = CMock_Guts_MemChain(Mock.set_coordinator_period_CallInstance, cmock_guts_index);
  Mock.set_coordinator_period_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.set_coordinator_period_IgnoreBool = (char)1;
}

void set_coordinator_period_CMockStopIgnore(void)
{
  if(Mock.set_coordinator_period_IgnoreBool)
    Mock.set_coordinator_period_CallInstance = CMock_Guts_MemNext(Mock.set_coordinator_period_CallInstance);
  Mock.set_coordinator_period_IgnoreBool = (char)0;
}

void set_coordinator_period_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_set_coordinator_period_CALL_INSTANCE));
  CMOCK_set_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.set_coordinator_period_CallInstance = CMock_Guts_MemChain(Mock.set_coordinator_period_CallInstance, cmock_guts_index);
  Mock.set_coordinator_period_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  cmock_call_instance->ReturnVal = cmock_to_return;
  cmock_call_instance->ExpectAnyArgsBool = (char)1;
}

void set_coordinator_period_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, fwk_id_t domain_id, uint32_t period, int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_set_coordinator_period_CALL_INSTANCE));
  CMOCK_set_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.set_coordinator_period_CallInstance = CMock_Guts_MemChain(Mock.set_coordinator_period_CallInstance, cmock_guts_index);
  Mock.set_coordinator_period_IgnoreBool = (char)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ExpectAnyArgsBool = (char)0;
  CMockExpectParameters_set_coordinator_period(cmock_call_instance, domain_id, period);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

void set_coordinator_period_AddCallback(CMOCK_set_coordinator_period_CALLBACK Callback)
{
  Mock.set_coordinator_period_IgnoreBool = (char)0;
  Mock.set_coordinator_period_CallbackBool = (char)1;
  Mock.set_coordinator_period_CallbackFunctionPointer = Callback;
}

void set_coordinator_period_Stub(CMOCK_set_coordinator_period_CALLBACK Callback)
{
  Mock.set_coordinator_period_IgnoreBool = (char)0;
  Mock.set_coordinator_period_CallbackBool = (char)0;
  Mock.set_coordinator_period_CallbackFunctionPointer = Callback;
}

void set_coordinator_period_CMockIgnoreArg_domain_id(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_set_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.set_coordinator_period_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_domain_id = 1;
}

void set_coordinator_period_CMockIgnoreArg_period(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_set_coordinator_period_CALL_INSTANCE* cmock_call_instance = (CMOCK_set_coordinator_period_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.set_coordinator_period_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_period = 1;
}

