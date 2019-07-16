#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t2949616159;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2606371118;
// System.Collections.Generic.List`1<System.Byte>[]
struct List_1U5BU5D_t3017264731;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t4078445860;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t3363058862;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_t1351088715;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct ReadOnlyCollection_1_t2346872663;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;
// UnityEngine.Networking.ChannelQOS
struct ChannelQOS_t1890984120;
// UnityEngine.Networking.ChannelQOS[]
struct ChannelQOSU5BU5D_t3224530281;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t4173981269;
// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_t1246935692;
// UnityEngine.Networking.ConnectionConfig[]
struct ConnectionConfigU5BU5D_t3548107960;
// UnityEngine.Networking.HostTopology
struct HostTopology_t4059263395;
// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_t761087795;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* ChannelQOS_t1890984120_il2cpp_TypeInfo_var;
extern RuntimeClass* ConnectionConfigInternal_t1246935692_il2cpp_TypeInfo_var;
extern RuntimeClass* ConnectionConfig_t4173981269_il2cpp_TypeInfo_var;
extern RuntimeClass* Enum_t4135868527_il2cpp_TypeInfo_var;
extern RuntimeClass* HostTopologyInternal_t761087795_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t3962448610_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t1351088715_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3363058862_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t4078445860_il2cpp_TypeInfo_var;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern RuntimeClass* QosType_t3566496866_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1276777634;
extern String_t* _stringLiteral1442255268;
extern String_t* _stringLiteral1563464412;
extern String_t* _stringLiteral1575624523;
extern String_t* _stringLiteral1735740363;
extern String_t* _stringLiteral1819605569;
extern String_t* _stringLiteral1848928535;
extern String_t* _stringLiteral1996371512;
extern String_t* _stringLiteral2280338569;
extern String_t* _stringLiteral2633051098;
extern String_t* _stringLiteral2828656510;
extern String_t* _stringLiteral3080010154;
extern String_t* _stringLiteral3288140609;
extern String_t* _stringLiteral335420074;
extern String_t* _stringLiteral3563946363;
extern String_t* _stringLiteral3675259609;
extern String_t* _stringLiteral3778735433;
extern String_t* _stringLiteral414500564;
extern String_t* _stringLiteral584173395;
extern String_t* _stringLiteral727852980;
extern String_t* _stringLiteral782611174;
extern const RuntimeMethod* ChannelQOS__ctor_m3213155130_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_GetChannel_m2188161631_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_GetSharedOrderChannels_m1826991094_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig_Validate_m2712188470_RuntimeMethod_var;
extern const RuntimeMethod* ConnectionConfig__ctor_m2640243122_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2814761745_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3004041484_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m349679386_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m491916196_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m1808369071_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2439261711_RuntimeMethod_var;
extern const RuntimeMethod* HostTopology_GetSpecialConnectionConfig_m1011380843_RuntimeMethod_var;
extern const RuntimeMethod* HostTopology__ctor_m284550224_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1960376679_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m423166763_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AsReadOnly_m3149855852_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m1327152933_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m4246513235_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m4168264895_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m441991155_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m607530126_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1422624963_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1480908111_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3550276212_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1179646797_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2000198085_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m977601184_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_AddHost_m236682671_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_CheckTopology_m750760940_RuntimeMethod_var;
extern const RuntimeMethod* NetworkTransport_Send_m1813092975_RuntimeMethod_var;
extern const RuntimeType* QosType_t3566496866_0_0_0_var;
extern const uint32_t ChannelQOS__ctor_m3213155130_MetadataUsageId;
extern const uint32_t ConnectionConfigInternal__ctor_m151495501_MetadataUsageId;
extern const uint32_t ConnectionConfig_AddChannel_m2791320185_MetadataUsageId;
extern const uint32_t ConnectionConfig_GetChannel_m2188161631_MetadataUsageId;
extern const uint32_t ConnectionConfig_GetSharedOrderChannels_m1826991094_MetadataUsageId;
extern const uint32_t ConnectionConfig_Validate_m2712188470_MetadataUsageId;
extern const uint32_t ConnectionConfig__ctor_m2640243122_MetadataUsageId;
extern const uint32_t ConnectionConfig__ctor_m3078028383_MetadataUsageId;
extern const uint32_t ConnectionConfig_get_ChannelCount_m1630695256_MetadataUsageId;
extern const uint32_t ConnectionConfig_get_SharedOrderChannelCount_m1090156233_MetadataUsageId;
extern const uint32_t HostTopologyInternal__ctor_m1686371270_MetadataUsageId;
extern const uint32_t HostTopology_GetSpecialConnectionConfig_m1011380843_MetadataUsageId;
extern const uint32_t HostTopology__ctor_m1320382600_MetadataUsageId;
extern const uint32_t HostTopology__ctor_m284550224_MetadataUsageId;
extern const uint32_t HostTopology_get_SpecialConnectionConfigsCount_m2294874456_MetadataUsageId;
extern const uint32_t NetworkTransport_AddHost_m236682671_MetadataUsageId;
extern const uint32_t NetworkTransport_CheckTopology_m750760940_MetadataUsageId;
extern const uint32_t NetworkTransport_Send_m1813092975_MetadataUsageId;

struct ByteU5BU5D_t4116647657;


#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2606371118_H
#define LIST_1_T2606371118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2606371118  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_t4116647657* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____items_1)); }
	inline ByteU5BU5D_t4116647657* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_t4116647657* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2606371118, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2606371118_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ByteU5BU5D_t4116647657* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2606371118_StaticFields, ___EmptyArray_4)); }
	inline ByteU5BU5D_t4116647657* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ByteU5BU5D_t4116647657* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2606371118_H
#ifndef LIST_1_T4078445860_H
#define LIST_1_T4078445860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct  List_1_t4078445860  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t3017264731* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____items_1)); }
	inline List_1U5BU5D_t3017264731* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_t3017264731** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_t3017264731* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4078445860, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4078445860_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	List_1U5BU5D_t3017264731* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4078445860_StaticFields, ___EmptyArray_4)); }
	inline List_1U5BU5D_t3017264731* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline List_1U5BU5D_t3017264731** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(List_1U5BU5D_t3017264731* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4078445860_H
#ifndef LIST_1_T3363058862_H
#define LIST_1_T3363058862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct  List_1_t3363058862  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ChannelQOSU5BU5D_t3224530281* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____items_1)); }
	inline ChannelQOSU5BU5D_t3224530281* get__items_1() const { return ____items_1; }
	inline ChannelQOSU5BU5D_t3224530281** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ChannelQOSU5BU5D_t3224530281* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3363058862, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3363058862_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ChannelQOSU5BU5D_t3224530281* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3363058862_StaticFields, ___EmptyArray_4)); }
	inline ChannelQOSU5BU5D_t3224530281* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ChannelQOSU5BU5D_t3224530281** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ChannelQOSU5BU5D_t3224530281* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3363058862_H
#ifndef LIST_1_T1351088715_H
#define LIST_1_T1351088715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct  List_1_t1351088715  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionConfigU5BU5D_t3548107960* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____items_1)); }
	inline ConnectionConfigU5BU5D_t3548107960* get__items_1() const { return ____items_1; }
	inline ConnectionConfigU5BU5D_t3548107960** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionConfigU5BU5D_t3548107960* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1351088715, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1351088715_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ConnectionConfigU5BU5D_t3548107960* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1351088715_StaticFields, ___EmptyArray_4)); }
	inline ConnectionConfigU5BU5D_t3548107960* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ConnectionConfigU5BU5D_t3548107960** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ConnectionConfigU5BU5D_t3548107960* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1351088715_H
#ifndef READONLYCOLLECTION_1_T2346872663_H
#define READONLYCOLLECTION_1_T2346872663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Byte>
struct  ReadOnlyCollection_1_t2346872663  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t2346872663, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T2346872663_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef HOSTTOPOLOGY_T4059263395_H
#define HOSTTOPOLOGY_T4059263395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.HostTopology
struct  HostTopology_t4059263395  : public RuntimeObject
{
public:
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t4173981269 * ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_t1351088715 * ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;

public:
	inline static int32_t get_offset_of_m_DefConfig_0() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_DefConfig_0)); }
	inline ConnectionConfig_t4173981269 * get_m_DefConfig_0() const { return ___m_DefConfig_0; }
	inline ConnectionConfig_t4173981269 ** get_address_of_m_DefConfig_0() { return &___m_DefConfig_0; }
	inline void set_m_DefConfig_0(ConnectionConfig_t4173981269 * value)
	{
		___m_DefConfig_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefConfig_0), value);
	}

	inline static int32_t get_offset_of_m_MaxDefConnections_1() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_MaxDefConnections_1)); }
	inline int32_t get_m_MaxDefConnections_1() const { return ___m_MaxDefConnections_1; }
	inline int32_t* get_address_of_m_MaxDefConnections_1() { return &___m_MaxDefConnections_1; }
	inline void set_m_MaxDefConnections_1(int32_t value)
	{
		___m_MaxDefConnections_1 = value;
	}

	inline static int32_t get_offset_of_m_SpecialConnections_2() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_SpecialConnections_2)); }
	inline List_1_t1351088715 * get_m_SpecialConnections_2() const { return ___m_SpecialConnections_2; }
	inline List_1_t1351088715 ** get_address_of_m_SpecialConnections_2() { return &___m_SpecialConnections_2; }
	inline void set_m_SpecialConnections_2(List_1_t1351088715 * value)
	{
		___m_SpecialConnections_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpecialConnections_2), value);
	}

	inline static int32_t get_offset_of_m_ReceivedMessagePoolSize_3() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_ReceivedMessagePoolSize_3)); }
	inline uint16_t get_m_ReceivedMessagePoolSize_3() const { return ___m_ReceivedMessagePoolSize_3; }
	inline uint16_t* get_address_of_m_ReceivedMessagePoolSize_3() { return &___m_ReceivedMessagePoolSize_3; }
	inline void set_m_ReceivedMessagePoolSize_3(uint16_t value)
	{
		___m_ReceivedMessagePoolSize_3 = value;
	}

	inline static int32_t get_offset_of_m_SentMessagePoolSize_4() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_SentMessagePoolSize_4)); }
	inline uint16_t get_m_SentMessagePoolSize_4() const { return ___m_SentMessagePoolSize_4; }
	inline uint16_t* get_address_of_m_SentMessagePoolSize_4() { return &___m_SentMessagePoolSize_4; }
	inline void set_m_SentMessagePoolSize_4(uint16_t value)
	{
		___m_SentMessagePoolSize_4 = value;
	}

	inline static int32_t get_offset_of_m_MessagePoolSizeGrowthFactor_5() { return static_cast<int32_t>(offsetof(HostTopology_t4059263395, ___m_MessagePoolSizeGrowthFactor_5)); }
	inline float get_m_MessagePoolSizeGrowthFactor_5() const { return ___m_MessagePoolSizeGrowthFactor_5; }
	inline float* get_address_of_m_MessagePoolSizeGrowthFactor_5() { return &___m_MessagePoolSizeGrowthFactor_5; }
	inline void set_m_MessagePoolSizeGrowthFactor_5(float value)
	{
		___m_MessagePoolSizeGrowthFactor_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTTOPOLOGY_T4059263395_H
#ifndef NETWORKTRANSPORT_T1089479308_H
#define NETWORKTRANSPORT_T1089479308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransport
struct  NetworkTransport_t1089479308  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKTRANSPORT_T1089479308_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef ENUMERATOR_T1672722441_H
#define ENUMERATOR_T1672722441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>
struct  Enumerator_t1672722441 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4078445860 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	List_1_t2606371118 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___l_0)); }
	inline List_1_t4078445860 * get_l_0() const { return ___l_0; }
	inline List_1_t4078445860 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4078445860 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1672722441, ___current_3)); }
	inline List_1_t2606371118 * get_current_3() const { return ___current_3; }
	inline List_1_t2606371118 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(List_1_t2606371118 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1672722441_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef ENUMERATOR_T957335443_H
#define ENUMERATOR_T957335443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>
struct  Enumerator_t957335443 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3363058862 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ChannelQOS_t1890984120 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___l_0)); }
	inline List_1_t3363058862 * get_l_0() const { return ___l_0; }
	inline List_1_t3363058862 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3363058862 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t957335443, ___current_3)); }
	inline ChannelQOS_t1890984120 * get_current_3() const { return ___current_3; }
	inline ChannelQOS_t1890984120 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ChannelQOS_t1890984120 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T957335443_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef CONNECTIONACKSTYPE_T3955378167_H
#define CONNECTIONACKSTYPE_T3955378167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionAcksType
struct  ConnectionAcksType_t3955378167 
{
public:
	// System.Int32 UnityEngine.Networking.ConnectionAcksType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionAcksType_t3955378167, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONACKSTYPE_T3955378167_H
#ifndef CONNECTIONCONFIGINTERNAL_T1246935692_H
#define CONNECTIONCONFIGINTERNAL_T1246935692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionConfigInternal
struct  ConnectionConfigInternal_t1246935692  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.ConnectionConfigInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ConnectionConfigInternal_t1246935692, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCONFIGINTERNAL_T1246935692_H
#ifndef HOSTTOPOLOGYINTERNAL_T761087795_H
#define HOSTTOPOLOGYINTERNAL_T761087795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.HostTopologyInternal
struct  HostTopologyInternal_t761087795  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.HostTopologyInternal::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(HostTopologyInternal_t761087795, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTTOPOLOGYINTERNAL_T761087795_H
#ifndef NETWORKEVENTTYPE_T3383948383_H
#define NETWORKEVENTTYPE_T3383948383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkEventType
struct  NetworkEventType_t3383948383 
{
public:
	// System.Int32 UnityEngine.Networking.NetworkEventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NetworkEventType_t3383948383, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKEVENTTYPE_T3383948383_H
#ifndef QOSTYPE_T3566496866_H
#define QOSTYPE_T3566496866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.QosType
struct  QosType_t3566496866 
{
public:
	// System.Int32 UnityEngine.Networking.QosType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QosType_t3566496866, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QOSTYPE_T3566496866_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef CHANNELQOS_T1890984120_H
#define CHANNELQOS_T1890984120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ChannelQOS
struct  ChannelQOS_t1890984120  : public RuntimeObject
{
public:
	// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::m_Type
	int32_t ___m_Type_0;
	// System.Boolean UnityEngine.Networking.ChannelQOS::m_BelongsSharedOrderChannel
	bool ___m_BelongsSharedOrderChannel_1;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(ChannelQOS_t1890984120, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BelongsSharedOrderChannel_1() { return static_cast<int32_t>(offsetof(ChannelQOS_t1890984120, ___m_BelongsSharedOrderChannel_1)); }
	inline bool get_m_BelongsSharedOrderChannel_1() const { return ___m_BelongsSharedOrderChannel_1; }
	inline bool* get_address_of_m_BelongsSharedOrderChannel_1() { return &___m_BelongsSharedOrderChannel_1; }
	inline void set_m_BelongsSharedOrderChannel_1(bool value)
	{
		___m_BelongsSharedOrderChannel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELQOS_T1890984120_H
#ifndef CONNECTIONCONFIG_T4173981269_H
#define CONNECTIONCONFIG_T4173981269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ConnectionConfig
struct  ConnectionConfig_t4173981269  : public RuntimeObject
{
public:
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_0;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_1;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_8;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_11;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_19;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_20;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_21;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_22;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t3363058862 * ___m_Channels_26;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t4078445860 * ___m_SharedOrderChannels_27;

public:
	inline static int32_t get_offset_of_m_PacketSize_0() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_PacketSize_0)); }
	inline uint16_t get_m_PacketSize_0() const { return ___m_PacketSize_0; }
	inline uint16_t* get_address_of_m_PacketSize_0() { return &___m_PacketSize_0; }
	inline void set_m_PacketSize_0(uint16_t value)
	{
		___m_PacketSize_0 = value;
	}

	inline static int32_t get_offset_of_m_FragmentSize_1() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_FragmentSize_1)); }
	inline uint16_t get_m_FragmentSize_1() const { return ___m_FragmentSize_1; }
	inline uint16_t* get_address_of_m_FragmentSize_1() { return &___m_FragmentSize_1; }
	inline void set_m_FragmentSize_1(uint16_t value)
	{
		___m_FragmentSize_1 = value;
	}

	inline static int32_t get_offset_of_m_ResendTimeout_2() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ResendTimeout_2)); }
	inline uint32_t get_m_ResendTimeout_2() const { return ___m_ResendTimeout_2; }
	inline uint32_t* get_address_of_m_ResendTimeout_2() { return &___m_ResendTimeout_2; }
	inline void set_m_ResendTimeout_2(uint32_t value)
	{
		___m_ResendTimeout_2 = value;
	}

	inline static int32_t get_offset_of_m_DisconnectTimeout_3() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_DisconnectTimeout_3)); }
	inline uint32_t get_m_DisconnectTimeout_3() const { return ___m_DisconnectTimeout_3; }
	inline uint32_t* get_address_of_m_DisconnectTimeout_3() { return &___m_DisconnectTimeout_3; }
	inline void set_m_DisconnectTimeout_3(uint32_t value)
	{
		___m_DisconnectTimeout_3 = value;
	}

	inline static int32_t get_offset_of_m_ConnectTimeout_4() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ConnectTimeout_4)); }
	inline uint32_t get_m_ConnectTimeout_4() const { return ___m_ConnectTimeout_4; }
	inline uint32_t* get_address_of_m_ConnectTimeout_4() { return &___m_ConnectTimeout_4; }
	inline void set_m_ConnectTimeout_4(uint32_t value)
	{
		___m_ConnectTimeout_4 = value;
	}

	inline static int32_t get_offset_of_m_MinUpdateTimeout_5() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MinUpdateTimeout_5)); }
	inline uint32_t get_m_MinUpdateTimeout_5() const { return ___m_MinUpdateTimeout_5; }
	inline uint32_t* get_address_of_m_MinUpdateTimeout_5() { return &___m_MinUpdateTimeout_5; }
	inline void set_m_MinUpdateTimeout_5(uint32_t value)
	{
		___m_MinUpdateTimeout_5 = value;
	}

	inline static int32_t get_offset_of_m_PingTimeout_6() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_PingTimeout_6)); }
	inline uint32_t get_m_PingTimeout_6() const { return ___m_PingTimeout_6; }
	inline uint32_t* get_address_of_m_PingTimeout_6() { return &___m_PingTimeout_6; }
	inline void set_m_PingTimeout_6(uint32_t value)
	{
		___m_PingTimeout_6 = value;
	}

	inline static int32_t get_offset_of_m_ReducedPingTimeout_7() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_ReducedPingTimeout_7)); }
	inline uint32_t get_m_ReducedPingTimeout_7() const { return ___m_ReducedPingTimeout_7; }
	inline uint32_t* get_address_of_m_ReducedPingTimeout_7() { return &___m_ReducedPingTimeout_7; }
	inline void set_m_ReducedPingTimeout_7(uint32_t value)
	{
		___m_ReducedPingTimeout_7 = value;
	}

	inline static int32_t get_offset_of_m_AllCostTimeout_8() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AllCostTimeout_8)); }
	inline uint32_t get_m_AllCostTimeout_8() const { return ___m_AllCostTimeout_8; }
	inline uint32_t* get_address_of_m_AllCostTimeout_8() { return &___m_AllCostTimeout_8; }
	inline void set_m_AllCostTimeout_8(uint32_t value)
	{
		___m_AllCostTimeout_8 = value;
	}

	inline static int32_t get_offset_of_m_NetworkDropThreshold_9() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_NetworkDropThreshold_9)); }
	inline uint8_t get_m_NetworkDropThreshold_9() const { return ___m_NetworkDropThreshold_9; }
	inline uint8_t* get_address_of_m_NetworkDropThreshold_9() { return &___m_NetworkDropThreshold_9; }
	inline void set_m_NetworkDropThreshold_9(uint8_t value)
	{
		___m_NetworkDropThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_OverflowDropThreshold_10() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_OverflowDropThreshold_10)); }
	inline uint8_t get_m_OverflowDropThreshold_10() const { return ___m_OverflowDropThreshold_10; }
	inline uint8_t* get_address_of_m_OverflowDropThreshold_10() { return &___m_OverflowDropThreshold_10; }
	inline void set_m_OverflowDropThreshold_10(uint8_t value)
	{
		___m_OverflowDropThreshold_10 = value;
	}

	inline static int32_t get_offset_of_m_MaxConnectionAttempt_11() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxConnectionAttempt_11)); }
	inline uint8_t get_m_MaxConnectionAttempt_11() const { return ___m_MaxConnectionAttempt_11; }
	inline uint8_t* get_address_of_m_MaxConnectionAttempt_11() { return &___m_MaxConnectionAttempt_11; }
	inline void set_m_MaxConnectionAttempt_11(uint8_t value)
	{
		___m_MaxConnectionAttempt_11 = value;
	}

	inline static int32_t get_offset_of_m_AckDelay_12() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AckDelay_12)); }
	inline uint32_t get_m_AckDelay_12() const { return ___m_AckDelay_12; }
	inline uint32_t* get_address_of_m_AckDelay_12() { return &___m_AckDelay_12; }
	inline void set_m_AckDelay_12(uint32_t value)
	{
		___m_AckDelay_12 = value;
	}

	inline static int32_t get_offset_of_m_SendDelay_13() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SendDelay_13)); }
	inline uint32_t get_m_SendDelay_13() const { return ___m_SendDelay_13; }
	inline uint32_t* get_address_of_m_SendDelay_13() { return &___m_SendDelay_13; }
	inline void set_m_SendDelay_13(uint32_t value)
	{
		___m_SendDelay_13 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageSize_14() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxCombinedReliableMessageSize_14)); }
	inline uint16_t get_m_MaxCombinedReliableMessageSize_14() const { return ___m_MaxCombinedReliableMessageSize_14; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageSize_14() { return &___m_MaxCombinedReliableMessageSize_14; }
	inline void set_m_MaxCombinedReliableMessageSize_14(uint16_t value)
	{
		___m_MaxCombinedReliableMessageSize_14 = value;
	}

	inline static int32_t get_offset_of_m_MaxCombinedReliableMessageCount_15() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxCombinedReliableMessageCount_15)); }
	inline uint16_t get_m_MaxCombinedReliableMessageCount_15() const { return ___m_MaxCombinedReliableMessageCount_15; }
	inline uint16_t* get_address_of_m_MaxCombinedReliableMessageCount_15() { return &___m_MaxCombinedReliableMessageCount_15; }
	inline void set_m_MaxCombinedReliableMessageCount_15(uint16_t value)
	{
		___m_MaxCombinedReliableMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_MaxSentMessageQueueSize_16() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_MaxSentMessageQueueSize_16)); }
	inline uint16_t get_m_MaxSentMessageQueueSize_16() const { return ___m_MaxSentMessageQueueSize_16; }
	inline uint16_t* get_address_of_m_MaxSentMessageQueueSize_16() { return &___m_MaxSentMessageQueueSize_16; }
	inline void set_m_MaxSentMessageQueueSize_16(uint16_t value)
	{
		___m_MaxSentMessageQueueSize_16 = value;
	}

	inline static int32_t get_offset_of_m_AcksType_17() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_AcksType_17)); }
	inline int32_t get_m_AcksType_17() const { return ___m_AcksType_17; }
	inline int32_t* get_address_of_m_AcksType_17() { return &___m_AcksType_17; }
	inline void set_m_AcksType_17(int32_t value)
	{
		___m_AcksType_17 = value;
	}

	inline static int32_t get_offset_of_m_UsePlatformSpecificProtocols_18() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_UsePlatformSpecificProtocols_18)); }
	inline bool get_m_UsePlatformSpecificProtocols_18() const { return ___m_UsePlatformSpecificProtocols_18; }
	inline bool* get_address_of_m_UsePlatformSpecificProtocols_18() { return &___m_UsePlatformSpecificProtocols_18; }
	inline void set_m_UsePlatformSpecificProtocols_18(bool value)
	{
		___m_UsePlatformSpecificProtocols_18 = value;
	}

	inline static int32_t get_offset_of_m_InitialBandwidth_19() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_InitialBandwidth_19)); }
	inline uint32_t get_m_InitialBandwidth_19() const { return ___m_InitialBandwidth_19; }
	inline uint32_t* get_address_of_m_InitialBandwidth_19() { return &___m_InitialBandwidth_19; }
	inline void set_m_InitialBandwidth_19(uint32_t value)
	{
		___m_InitialBandwidth_19 = value;
	}

	inline static int32_t get_offset_of_m_BandwidthPeakFactor_20() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_BandwidthPeakFactor_20)); }
	inline float get_m_BandwidthPeakFactor_20() const { return ___m_BandwidthPeakFactor_20; }
	inline float* get_address_of_m_BandwidthPeakFactor_20() { return &___m_BandwidthPeakFactor_20; }
	inline void set_m_BandwidthPeakFactor_20(float value)
	{
		___m_BandwidthPeakFactor_20 = value;
	}

	inline static int32_t get_offset_of_m_WebSocketReceiveBufferMaxSize_21() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_WebSocketReceiveBufferMaxSize_21)); }
	inline uint16_t get_m_WebSocketReceiveBufferMaxSize_21() const { return ___m_WebSocketReceiveBufferMaxSize_21; }
	inline uint16_t* get_address_of_m_WebSocketReceiveBufferMaxSize_21() { return &___m_WebSocketReceiveBufferMaxSize_21; }
	inline void set_m_WebSocketReceiveBufferMaxSize_21(uint16_t value)
	{
		___m_WebSocketReceiveBufferMaxSize_21 = value;
	}

	inline static int32_t get_offset_of_m_UdpSocketReceiveBufferMaxSize_22() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_UdpSocketReceiveBufferMaxSize_22)); }
	inline uint32_t get_m_UdpSocketReceiveBufferMaxSize_22() const { return ___m_UdpSocketReceiveBufferMaxSize_22; }
	inline uint32_t* get_address_of_m_UdpSocketReceiveBufferMaxSize_22() { return &___m_UdpSocketReceiveBufferMaxSize_22; }
	inline void set_m_UdpSocketReceiveBufferMaxSize_22(uint32_t value)
	{
		___m_UdpSocketReceiveBufferMaxSize_22 = value;
	}

	inline static int32_t get_offset_of_m_SSLCertFilePath_23() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLCertFilePath_23)); }
	inline String_t* get_m_SSLCertFilePath_23() const { return ___m_SSLCertFilePath_23; }
	inline String_t** get_address_of_m_SSLCertFilePath_23() { return &___m_SSLCertFilePath_23; }
	inline void set_m_SSLCertFilePath_23(String_t* value)
	{
		___m_SSLCertFilePath_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLCertFilePath_23), value);
	}

	inline static int32_t get_offset_of_m_SSLPrivateKeyFilePath_24() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLPrivateKeyFilePath_24)); }
	inline String_t* get_m_SSLPrivateKeyFilePath_24() const { return ___m_SSLPrivateKeyFilePath_24; }
	inline String_t** get_address_of_m_SSLPrivateKeyFilePath_24() { return &___m_SSLPrivateKeyFilePath_24; }
	inline void set_m_SSLPrivateKeyFilePath_24(String_t* value)
	{
		___m_SSLPrivateKeyFilePath_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLPrivateKeyFilePath_24), value);
	}

	inline static int32_t get_offset_of_m_SSLCAFilePath_25() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SSLCAFilePath_25)); }
	inline String_t* get_m_SSLCAFilePath_25() const { return ___m_SSLCAFilePath_25; }
	inline String_t** get_address_of_m_SSLCAFilePath_25() { return &___m_SSLCAFilePath_25; }
	inline void set_m_SSLCAFilePath_25(String_t* value)
	{
		___m_SSLCAFilePath_25 = value;
		Il2CppCodeGenWriteBarrier((&___m_SSLCAFilePath_25), value);
	}

	inline static int32_t get_offset_of_m_Channels_26() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_Channels_26)); }
	inline List_1_t3363058862 * get_m_Channels_26() const { return ___m_Channels_26; }
	inline List_1_t3363058862 ** get_address_of_m_Channels_26() { return &___m_Channels_26; }
	inline void set_m_Channels_26(List_1_t3363058862 * value)
	{
		___m_Channels_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Channels_26), value);
	}

	inline static int32_t get_offset_of_m_SharedOrderChannels_27() { return static_cast<int32_t>(offsetof(ConnectionConfig_t4173981269, ___m_SharedOrderChannels_27)); }
	inline List_1_t4078445860 * get_m_SharedOrderChannels_27() const { return ___m_SharedOrderChannels_27; }
	inline List_1_t4078445860 ** get_address_of_m_SharedOrderChannels_27() { return &___m_SharedOrderChannels_27; }
	inline void set_m_SharedOrderChannels_27(List_1_t4078445860 * value)
	{
		___m_SharedOrderChannels_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SharedOrderChannels_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCONFIG_T4173981269_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
extern "C" IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t2346872663 * List_1_AsReadOnly_m3149855852_gshared (List_1_t2606371118 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m3076065613 (NullReferenceException_t1023182353 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::.ctor()
inline void List_1__ctor_m4168264895 (List_1_t3363058862 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::.ctor()
inline void List_1__ctor_m441991155 (List_1_t4078445860 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4078445860 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::GetEnumerator()
inline Enumerator_t957335443  List_1_GetEnumerator_m4246513235 (List_1_t3363058862 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t957335443  (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::get_Current()
inline ChannelQOS_t1890984120 * Enumerator_get_Current_m1808369071 (Enumerator_t957335443 * __this, const RuntimeMethod* method)
{
	return ((  ChannelQOS_t1890984120 * (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m3213155130 (ChannelQOS_t1890984120 * __this, ChannelQOS_t1890984120 * ___channel0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::Add(!0)
inline void List_1_Add_m423166763 (List_1_t3363058862 * __this, ChannelQOS_t1890984120 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3363058862 *, ChannelQOS_t1890984120 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::MoveNext()
inline bool Enumerator_MoveNext_m349679386 (Enumerator_t957335443 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.ChannelQOS>::Dispose()
inline void Enumerator_Dispose_m3004041484 (Enumerator_t957335443 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t957335443 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::GetEnumerator()
inline Enumerator_t1672722441  List_1_GetEnumerator_m1327152933 (List_1_t4078445860 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1672722441  (*) (List_1_t4078445860 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::get_Current()
inline List_1_t2606371118 * Enumerator_get_Current_m2439261711 (Enumerator_t1672722441 * __this, const RuntimeMethod* method)
{
	return ((  List_1_t2606371118 * (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::Add(!0)
inline void List_1_Add_m1960376679 (List_1_t4078445860 * __this, List_1_t2606371118 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4078445860 *, List_1_t2606371118 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::MoveNext()
inline bool Enumerator_MoveNext_m491916196 (Enumerator_t1672722441 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Byte>>::Dispose()
inline void Enumerator_Dispose_m2814761745 (Enumerator_t1672722441 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1672722441 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.String System.Int32::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Count()
inline int32_t List_1_get_Count_m3550276212 (List_1_t3363058862 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3363058862 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Count()
inline int32_t List_1_get_Count_m1422624963 (List_1_t4078445860 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4078445860 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1442314461 (RuntimeObject * __this /* static, unused */, Type_t * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m181222305 (ChannelQOS_t1890984120 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>::get_Item(System.Int32)
inline ChannelQOS_t1890984120 * List_1_get_Item_m977601184 (List_1_t3363058862 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ChannelQOS_t1890984120 * (*) (List_1_t3363058862 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
extern "C" IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_m209007790 (ChannelQOS_t1890984120 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>::get_Item(System.Int32)
inline List_1_t2606371118 * List_1_get_Item_m2000198085 (List_1_t4078445860 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  List_1_t2606371118 * (*) (List_1_t4078445860 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<!0> System.Collections.Generic.List`1<System.Byte>::AsReadOnly()
inline ReadOnlyCollection_1_t2346872663 * List_1_AsReadOnly_m3149855852 (List_1_t2606371118 * __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t2346872663 * (*) (List_1_t2606371118 *, const RuntimeMethod*))List_1_AsReadOnly_m3149855852_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWrapper()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitWrapper_m4242995060 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_m195714670 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPacketSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitPacketSize_m3352433354 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m3690693204 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitFragmentSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitFragmentSize_m4083592312 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_m1229339277 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitResendTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitResendTimeout_m4785138 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_m3211708483 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitDisconnectTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitDisconnectTimeout_m121854687 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_m3841211537 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitConnectTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitConnectTimeout_m3275392522 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_m2622211838 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMinUpdateTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_m2393238105 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPingTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitPingTimeout_m2511090311 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m3505647457 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitReducedPingTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitReducedPingTimeout_m612333836 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m3668505184 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAllCostTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAllCostTimeout_m1149782117 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_m2415930717 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitNetworkDropThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_m1742682903 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitOverflowDropThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_m639248559 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxConnectionAttempt(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_m2859947532 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAckDelay(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAckDelay_m507392147 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_m1334024800 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitSendDelay(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitSendDelay_m2800814260 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m3137251213 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageCount(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m3310849732 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxSentMessageQueueSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_m4197376336 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAcksType(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAcksType_m4235038191 (ConnectionConfigInternal_t1246935692 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C" IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_m1183726116 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUsePlatformSpecificProtocols(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864 (ConnectionConfigInternal_t1246935692 * __this, bool ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m2551929270 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitInitialBandwidth(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitInitialBandwidth_m3853047278 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
extern "C" IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_m3811085112 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitBandwidthPeakFactor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278 (ConnectionConfigInternal_t1246935692 * __this, float ___value0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m2771600754 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWebSocketReceiveBufferMaxSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m3028556292 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUdpSocketReceiveBufferMaxSize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m426270519 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLCertFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLCertFilePath_m8859585 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_m1356992015 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLPrivateKeyFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m1339016177 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLCAFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLCAFilePath_m1966096029 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_m2188161631 (ConnectionConfig_t4173981269 * __this, uint8_t ___idx0, const RuntimeMethod* method);
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m2993044037 (ConnectionConfigInternal_t1246935692 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m1630695256 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_m1826991094 (ConnectionConfig_t4173981269 * __this, uint8_t ___idx0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124 (ConnectionConfigInternal_t1246935692 * __this, ByteU5BU5D_t4116647657* ___values0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m1090156233 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m741640762 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::.ctor()
inline void List_1__ctor_m607530126 (List_1_t1351088715 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1351088715 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m2712188470 (RuntimeObject * __this /* static, unused */, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m2640243122 (ConnectionConfig_t4173981269 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Count()
inline int32_t List_1_get_Count_m1480908111 (List_1_t1351088715 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1351088715 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>::get_Item(System.Int32)
inline ConnectionConfig_t4173981269 * List_1_get_Item_m1179646797 (List_1_t1351088715 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  ConnectionConfig_t4173981269 * (*) (List_1_t1351088715 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C" IL2CPP_METHOD_ATTR ConnectionConfig_t4173981269 * HostTopology_get_DefaultConfig_m230960067 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m151495501 (ConnectionConfigInternal_t1246935692 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_m1800856148 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitWrapper(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitWrapper_m1635473231 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method);
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ConnectionConfig_t4173981269 * HostTopology_GetSpecialConnectionConfig_m1011380843 (HostTopology_t4059263395 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopologyInternal_AddSpecialConnectionConfig_m211304006 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m2294874456 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitOtherParameters(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitOtherParameters_m3587098563 (HostTopologyInternal_t761087795 * __this, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfigWrapper(UnityEngine.Networking.ConnectionConfigInternal)
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_m1643446820 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitReceivedPoolSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitReceivedPoolSize_m2115070075 (HostTopologyInternal_t761087795 * __this, uint16_t ___pool0, const RuntimeMethod* method);
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m3561946879 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitSentMessagePoolSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitSentMessagePoolSize_m3801353223 (HostTopologyInternal_t761087795 * __this, uint16_t ___pool0, const RuntimeMethod* method);
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
extern "C" IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m2653453492 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::InitMessagePoolSizeGrowthFactor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449 (HostTopologyInternal_t761087795 * __this, float ___factor0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_m1652380424 (HostTopologyInternal_t761087795 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::InitWithNoParameters()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_InitWithNoParameters_m1152096323 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m4140356182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
extern "C" IL2CPP_METHOD_ATTR List_1_t1351088715 * HostTopology_get_SpecialConnectionConfigs_m2228393737 (HostTopology_t4059263395 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m236682671 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_m750760940 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m1686371270 (HostTopologyInternal_t761087795 * __this, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWrapperWithoutIp_m987964846 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, int32_t ___port1, int32_t ___minTimeout2, int32_t ___maxTimeout3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWrapper_m1104996213 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_m4225720830 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m181222305 (ChannelQOS_t1890984120 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___value0;
		__this->set_m_Type_0(L_0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m1615168101 (ChannelQOS_t1890984120 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_Type_0(0);
		__this->set_m_BelongsSharedOrderChannel_1((bool)0);
		return;
	}
}
// System.Void UnityEngine.Networking.ChannelQOS::.ctor(UnityEngine.Networking.ChannelQOS)
extern "C" IL2CPP_METHOD_ATTR void ChannelQOS__ctor_m3213155130 (ChannelQOS_t1890984120 * __this, ChannelQOS_t1890984120 * ___channel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelQOS__ctor_m3213155130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ChannelQOS_t1890984120 * L_0 = ___channel0;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral1575624523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ChannelQOS__ctor_m3213155130_RuntimeMethod_var);
	}

IL_0018:
	{
		ChannelQOS_t1890984120 * L_2 = ___channel0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_m_Type_0();
		__this->set_m_Type_0(L_3);
		ChannelQOS_t1890984120 * L_4 = ___channel0;
		NullCheck(L_4);
		bool L_5 = L_4->get_m_BelongsSharedOrderChannel_1();
		__this->set_m_BelongsSharedOrderChannel_1(L_5);
		return;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ChannelQOS::get_QOS()
extern "C" IL2CPP_METHOD_ATTR int32_t ChannelQOS_get_QOS_m209007790 (ChannelQOS_t1890984120 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Type_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m3078028383 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m3078028383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3363058862 * L_0 = (List_1_t3363058862 *)il2cpp_codegen_object_new(List_1_t3363058862_il2cpp_TypeInfo_var);
		List_1__ctor_m4168264895(L_0, /*hidden argument*/List_1__ctor_m4168264895_RuntimeMethod_var);
		__this->set_m_Channels_26(L_0);
		List_1_t4078445860 * L_1 = (List_1_t4078445860 *)il2cpp_codegen_object_new(List_1_t4078445860_il2cpp_TypeInfo_var);
		List_1__ctor_m441991155(L_1, /*hidden argument*/List_1__ctor_m441991155_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_27(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_PacketSize_0((uint16_t)((int32_t)1440));
		__this->set_m_FragmentSize_1((uint16_t)((int32_t)500));
		__this->set_m_ResendTimeout_2(((int32_t)1200));
		__this->set_m_DisconnectTimeout_3(((int32_t)2000));
		__this->set_m_ConnectTimeout_4(((int32_t)2000));
		__this->set_m_MinUpdateTimeout_5(((int32_t)10));
		__this->set_m_PingTimeout_6(((int32_t)500));
		__this->set_m_ReducedPingTimeout_7(((int32_t)100));
		__this->set_m_AllCostTimeout_8(((int32_t)20));
		__this->set_m_NetworkDropThreshold_9((uint8_t)5);
		__this->set_m_OverflowDropThreshold_10((uint8_t)5);
		__this->set_m_MaxConnectionAttempt_11((uint8_t)((int32_t)10));
		__this->set_m_AckDelay_12(((int32_t)33));
		__this->set_m_SendDelay_13(((int32_t)10));
		__this->set_m_MaxCombinedReliableMessageSize_14((uint16_t)((int32_t)100));
		__this->set_m_MaxCombinedReliableMessageCount_15((uint16_t)((int32_t)10));
		__this->set_m_MaxSentMessageQueueSize_16((uint16_t)((int32_t)512));
		__this->set_m_AcksType_17(1);
		__this->set_m_UsePlatformSpecificProtocols_18((bool)0);
		__this->set_m_InitialBandwidth_19(0);
		__this->set_m_BandwidthPeakFactor_20((2.0f));
		__this->set_m_WebSocketReceiveBufferMaxSize_21((uint16_t)0);
		__this->set_m_UdpSocketReceiveBufferMaxSize_22(0);
		__this->set_m_SSLCertFilePath_23((String_t*)NULL);
		__this->set_m_SSLPrivateKeyFilePath_24((String_t*)NULL);
		__this->set_m_SSLCAFilePath_25((String_t*)NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_m2640243122 (ConnectionConfig_t4173981269 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig__ctor_m2640243122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_t1890984120 * V_0 = NULL;
	Enumerator_t957335443  V_1;
	memset(&V_1, 0, sizeof(V_1));
	List_1_t2606371118 * V_2 = NULL;
	Enumerator_t1672722441  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3363058862 * L_0 = (List_1_t3363058862 *)il2cpp_codegen_object_new(List_1_t3363058862_il2cpp_TypeInfo_var);
		List_1__ctor_m4168264895(L_0, /*hidden argument*/List_1__ctor_m4168264895_RuntimeMethod_var);
		__this->set_m_Channels_26(L_0);
		List_1_t4078445860 * L_1 = (List_1_t4078445860 *)il2cpp_codegen_object_new(List_1_t4078445860_il2cpp_TypeInfo_var);
		List_1__ctor_m441991155(L_1, /*hidden argument*/List_1__ctor_m441991155_RuntimeMethod_var);
		__this->set_m_SharedOrderChannels_27(L_1);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_2 = ___config0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		NullReferenceException_t1023182353 * L_3 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_3, _stringLiteral3778735433, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig__ctor_m2640243122_RuntimeMethod_var);
	}

IL_002e:
	{
		ConnectionConfig_t4173981269 * L_4 = ___config0;
		NullCheck(L_4);
		uint16_t L_5 = L_4->get_m_PacketSize_0();
		__this->set_m_PacketSize_0(L_5);
		ConnectionConfig_t4173981269 * L_6 = ___config0;
		NullCheck(L_6);
		uint16_t L_7 = L_6->get_m_FragmentSize_1();
		__this->set_m_FragmentSize_1(L_7);
		ConnectionConfig_t4173981269 * L_8 = ___config0;
		NullCheck(L_8);
		uint32_t L_9 = L_8->get_m_ResendTimeout_2();
		__this->set_m_ResendTimeout_2(L_9);
		ConnectionConfig_t4173981269 * L_10 = ___config0;
		NullCheck(L_10);
		uint32_t L_11 = L_10->get_m_DisconnectTimeout_3();
		__this->set_m_DisconnectTimeout_3(L_11);
		ConnectionConfig_t4173981269 * L_12 = ___config0;
		NullCheck(L_12);
		uint32_t L_13 = L_12->get_m_ConnectTimeout_4();
		__this->set_m_ConnectTimeout_4(L_13);
		ConnectionConfig_t4173981269 * L_14 = ___config0;
		NullCheck(L_14);
		uint32_t L_15 = L_14->get_m_MinUpdateTimeout_5();
		__this->set_m_MinUpdateTimeout_5(L_15);
		ConnectionConfig_t4173981269 * L_16 = ___config0;
		NullCheck(L_16);
		uint32_t L_17 = L_16->get_m_PingTimeout_6();
		__this->set_m_PingTimeout_6(L_17);
		ConnectionConfig_t4173981269 * L_18 = ___config0;
		NullCheck(L_18);
		uint32_t L_19 = L_18->get_m_ReducedPingTimeout_7();
		__this->set_m_ReducedPingTimeout_7(L_19);
		ConnectionConfig_t4173981269 * L_20 = ___config0;
		NullCheck(L_20);
		uint32_t L_21 = L_20->get_m_AllCostTimeout_8();
		__this->set_m_AllCostTimeout_8(L_21);
		ConnectionConfig_t4173981269 * L_22 = ___config0;
		NullCheck(L_22);
		uint8_t L_23 = L_22->get_m_NetworkDropThreshold_9();
		__this->set_m_NetworkDropThreshold_9(L_23);
		ConnectionConfig_t4173981269 * L_24 = ___config0;
		NullCheck(L_24);
		uint8_t L_25 = L_24->get_m_OverflowDropThreshold_10();
		__this->set_m_OverflowDropThreshold_10(L_25);
		ConnectionConfig_t4173981269 * L_26 = ___config0;
		NullCheck(L_26);
		uint8_t L_27 = L_26->get_m_MaxConnectionAttempt_11();
		__this->set_m_MaxConnectionAttempt_11(L_27);
		ConnectionConfig_t4173981269 * L_28 = ___config0;
		NullCheck(L_28);
		uint32_t L_29 = L_28->get_m_AckDelay_12();
		__this->set_m_AckDelay_12(L_29);
		ConnectionConfig_t4173981269 * L_30 = ___config0;
		NullCheck(L_30);
		uint32_t L_31 = L_30->get_m_SendDelay_13();
		__this->set_m_SendDelay_13(L_31);
		ConnectionConfig_t4173981269 * L_32 = ___config0;
		NullCheck(L_32);
		uint16_t L_33 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617(L_32, /*hidden argument*/NULL);
		__this->set_m_MaxCombinedReliableMessageSize_14(L_33);
		ConnectionConfig_t4173981269 * L_34 = ___config0;
		NullCheck(L_34);
		uint16_t L_35 = L_34->get_m_MaxCombinedReliableMessageCount_15();
		__this->set_m_MaxCombinedReliableMessageCount_15(L_35);
		ConnectionConfig_t4173981269 * L_36 = ___config0;
		NullCheck(L_36);
		uint16_t L_37 = L_36->get_m_MaxSentMessageQueueSize_16();
		__this->set_m_MaxSentMessageQueueSize_16(L_37);
		ConnectionConfig_t4173981269 * L_38 = ___config0;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_m_AcksType_17();
		__this->set_m_AcksType_17(L_39);
		ConnectionConfig_t4173981269 * L_40 = ___config0;
		NullCheck(L_40);
		bool L_41 = L_40->get_m_UsePlatformSpecificProtocols_18();
		__this->set_m_UsePlatformSpecificProtocols_18(L_41);
		ConnectionConfig_t4173981269 * L_42 = ___config0;
		NullCheck(L_42);
		uint32_t L_43 = L_42->get_m_InitialBandwidth_19();
		__this->set_m_InitialBandwidth_19(L_43);
		uint32_t L_44 = __this->get_m_InitialBandwidth_19();
		if (L_44)
		{
			goto IL_0144;
		}
	}
	{
		uint16_t L_45 = __this->get_m_PacketSize_0();
		uint32_t L_46 = __this->get_m_MinUpdateTimeout_5();
		__this->set_m_InitialBandwidth_19(((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_45, (int32_t)((int32_t)1000)))/(uint32_t)(int32_t)L_46)));
	}

IL_0144:
	{
		ConnectionConfig_t4173981269 * L_47 = ___config0;
		NullCheck(L_47);
		float L_48 = L_47->get_m_BandwidthPeakFactor_20();
		__this->set_m_BandwidthPeakFactor_20(L_48);
		ConnectionConfig_t4173981269 * L_49 = ___config0;
		NullCheck(L_49);
		uint16_t L_50 = L_49->get_m_WebSocketReceiveBufferMaxSize_21();
		__this->set_m_WebSocketReceiveBufferMaxSize_21(L_50);
		ConnectionConfig_t4173981269 * L_51 = ___config0;
		NullCheck(L_51);
		uint32_t L_52 = L_51->get_m_UdpSocketReceiveBufferMaxSize_22();
		__this->set_m_UdpSocketReceiveBufferMaxSize_22(L_52);
		ConnectionConfig_t4173981269 * L_53 = ___config0;
		NullCheck(L_53);
		String_t* L_54 = L_53->get_m_SSLCertFilePath_23();
		__this->set_m_SSLCertFilePath_23(L_54);
		ConnectionConfig_t4173981269 * L_55 = ___config0;
		NullCheck(L_55);
		String_t* L_56 = L_55->get_m_SSLPrivateKeyFilePath_24();
		__this->set_m_SSLPrivateKeyFilePath_24(L_56);
		ConnectionConfig_t4173981269 * L_57 = ___config0;
		NullCheck(L_57);
		String_t* L_58 = L_57->get_m_SSLCAFilePath_25();
		__this->set_m_SSLCAFilePath_25(L_58);
		ConnectionConfig_t4173981269 * L_59 = ___config0;
		NullCheck(L_59);
		List_1_t3363058862 * L_60 = L_59->get_m_Channels_26();
		NullCheck(L_60);
		Enumerator_t957335443  L_61 = List_1_GetEnumerator_m4246513235(L_60, /*hidden argument*/List_1_GetEnumerator_m4246513235_RuntimeMethod_var);
		V_1 = L_61;
	}

IL_0199:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b9;
		}

IL_019e:
		{
			ChannelQOS_t1890984120 * L_62 = Enumerator_get_Current_m1808369071((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m1808369071_RuntimeMethod_var);
			V_0 = L_62;
			List_1_t3363058862 * L_63 = __this->get_m_Channels_26();
			ChannelQOS_t1890984120 * L_64 = V_0;
			ChannelQOS_t1890984120 * L_65 = (ChannelQOS_t1890984120 *)il2cpp_codegen_object_new(ChannelQOS_t1890984120_il2cpp_TypeInfo_var);
			ChannelQOS__ctor_m3213155130(L_65, L_64, /*hidden argument*/NULL);
			NullCheck(L_63);
			List_1_Add_m423166763(L_63, L_65, /*hidden argument*/List_1_Add_m423166763_RuntimeMethod_var);
		}

IL_01b9:
		{
			bool L_66 = Enumerator_MoveNext_m349679386((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m349679386_RuntimeMethod_var);
			if (L_66)
			{
				goto IL_019e;
			}
		}

IL_01c5:
		{
			IL2CPP_LEAVE(0x1D8, FINALLY_01ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01ca;
	}

FINALLY_01ca:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3004041484((Enumerator_t957335443 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3004041484_RuntimeMethod_var);
		IL2CPP_END_FINALLY(458)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(458)
	{
		IL2CPP_JUMP_TBL(0x1D8, IL_01d8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01d8:
	{
		ConnectionConfig_t4173981269 * L_67 = ___config0;
		NullCheck(L_67);
		List_1_t4078445860 * L_68 = L_67->get_m_SharedOrderChannels_27();
		NullCheck(L_68);
		Enumerator_t1672722441  L_69 = List_1_GetEnumerator_m1327152933(L_68, /*hidden argument*/List_1_GetEnumerator_m1327152933_RuntimeMethod_var);
		V_3 = L_69;
	}

IL_01e5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0200;
		}

IL_01ea:
		{
			List_1_t2606371118 * L_70 = Enumerator_get_Current_m2439261711((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m2439261711_RuntimeMethod_var);
			V_2 = L_70;
			List_1_t4078445860 * L_71 = __this->get_m_SharedOrderChannels_27();
			List_1_t2606371118 * L_72 = V_2;
			NullCheck(L_71);
			List_1_Add_m1960376679(L_71, L_72, /*hidden argument*/List_1_Add_m1960376679_RuntimeMethod_var);
		}

IL_0200:
		{
			bool L_73 = Enumerator_MoveNext_m491916196((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m491916196_RuntimeMethod_var);
			if (L_73)
			{
				goto IL_01ea;
			}
		}

IL_020c:
		{
			IL2CPP_LEAVE(0x21F, FINALLY_0211);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0211;
	}

FINALLY_0211:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2814761745((Enumerator_t1672722441 *)(&V_3), /*hidden argument*/Enumerator_Dispose_m2814761745_RuntimeMethod_var);
		IL2CPP_END_FINALLY(529)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(529)
	{
		IL2CPP_JUMP_TBL(0x21F, IL_021f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_021f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfig_Validate_m2712188470 (RuntimeObject * __this /* static, unused */, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_Validate_m2712188470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ConnectionConfig_t4173981269 * L_0 = ___config0;
		NullCheck(L_0);
		uint16_t L_1 = L_0->get_m_PacketSize_0();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0034;
		}
	}
	{
		V_0 = ((int32_t)128);
		String_t* L_2 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1848928535, L_2, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_0034:
	{
		ConnectionConfig_t4173981269 * L_5 = ___config0;
		NullCheck(L_5);
		uint16_t L_6 = L_5->get_m_FragmentSize_1();
		ConnectionConfig_t4173981269 * L_7 = ___config0;
		NullCheck(L_7);
		uint16_t L_8 = L_7->get_m_PacketSize_0();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)128))))))
		{
			goto IL_006e;
		}
	}
	{
		V_1 = ((int32_t)128);
		String_t* L_9 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1996371512, L_9, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_11 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_006e:
	{
		ConnectionConfig_t4173981269 * L_12 = ___config0;
		NullCheck(L_12);
		List_1_t3363058862 * L_13 = L_12->get_m_Channels_26();
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3550276212(L_13, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)255))))
		{
			goto IL_008e;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_15 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_15, _stringLiteral2828656510, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, ConnectionConfig_Validate_m2712188470_RuntimeMethod_var);
	}

IL_008e:
	{
		return;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_PacketSize_m195714670 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_PacketSize_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_FragmentSize_m3690693204 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_FragmentSize_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ResendTimeout_m1229339277 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ResendTimeout_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_DisconnectTimeout_m3211708483 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_DisconnectTimeout_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ConnectTimeout_m3841211537 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ConnectTimeout_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_MinUpdateTimeout_m2622211838 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_MinUpdateTimeout_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_PingTimeout_m2393238105 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_PingTimeout_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_ReducedPingTimeout_m3505647457 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_ReducedPingTimeout_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AllCostTimeout_m3668505184 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AllCostTimeout_8();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_NetworkDropThreshold_m2415930717 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_NetworkDropThreshold_9();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_OverflowDropThreshold_m1742682903 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_OverflowDropThreshold_10();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_get_MaxConnectionAttempt_m639248559 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		uint8_t L_0 = __this->get_m_MaxConnectionAttempt_11();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint8_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_AckDelay_m2859947532 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_AckDelay_12();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_SendDelay()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_SendDelay_m1334024800 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_SendDelay_13();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageSize_14();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m3137251213 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxCombinedReliableMessageCount_15();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m3310849732 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_MaxSentMessageQueueSize_16();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::get_AcksType()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_AcksType_m4197376336 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_AcksType_17();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C" IL2CPP_METHOD_ATTR bool ConnectionConfig_get_UsePlatformSpecificProtocols_m1183726116 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_UsePlatformSpecificProtocols_18();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_InitialBandwidth()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_InitialBandwidth_m2551929270 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_InitialBandwidth_19();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.ConnectionConfig::get_BandwidthPeakFactor()
extern "C" IL2CPP_METHOD_ATTR float ConnectionConfig_get_BandwidthPeakFactor_m3811085112 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_BandwidthPeakFactor_20();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_WebSocketReceiveBufferMaxSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m2771600754 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_WebSocketReceiveBufferMaxSize_21();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_UdpSocketReceiveBufferMaxSize()
extern "C" IL2CPP_METHOD_ATTR uint32_t ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m3028556292 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_UdpSocketReceiveBufferMaxSize_22();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCertFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCertFilePath_m426270519 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLCertFilePath_23();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLPrivateKeyFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLPrivateKeyFilePath_m1356992015 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLPrivateKeyFilePath_24();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.ConnectionConfig::get_SSLCAFilePath()
extern "C" IL2CPP_METHOD_ATTR String_t* ConnectionConfig_get_SSLCAFilePath_m1339016177 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_SSLCAFilePath_25();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_ChannelCount_m1630695256 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_ChannelCount_m1630695256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t3363058862 * L_0 = __this->get_m_Channels_26();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3550276212(L_0, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_SharedOrderChannelCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_get_SharedOrderChannelCount_m1090156233 (ConnectionConfig_t4173981269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_get_SharedOrderChannelCount_m1090156233_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t4078445860 * L_0 = __this->get_m_SharedOrderChannels_27();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1422624963(L_0, /*hidden argument*/List_1_get_Count_m1422624963_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_m2791320185 (ConnectionConfig_t4173981269 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_AddChannel_m2791320185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ChannelQOS_t1890984120 * V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		List_1_t3363058862 * L_0 = __this->get_m_Channels_26();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m3550276212(L_0, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_2 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_2, _stringLiteral584173395, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var);
	}

IL_0021:
	{
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (QosType_t3566496866_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___value0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(QosType_t3566496866_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t4135868527_il2cpp_TypeInfo_var);
		bool L_8 = Enum_IsDefined_m1442314461(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_9 = ___value0;
		int32_t L_10 = ((int32_t)L_9);
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3080010154, L_11, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_13 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_13, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, ConnectionConfig_AddChannel_m2791320185_RuntimeMethod_var);
	}

IL_0052:
	{
		int32_t L_14 = ___value0;
		ChannelQOS_t1890984120 * L_15 = (ChannelQOS_t1890984120 *)il2cpp_codegen_object_new(ChannelQOS_t1890984120_il2cpp_TypeInfo_var);
		ChannelQOS__ctor_m181222305(L_15, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		List_1_t3363058862 * L_16 = __this->get_m_Channels_26();
		ChannelQOS_t1890984120 * L_17 = V_0;
		NullCheck(L_16);
		List_1_Add_m423166763(L_16, L_17, /*hidden argument*/List_1_Add_m423166763_RuntimeMethod_var);
		List_1_t3363058862 * L_18 = __this->get_m_Channels_26();
		NullCheck(L_18);
		int32_t L_19 = List_1_get_Count_m3550276212(L_18, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		V_1 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)))));
		goto IL_0079;
	}

IL_0079:
	{
		uint8_t L_20 = V_1;
		return L_20;
	}
}
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfig_GetChannel_m2188161631 (ConnectionConfig_t4173981269 * __this, uint8_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_GetChannel_m2188161631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint8_t L_0 = ___idx0;
		List_1_t3363058862 * L_1 = __this->get_m_Channels_26();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m3550276212(L_1, /*hidden argument*/List_1_get_Count_m3550276212_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral1276777634, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig_GetChannel_m2188161631_RuntimeMethod_var);
	}

IL_001d:
	{
		List_1_t3363058862 * L_4 = __this->get_m_Channels_26();
		uint8_t L_5 = ___idx0;
		NullCheck(L_4);
		ChannelQOS_t1890984120 * L_6 = List_1_get_Item_m977601184(L_4, L_5, /*hidden argument*/List_1_get_Item_m977601184_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_7 = ChannelQOS_get_QOS_m209007790(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0034;
	}

IL_0034:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Collections.Generic.IList`1<System.Byte> UnityEngine.Networking.ConnectionConfig::GetSharedOrderChannels(System.Byte)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ConnectionConfig_GetSharedOrderChannels_m1826991094 (ConnectionConfig_t4173981269 * __this, uint8_t ___idx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfig_GetSharedOrderChannels_m1826991094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		uint8_t L_0 = ___idx0;
		List_1_t4078445860 * L_1 = __this->get_m_SharedOrderChannels_27();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m1422624963(L_1, /*hidden argument*/List_1_get_Count_m1422624963_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_3 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_3, _stringLiteral2280338569, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, ConnectionConfig_GetSharedOrderChannels_m1826991094_RuntimeMethod_var);
	}

IL_001d:
	{
		List_1_t4078445860 * L_4 = __this->get_m_SharedOrderChannels_27();
		uint8_t L_5 = ___idx0;
		NullCheck(L_4);
		List_1_t2606371118 * L_6 = List_1_get_Item_m2000198085(L_4, L_5, /*hidden argument*/List_1_get_Item_m2000198085_RuntimeMethod_var);
		NullCheck(L_6);
		ReadOnlyCollection_1_t2346872663 * L_7 = List_1_AsReadOnly_m3149855852(L_6, /*hidden argument*/List_1_AsReadOnly_m3149855852_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_7;
		goto IL_0034;
	}

IL_0034:
	{
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal__ctor_m151495501 (ConnectionConfigInternal_t1246935692 * __this, ConnectionConfig_t4173981269 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ConnectionConfigInternal__ctor_m151495501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	RuntimeObject* V_5 = NULL;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_0 = ___config0;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral3778735433, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var);
	}

IL_0018:
	{
		ConnectionConfigInternal_InitWrapper_m4242995060(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_2 = ___config0;
		NullCheck(L_2);
		uint16_t L_3 = ConnectionConfig_get_PacketSize_m195714670(L_2, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitPacketSize_m3352433354(__this, L_3, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_4 = ___config0;
		NullCheck(L_4);
		uint16_t L_5 = ConnectionConfig_get_FragmentSize_m3690693204(L_4, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitFragmentSize_m4083592312(__this, L_5, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_6 = ___config0;
		NullCheck(L_6);
		uint32_t L_7 = ConnectionConfig_get_ResendTimeout_m1229339277(L_6, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitResendTimeout_m4785138(__this, L_7, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_8 = ___config0;
		NullCheck(L_8);
		uint32_t L_9 = ConnectionConfig_get_DisconnectTimeout_m3211708483(L_8, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitDisconnectTimeout_m121854687(__this, L_9, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_10 = ___config0;
		NullCheck(L_10);
		uint32_t L_11 = ConnectionConfig_get_ConnectTimeout_m3841211537(L_10, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitConnectTimeout_m3275392522(__this, L_11, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_12 = ___config0;
		NullCheck(L_12);
		uint32_t L_13 = ConnectionConfig_get_MinUpdateTimeout_m2622211838(L_12, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020(__this, L_13, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_14 = ___config0;
		NullCheck(L_14);
		uint32_t L_15 = ConnectionConfig_get_PingTimeout_m2393238105(L_14, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitPingTimeout_m2511090311(__this, L_15, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_16 = ___config0;
		NullCheck(L_16);
		uint32_t L_17 = ConnectionConfig_get_ReducedPingTimeout_m3505647457(L_16, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitReducedPingTimeout_m612333836(__this, L_17, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_18 = ___config0;
		NullCheck(L_18);
		uint32_t L_19 = ConnectionConfig_get_AllCostTimeout_m3668505184(L_18, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitAllCostTimeout_m1149782117(__this, L_19, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_20 = ___config0;
		NullCheck(L_20);
		uint8_t L_21 = ConnectionConfig_get_NetworkDropThreshold_m2415930717(L_20, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869(__this, L_21, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_22 = ___config0;
		NullCheck(L_22);
		uint8_t L_23 = ConnectionConfig_get_OverflowDropThreshold_m1742682903(L_22, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010(__this, L_23, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_24 = ___config0;
		NullCheck(L_24);
		uint8_t L_25 = ConnectionConfig_get_MaxConnectionAttempt_m639248559(L_24, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456(__this, L_25, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_26 = ___config0;
		NullCheck(L_26);
		uint32_t L_27 = ConnectionConfig_get_AckDelay_m2859947532(L_26, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitAckDelay_m507392147(__this, L_27, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_28 = ___config0;
		NullCheck(L_28);
		uint32_t L_29 = ConnectionConfig_get_SendDelay_m1334024800(L_28, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitSendDelay_m2800814260(__this, L_29, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_30 = ___config0;
		NullCheck(L_30);
		uint16_t L_31 = ConnectionConfig_get_MaxCombinedReliableMessageSize_m1419822617(L_30, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930(__this, L_31, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_32 = ___config0;
		NullCheck(L_32);
		uint16_t L_33 = ConnectionConfig_get_MaxCombinedReliableMessageCount_m3137251213(L_32, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943(__this, L_33, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_34 = ___config0;
		NullCheck(L_34);
		uint16_t L_35 = ConnectionConfig_get_MaxSentMessageQueueSize_m3310849732(L_34, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038(__this, L_35, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_36 = ___config0;
		NullCheck(L_36);
		int32_t L_37 = ConnectionConfig_get_AcksType_m4197376336(L_36, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitAcksType_m4235038191(__this, L_37, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_38 = ___config0;
		NullCheck(L_38);
		bool L_39 = ConnectionConfig_get_UsePlatformSpecificProtocols_m1183726116(L_38, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864(__this, L_39, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_40 = ___config0;
		NullCheck(L_40);
		uint32_t L_41 = ConnectionConfig_get_InitialBandwidth_m2551929270(L_40, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitInitialBandwidth_m3853047278(__this, L_41, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_42 = ___config0;
		NullCheck(L_42);
		float L_43 = ConnectionConfig_get_BandwidthPeakFactor_m3811085112(L_42, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278(__this, L_43, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_44 = ___config0;
		NullCheck(L_44);
		uint16_t L_45 = ConnectionConfig_get_WebSocketReceiveBufferMaxSize_m2771600754(L_44, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671(__this, L_45, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_46 = ___config0;
		NullCheck(L_46);
		uint32_t L_47 = ConnectionConfig_get_UdpSocketReceiveBufferMaxSize_m3028556292(L_46, /*hidden argument*/NULL);
		ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267(__this, L_47, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_48 = ___config0;
		NullCheck(L_48);
		String_t* L_49 = ConnectionConfig_get_SSLCertFilePath_m426270519(L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_016f;
		}
	}
	{
		ConnectionConfig_t4173981269 * L_50 = ___config0;
		NullCheck(L_50);
		String_t* L_51 = ConnectionConfig_get_SSLCertFilePath_m426270519(L_50, /*hidden argument*/NULL);
		int32_t L_52 = ConnectionConfigInternal_InitSSLCertFilePath_m8859585(__this, L_51, /*hidden argument*/NULL);
		V_0 = L_52;
		int32_t L_53 = V_0;
		if (!L_53)
		{
			goto IL_016e;
		}
	}
	{
		String_t* L_54 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_55 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral727852980, L_54, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_56 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_56, L_55, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, NULL, ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var);
	}

IL_016e:
	{
	}

IL_016f:
	{
		ConnectionConfig_t4173981269 * L_57 = ___config0;
		NullCheck(L_57);
		String_t* L_58 = ConnectionConfig_get_SSLPrivateKeyFilePath_m1356992015(L_57, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01ac;
		}
	}
	{
		ConnectionConfig_t4173981269 * L_59 = ___config0;
		NullCheck(L_59);
		String_t* L_60 = ConnectionConfig_get_SSLPrivateKeyFilePath_m1356992015(L_59, /*hidden argument*/NULL);
		int32_t L_61 = ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793(__this, L_60, /*hidden argument*/NULL);
		V_1 = L_61;
		int32_t L_62 = V_1;
		if (!L_62)
		{
			goto IL_01ab;
		}
	}
	{
		String_t* L_63 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_64 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1819605569, L_63, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_65 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_65, L_64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_65, NULL, ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var);
	}

IL_01ab:
	{
	}

IL_01ac:
	{
		ConnectionConfig_t4173981269 * L_66 = ___config0;
		NullCheck(L_66);
		String_t* L_67 = ConnectionConfig_get_SSLCAFilePath_m1339016177(L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_01e9;
		}
	}
	{
		ConnectionConfig_t4173981269 * L_68 = ___config0;
		NullCheck(L_68);
		String_t* L_69 = ConnectionConfig_get_SSLCAFilePath_m1339016177(L_68, /*hidden argument*/NULL);
		int32_t L_70 = ConnectionConfigInternal_InitSSLCAFilePath_m1966096029(__this, L_69, /*hidden argument*/NULL);
		V_2 = L_70;
		int32_t L_71 = V_2;
		if (!L_71)
		{
			goto IL_01e8;
		}
	}
	{
		String_t* L_72 = Int32_ToString_m141394615((int32_t*)(&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_73 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2633051098, L_72, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_74 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_74, L_73, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, NULL, ConnectionConfigInternal__ctor_m151495501_RuntimeMethod_var);
	}

IL_01e8:
	{
	}

IL_01e9:
	{
		V_3 = (uint8_t)0;
		goto IL_0205;
	}

IL_01f0:
	{
		ConnectionConfig_t4173981269 * L_75 = ___config0;
		uint8_t L_76 = V_3;
		NullCheck(L_75);
		int32_t L_77 = ConnectionConfig_GetChannel_m2188161631(L_75, L_76, /*hidden argument*/NULL);
		ConnectionConfigInternal_AddChannel_m2993044037(__this, L_77, /*hidden argument*/NULL);
		uint8_t L_78 = V_3;
		V_3 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1)))));
	}

IL_0205:
	{
		uint8_t L_79 = V_3;
		ConnectionConfig_t4173981269 * L_80 = ___config0;
		NullCheck(L_80);
		int32_t L_81 = ConnectionConfig_get_ChannelCount_m1630695256(L_80, /*hidden argument*/NULL);
		if ((((int32_t)L_79) < ((int32_t)L_81)))
		{
			goto IL_01f0;
		}
	}
	{
		V_4 = (uint8_t)0;
		goto IL_024d;
	}

IL_0219:
	{
		ConnectionConfig_t4173981269 * L_82 = ___config0;
		uint8_t L_83 = V_4;
		NullCheck(L_82);
		RuntimeObject* L_84 = ConnectionConfig_GetSharedOrderChannels_m1826991094(L_82, L_83, /*hidden argument*/NULL);
		V_5 = L_84;
		RuntimeObject* L_85 = V_5;
		NullCheck(L_85);
		int32_t L_86 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Byte>::get_Count() */, ICollection_1_t3962448610_il2cpp_TypeInfo_var, L_85);
		ByteU5BU5D_t4116647657* L_87 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_86);
		V_6 = L_87;
		RuntimeObject* L_88 = V_5;
		ByteU5BU5D_t4116647657* L_89 = V_6;
		NullCheck(L_88);
		InterfaceActionInvoker2< ByteU5BU5D_t4116647657*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Byte>::CopyTo(!0[],System.Int32) */, ICollection_1_t3962448610_il2cpp_TypeInfo_var, L_88, L_89, 0);
		ByteU5BU5D_t4116647657* L_90 = V_6;
		ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124(__this, L_90, /*hidden argument*/NULL);
		uint8_t L_91 = V_4;
		V_4 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1)))));
	}

IL_024d:
	{
		uint8_t L_92 = V_4;
		ConnectionConfig_t4173981269 * L_93 = ___config0;
		NullCheck(L_93);
		int32_t L_94 = ConnectionConfig_get_SharedOrderChannelCount_m1090156233(L_93, /*hidden argument*/NULL);
		if ((((int32_t)L_92) < ((int32_t)L_94)))
		{
			goto IL_0219;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWrapper()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitWrapper_m4242995060 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitWrapper_m4242995060_ftn) (ConnectionConfigInternal_t1246935692 *);
	static ConnectionConfigInternal_InitWrapper_m4242995060_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitWrapper_m4242995060_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitWrapper()");
	_il2cpp_icall_func(__this);
}
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(UnityEngine.Networking.QosType)
extern "C" IL2CPP_METHOD_ATTR uint8_t ConnectionConfigInternal_AddChannel_m2993044037 (ConnectionConfigInternal_t1246935692 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef uint8_t (*ConnectionConfigInternal_AddChannel_m2993044037_ftn) (ConnectionConfigInternal_t1246935692 *, int32_t);
	static ConnectionConfigInternal_AddChannel_m2993044037_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_AddChannel_m2993044037_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::AddChannel(UnityEngine.Networking.QosType)");
	uint8_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPacketSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitPacketSize_m3352433354 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitPacketSize_m3352433354_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitPacketSize_m3352433354_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitPacketSize_m3352433354_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitPacketSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitFragmentSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitFragmentSize_m4083592312 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitFragmentSize_m4083592312_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitFragmentSize_m4083592312_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitFragmentSize_m4083592312_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitFragmentSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitResendTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitResendTimeout_m4785138 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitResendTimeout_m4785138_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitResendTimeout_m4785138_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitResendTimeout_m4785138_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitResendTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitDisconnectTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitDisconnectTimeout_m121854687 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitDisconnectTimeout_m121854687_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitDisconnectTimeout_m121854687_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitDisconnectTimeout_m121854687_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitDisconnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitConnectTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitConnectTimeout_m3275392522 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitConnectTimeout_m3275392522_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitConnectTimeout_m3275392522_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitConnectTimeout_m3275392522_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitConnectTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMinUpdateTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMinUpdateTimeout_m3908962020_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMinUpdateTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPingTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitPingTimeout_m2511090311 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitPingTimeout_m2511090311_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitPingTimeout_m2511090311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitPingTimeout_m2511090311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitPingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitReducedPingTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitReducedPingTimeout_m612333836 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitReducedPingTimeout_m612333836_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitReducedPingTimeout_m612333836_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitReducedPingTimeout_m612333836_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitReducedPingTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAllCostTimeout(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAllCostTimeout_m1149782117 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitAllCostTimeout_m1149782117_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitAllCostTimeout_m1149782117_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitAllCostTimeout_m1149782117_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitAllCostTimeout(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitNetworkDropThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869_ftn) (ConnectionConfigInternal_t1246935692 *, uint8_t);
	static ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitNetworkDropThreshold_m1616679869_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitNetworkDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitOverflowDropThreshold(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010_ftn) (ConnectionConfigInternal_t1246935692 *, uint8_t);
	static ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitOverflowDropThreshold_m4010646010_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitOverflowDropThreshold(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxConnectionAttempt(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456 (ConnectionConfigInternal_t1246935692 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456_ftn) (ConnectionConfigInternal_t1246935692 *, uint8_t);
	static ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMaxConnectionAttempt_m2995401456_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMaxConnectionAttempt(System.Byte)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAckDelay(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAckDelay_m507392147 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitAckDelay_m507392147_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitAckDelay_m507392147_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitAckDelay_m507392147_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitAckDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitSendDelay(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitSendDelay_m2800814260 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitSendDelay_m2800814260_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitSendDelay_m2800814260_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitSendDelay_m2800814260_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitSendDelay(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m2870654930_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageCount(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m908873943_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageCount(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxSentMessageQueueSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitMaxSentMessageQueueSize_m2306491038_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitMaxSentMessageQueueSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAcksType(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitAcksType_m4235038191 (ConnectionConfigInternal_t1246935692 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitAcksType_m4235038191_ftn) (ConnectionConfigInternal_t1246935692 *, int32_t);
	static ConnectionConfigInternal_InitAcksType_m4235038191_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitAcksType_m4235038191_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitAcksType(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUsePlatformSpecificProtocols(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864 (ConnectionConfigInternal_t1246935692 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864_ftn) (ConnectionConfigInternal_t1246935692 *, bool);
	static ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m3183906864_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitUsePlatformSpecificProtocols(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitInitialBandwidth(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitInitialBandwidth_m3853047278 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitInitialBandwidth_m3853047278_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitInitialBandwidth_m3853047278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitInitialBandwidth_m3853047278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitInitialBandwidth(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitBandwidthPeakFactor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278 (ConnectionConfigInternal_t1246935692 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278_ftn) (ConnectionConfigInternal_t1246935692 *, float);
	static ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitBandwidthPeakFactor_m1971295278_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitBandwidthPeakFactor(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWebSocketReceiveBufferMaxSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671 (ConnectionConfigInternal_t1246935692 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671_ftn) (ConnectionConfigInternal_t1246935692 *, uint16_t);
	static ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitWebSocketReceiveBufferMaxSize_m1573689671_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitWebSocketReceiveBufferMaxSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUdpSocketReceiveBufferMaxSize(System.UInt32)
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267 (ConnectionConfigInternal_t1246935692 * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267_ftn) (ConnectionConfigInternal_t1246935692 *, uint32_t);
	static ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitUdpSocketReceiveBufferMaxSize_m3391700267_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitUdpSocketReceiveBufferMaxSize(System.UInt32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLCertFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLCertFilePath_m8859585 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_InitSSLCertFilePath_m8859585_ftn) (ConnectionConfigInternal_t1246935692 *, String_t*);
	static ConnectionConfigInternal_InitSSLCertFilePath_m8859585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitSSLCertFilePath_m8859585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitSSLCertFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLPrivateKeyFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793_ftn) (ConnectionConfigInternal_t1246935692 *, String_t*);
	static ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitSSLPrivateKeyFilePath_m1432782793_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitSSLPrivateKeyFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Int32 UnityEngine.Networking.ConnectionConfigInternal::InitSSLCAFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t ConnectionConfigInternal_InitSSLCAFilePath_m1966096029 (ConnectionConfigInternal_t1246935692 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	typedef int32_t (*ConnectionConfigInternal_InitSSLCAFilePath_m1966096029_ftn) (ConnectionConfigInternal_t1246935692 *, String_t*);
	static ConnectionConfigInternal_InitSSLCAFilePath_m1966096029_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_InitSSLCAFilePath_m1966096029_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::InitSSLCAFilePath(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___value0);
	return retVal;
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Dispose_m741640762 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method)
{
	typedef void (*ConnectionConfigInternal_Dispose_m741640762_ftn) (ConnectionConfigInternal_t1246935692 *);
	static ConnectionConfigInternal_Dispose_m741640762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_Dispose_m741640762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Finalize()
extern "C" IL2CPP_METHOD_ATTR void ConnectionConfigInternal_Finalize_m2517401324 (ConnectionConfigInternal_t1246935692 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		ConnectionConfigInternal_Dispose_m741640762(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124 (ConnectionConfigInternal_t1246935692 * __this, ByteU5BU5D_t4116647657* ___values0, const RuntimeMethod* method)
{
	typedef bool (*ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124_ftn) (ConnectionConfigInternal_t1246935692 *, ByteU5BU5D_t4116647657*);
	static ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConnectionConfigInternal_MakeChannelsSharedOrder_m1931184124_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.ConnectionConfigInternal::MakeChannelsSharedOrder(System.Byte[])");
	bool retVal = _il2cpp_icall_func(__this, ___values0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HostTopology__ctor_m284550224 (HostTopology_t4059263395 * __this, ConnectionConfig_t4173981269 * ___defaultConfig0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m284550224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t4173981269 *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_t1351088715 * L_0 = (List_1_t1351088715 *)il2cpp_codegen_object_new(List_1_t1351088715_il2cpp_TypeInfo_var);
		List_1__ctor_m607530126(L_0, /*hidden argument*/List_1__ctor_m607530126_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_1 = ___defaultConfig0;
		if (L_1)
		{
			goto IL_0052;
		}
	}
	{
		NullReferenceException_t1023182353 * L_2 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_2, _stringLiteral3778735433, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0052:
	{
		int32_t L_3 = ___maxDefaultConnections1;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_4, _stringLiteral782611174, _stringLiteral1442255268, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0069:
	{
		int32_t L_5 = ___maxDefaultConnections1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)65535))))
		{
			goto IL_0084;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_6 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_6, _stringLiteral782611174, _stringLiteral3563946363, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, HostTopology__ctor_m284550224_RuntimeMethod_var);
	}

IL_0084:
	{
		ConnectionConfig_t4173981269 * L_7 = ___defaultConfig0;
		ConnectionConfig_Validate_m2712188470(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		ConnectionConfig_t4173981269 * L_8 = ___defaultConfig0;
		ConnectionConfig_t4173981269 * L_9 = (ConnectionConfig_t4173981269 *)il2cpp_codegen_object_new(ConnectionConfig_t4173981269_il2cpp_TypeInfo_var);
		ConnectionConfig__ctor_m2640243122(L_9, L_8, /*hidden argument*/NULL);
		__this->set_m_DefConfig_0(L_9);
		int32_t L_10 = ___maxDefaultConnections1;
		__this->set_m_MaxDefConnections_1(L_10);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopology::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HostTopology__ctor_m1320382600 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology__ctor_m1320382600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_DefConfig_0((ConnectionConfig_t4173981269 *)NULL);
		__this->set_m_MaxDefConnections_1(0);
		List_1_t1351088715 * L_0 = (List_1_t1351088715 *)il2cpp_codegen_object_new(List_1_t1351088715_il2cpp_TypeInfo_var);
		List_1__ctor_m607530126(L_0, /*hidden argument*/List_1__ctor_m607530126_RuntimeMethod_var);
		__this->set_m_SpecialConnections_2(L_0);
		__this->set_m_ReceivedMessagePoolSize_3((uint16_t)((int32_t)1024));
		__this->set_m_SentMessagePoolSize_4((uint16_t)((int32_t)1024));
		__this->set_m_MessagePoolSizeGrowthFactor_5((0.75f));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C" IL2CPP_METHOD_ATTR ConnectionConfig_t4173981269 * HostTopology_get_DefaultConfig_m230960067 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	ConnectionConfig_t4173981269 * V_0 = NULL;
	{
		ConnectionConfig_t4173981269 * L_0 = __this->get_m_DefConfig_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ConnectionConfig_t4173981269 * L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopology_get_MaxDefaultConnections_m1800856148 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_MaxDefConnections_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopology_get_SpecialConnectionConfigsCount_m2294874456 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology_get_SpecialConnectionConfigsCount_m2294874456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		List_1_t1351088715 * L_0 = __this->get_m_SpecialConnections_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m1480908111(L_0, /*hidden argument*/List_1_get_Count_m1480908111_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigs()
extern "C" IL2CPP_METHOD_ATTR List_1_t1351088715 * HostTopology_get_SpecialConnectionConfigs_m2228393737 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	List_1_t1351088715 * V_0 = NULL;
	{
		List_1_t1351088715 * L_0 = __this->get_m_SpecialConnections_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		List_1_t1351088715 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
extern "C" IL2CPP_METHOD_ATTR ConnectionConfig_t4173981269 * HostTopology_GetSpecialConnectionConfig_m1011380843 (HostTopology_t4059263395 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopology_GetSpecialConnectionConfig_m1011380843_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfig_t4173981269 * V_0 = NULL;
	{
		int32_t L_0 = ___i0;
		List_1_t1351088715 * L_1 = __this->get_m_SpecialConnections_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m1480908111(L_1, /*hidden argument*/List_1_get_Count_m1480908111_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___i0;
		if (L_3)
		{
			goto IL_0023;
		}
	}

IL_0018:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral3288140609, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, HostTopology_GetSpecialConnectionConfig_m1011380843_RuntimeMethod_var);
	}

IL_0023:
	{
		List_1_t1351088715 * L_5 = __this->get_m_SpecialConnections_2();
		int32_t L_6 = ___i0;
		NullCheck(L_5);
		ConnectionConfig_t4173981269 * L_7 = List_1_get_Item_m1179646797(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1179646797_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_0037;
	}

IL_0037:
	{
		ConnectionConfig_t4173981269 * L_8 = V_0;
		return L_8;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t HostTopology_get_ReceivedMessagePoolSize_m1643446820 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_ReceivedMessagePoolSize_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
extern "C" IL2CPP_METHOD_ATTR uint16_t HostTopology_get_SentMessagePoolSize_m3561946879 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0 = __this->get_m_SentMessagePoolSize_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
extern "C" IL2CPP_METHOD_ATTR float HostTopology_get_MessagePoolSizeGrowthFactor_m2653453492 (HostTopology_t4059263395 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_MessagePoolSizeGrowthFactor_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal__ctor_m1686371270 (HostTopologyInternal_t761087795 * __this, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HostTopologyInternal__ctor_m1686371270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfigInternal_t1246935692 * V_0 = NULL;
	int32_t V_1 = 0;
	ConnectionConfig_t4173981269 * V_2 = NULL;
	ConnectionConfigInternal_t1246935692 * V_3 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		HostTopology_t4059263395 * L_0 = ___topology0;
		NullCheck(L_0);
		ConnectionConfig_t4173981269 * L_1 = HostTopology_get_DefaultConfig_m230960067(L_0, /*hidden argument*/NULL);
		ConnectionConfigInternal_t1246935692 * L_2 = (ConnectionConfigInternal_t1246935692 *)il2cpp_codegen_object_new(ConnectionConfigInternal_t1246935692_il2cpp_TypeInfo_var);
		ConnectionConfigInternal__ctor_m151495501(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ConnectionConfigInternal_t1246935692 * L_3 = V_0;
		HostTopology_t4059263395 * L_4 = ___topology0;
		NullCheck(L_4);
		int32_t L_5 = HostTopology_get_MaxDefaultConnections_m1800856148(L_4, /*hidden argument*/NULL);
		HostTopologyInternal_InitWrapper_m1635473231(__this, L_3, L_5, /*hidden argument*/NULL);
		V_1 = 1;
		goto IL_0044;
	}

IL_0027:
	{
		HostTopology_t4059263395 * L_6 = ___topology0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		ConnectionConfig_t4173981269 * L_8 = HostTopology_GetSpecialConnectionConfig_m1011380843(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		ConnectionConfig_t4173981269 * L_9 = V_2;
		ConnectionConfigInternal_t1246935692 * L_10 = (ConnectionConfigInternal_t1246935692 *)il2cpp_codegen_object_new(ConnectionConfigInternal_t1246935692_il2cpp_TypeInfo_var);
		ConnectionConfigInternal__ctor_m151495501(L_10, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		ConnectionConfigInternal_t1246935692 * L_11 = V_3;
		HostTopologyInternal_AddSpecialConnectionConfig_m211304006(__this, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0044:
	{
		int32_t L_13 = V_1;
		HostTopology_t4059263395 * L_14 = ___topology0;
		NullCheck(L_14);
		int32_t L_15 = HostTopology_get_SpecialConnectionConfigsCount_m2294874456(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)L_15)))
		{
			goto IL_0027;
		}
	}
	{
		HostTopology_t4059263395 * L_16 = ___topology0;
		HostTopologyInternal_InitOtherParameters_m3587098563(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitWrapper(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitWrapper_m1635473231 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, int32_t ___maxDefaultConnections1, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InitWrapper_m1635473231_ftn) (HostTopologyInternal_t761087795 *, ConnectionConfigInternal_t1246935692 *, int32_t);
	static HostTopologyInternal_InitWrapper_m1635473231_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InitWrapper_m1635473231_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InitWrapper(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)");
	_il2cpp_icall_func(__this, ___config0, ___maxDefaultConnections1);
}
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopologyInternal_AddSpecialConnectionConfig_m211304006 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		ConnectionConfigInternal_t1246935692 * L_0 = ___config0;
		int32_t L_1 = HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfigWrapper(UnityEngine.Networking.ConnectionConfigInternal)
extern "C" IL2CPP_METHOD_ATTR int32_t HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238 (HostTopologyInternal_t761087795 * __this, ConnectionConfigInternal_t1246935692 * ___config0, const RuntimeMethod* method)
{
	typedef int32_t (*HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238_ftn) (HostTopologyInternal_t761087795 *, ConnectionConfigInternal_t1246935692 *);
	static HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_AddSpecialConnectionConfigWrapper_m2878580238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfigWrapper(UnityEngine.Networking.ConnectionConfigInternal)");
	int32_t retVal = _il2cpp_icall_func(__this, ___config0);
	return retVal;
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitOtherParameters(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitOtherParameters_m3587098563 (HostTopologyInternal_t761087795 * __this, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method)
{
	{
		HostTopology_t4059263395 * L_0 = ___topology0;
		NullCheck(L_0);
		uint16_t L_1 = HostTopology_get_ReceivedMessagePoolSize_m1643446820(L_0, /*hidden argument*/NULL);
		HostTopologyInternal_InitReceivedPoolSize_m2115070075(__this, L_1, /*hidden argument*/NULL);
		HostTopology_t4059263395 * L_2 = ___topology0;
		NullCheck(L_2);
		uint16_t L_3 = HostTopology_get_SentMessagePoolSize_m3561946879(L_2, /*hidden argument*/NULL);
		HostTopologyInternal_InitSentMessagePoolSize_m3801353223(__this, L_3, /*hidden argument*/NULL);
		HostTopology_t4059263395 * L_4 = ___topology0;
		NullCheck(L_4);
		float L_5 = HostTopology_get_MessagePoolSizeGrowthFactor_m2653453492(L_4, /*hidden argument*/NULL);
		HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitReceivedPoolSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitReceivedPoolSize_m2115070075 (HostTopologyInternal_t761087795 * __this, uint16_t ___pool0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InitReceivedPoolSize_m2115070075_ftn) (HostTopologyInternal_t761087795 *, uint16_t);
	static HostTopologyInternal_InitReceivedPoolSize_m2115070075_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InitReceivedPoolSize_m2115070075_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InitReceivedPoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___pool0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitSentMessagePoolSize(System.UInt16)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitSentMessagePoolSize_m3801353223 (HostTopologyInternal_t761087795 * __this, uint16_t ___pool0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InitSentMessagePoolSize_m3801353223_ftn) (HostTopologyInternal_t761087795 *, uint16_t);
	static HostTopologyInternal_InitSentMessagePoolSize_m3801353223_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InitSentMessagePoolSize_m3801353223_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InitSentMessagePoolSize(System.UInt16)");
	_il2cpp_icall_func(__this, ___pool0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::InitMessagePoolSizeGrowthFactor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449 (HostTopologyInternal_t761087795 * __this, float ___factor0, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449_ftn) (HostTopologyInternal_t761087795 *, float);
	static HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m3930090449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::InitMessagePoolSizeGrowthFactor(System.Single)");
	_il2cpp_icall_func(__this, ___factor0);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose()
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_Dispose_m1652380424 (HostTopologyInternal_t761087795 * __this, const RuntimeMethod* method)
{
	typedef void (*HostTopologyInternal_Dispose_m1652380424_ftn) (HostTopologyInternal_t761087795 *);
	static HostTopologyInternal_Dispose_m1652380424_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HostTopologyInternal_Dispose_m1652380424_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.HostTopologyInternal::Dispose()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.HostTopologyInternal::Finalize()
extern "C" IL2CPP_METHOD_ATTR void HostTopologyInternal_Finalize_m3358655436 (HostTopologyInternal_t761087795 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		HostTopologyInternal_Dispose_m1652380424(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkTransport::Init()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_Init_m3007042076 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		NetworkTransport_InitWithNoParameters_m1152096323(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkTransport::InitWithNoParameters()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_InitWithNoParameters_m1152096323 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_InitWithNoParameters_m1152096323_ftn) ();
	static NetworkTransport_InitWithNoParameters_m1152096323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_InitWithNoParameters_m1152096323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::InitWithNoParameters()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_Shutdown_m2784069691 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*NetworkTransport_Shutdown_m2784069691_ftn) ();
	static NetworkTransport_Shutdown_m2784069691_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Shutdown_m2784069691_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Shutdown()");
	_il2cpp_icall_func();
}
// System.Int32 UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetMaxPacketSize_m4140356182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_GetMaxPacketSize_m4140356182_ftn) ();
	static NetworkTransport_GetMaxPacketSize_m4140356182_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_GetMaxPacketSize_m4140356182_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::GetMaxPacketSize()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Networking.NetworkTransport::CheckTopology(UnityEngine.Networking.HostTopology)
extern "C" IL2CPP_METHOD_ATTR void NetworkTransport_CheckTopology_m750760940 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_CheckTopology_m750760940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = NetworkTransport_GetMaxPacketSize_m4140356182(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		HostTopology_t4059263395 * L_1 = ___topology0;
		NullCheck(L_1);
		ConnectionConfig_t4173981269 * L_2 = HostTopology_get_DefaultConfig_m230960067(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		uint16_t L_3 = ConnectionConfig_get_PacketSize_m195714670(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_5 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1563464412, L_5, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_7 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, NetworkTransport_CheckTopology_m750760940_RuntimeMethod_var);
	}

IL_0035:
	{
		V_1 = 0;
		goto IL_0089;
	}

IL_003c:
	{
		HostTopology_t4059263395 * L_8 = ___topology0;
		NullCheck(L_8);
		List_1_t1351088715 * L_9 = HostTopology_get_SpecialConnectionConfigs_m2228393737(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		NullCheck(L_9);
		ConnectionConfig_t4173981269 * L_11 = List_1_get_Item_m1179646797(L_9, L_10, /*hidden argument*/List_1_get_Item_m1179646797_RuntimeMethod_var);
		NullCheck(L_11);
		uint16_t L_12 = ConnectionConfig_get_PacketSize_m195714670(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0084;
		}
	}
	{
		String_t* L_14 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_15 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral3675259609, L_14, _stringLiteral414500564, L_15, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_t777629997 * L_17 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, NULL, NetworkTransport_CheckTopology_m750760940_RuntimeMethod_var);
	}

IL_0084:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0089:
	{
		int32_t L_19 = V_1;
		HostTopology_t4059263395 * L_20 = ___topology0;
		NullCheck(L_20);
		List_1_t1351088715 * L_21 = HostTopology_get_SpecialConnectionConfigs_m2228393737(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m1480908111(L_21, /*hidden argument*/List_1_get_Count_m1480908111_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_22)))
		{
			goto IL_003c;
		}
	}
	{
		return;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWrapper_m1104996213 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, String_t* ___ip1, int32_t ___port2, int32_t ___minTimeout3, int32_t ___maxTimeout4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddHostWrapper_m1104996213_ftn) (HostTopologyInternal_t761087795 *, String_t*, int32_t, int32_t, int32_t);
	static NetworkTransport_AddHostWrapper_m1104996213_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddHostWrapper_m1104996213_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___ip1, ___port2, ___minTimeout3, ___maxTimeout4);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHostWrapperWithoutIp_m987964846 (RuntimeObject * __this /* static, unused */, HostTopologyInternal_t761087795 * ___topologyInt0, int32_t ___port1, int32_t ___minTimeout2, int32_t ___maxTimeout3, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_AddHostWrapperWithoutIp_m987964846_ftn) (HostTopologyInternal_t761087795 *, int32_t, int32_t, int32_t);
	static NetworkTransport_AddHostWrapperWithoutIp_m987964846_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_AddHostWrapperWithoutIp_m987964846_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::AddHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32,System.Int32,System.Int32)");
	int32_t retVal = _il2cpp_icall_func(___topologyInt0, ___port1, ___minTimeout2, ___maxTimeout3);
	return retVal;
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m1126110129 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (String_t*)NULL;
		HostTopology_t4059263395 * L_0 = ___topology0;
		int32_t L_1 = ___port1;
		String_t* L_2 = V_0;
		int32_t L_3 = NetworkTransport_AddHost_m236682671(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m236682671 (RuntimeObject * __this /* static, unused */, HostTopology_t4059263395 * ___topology0, int32_t ___port1, String_t* ___ip2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_AddHost_m236682671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		HostTopology_t4059263395 * L_0 = ___topology0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral335420074, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetworkTransport_AddHost_m236682671_RuntimeMethod_var);
	}

IL_0012:
	{
		HostTopology_t4059263395 * L_2 = ___topology0;
		NetworkTransport_CheckTopology_m750760940(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___ip2;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		HostTopology_t4059263395 * L_4 = ___topology0;
		HostTopologyInternal_t761087795 * L_5 = (HostTopologyInternal_t761087795 *)il2cpp_codegen_object_new(HostTopologyInternal_t761087795_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m1686371270(L_5, L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___port1;
		int32_t L_7 = NetworkTransport_AddHostWrapperWithoutIp_m987964846(NULL /*static, unused*/, L_5, L_6, 0, 0, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0047;
	}

IL_0032:
	{
		HostTopology_t4059263395 * L_8 = ___topology0;
		HostTopologyInternal_t761087795 * L_9 = (HostTopologyInternal_t761087795 *)il2cpp_codegen_object_new(HostTopologyInternal_t761087795_il2cpp_TypeInfo_var);
		HostTopologyInternal__ctor_m1686371270(L_9, L_8, /*hidden argument*/NULL);
		String_t* L_10 = ___ip2;
		int32_t L_11 = ___port1;
		int32_t L_12 = NetworkTransport_AddHostWrapper_m1104996213(NULL /*static, unused*/, L_9, L_10, L_11, 0, 0, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0047;
	}

IL_0047:
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_Connect_m1156091760 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, String_t* ___address1, int32_t ___port2, int32_t ___exeptionConnectionId3, uint8_t* ___error4, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_Connect_m1156091760_ftn) (int32_t, String_t*, int32_t, int32_t, uint8_t*);
	static NetworkTransport_Connect_m1156091760_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Connect_m1156091760_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___address1, ___port2, ___exeptionConnectionId3, ___error4);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_Disconnect_m2330484719 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, uint8_t* ___error2, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_Disconnect_m2330484719_ftn) (int32_t, int32_t, uint8_t*);
	static NetworkTransport_Disconnect_m2330484719_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Disconnect_m2330484719_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___error2);
	return retVal;
}
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_Send_m1813092975 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NetworkTransport_Send_m1813092975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buffer3;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3076065613(L_1, _stringLiteral1735740363, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, NetworkTransport_Send_m1813092975_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___hostId0;
		int32_t L_3 = ___connectionId1;
		int32_t L_4 = ___channelId2;
		ByteU5BU5D_t4116647657* L_5 = ___buffer3;
		int32_t L_6 = ___size4;
		uint8_t* L_7 = ___error5;
		bool L_8 = NetworkTransport_SendWrapper_m4225720830(NULL /*static, unused*/, L_2, L_3, L_4, L_5, L_6, (uint8_t*)L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR bool NetworkTransport_SendWrapper_m4225720830 (RuntimeObject * __this /* static, unused */, int32_t ___hostId0, int32_t ___connectionId1, int32_t ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___size4, uint8_t* ___error5, const RuntimeMethod* method)
{
	typedef bool (*NetworkTransport_SendWrapper_m4225720830_ftn) (int32_t, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t, uint8_t*);
	static NetworkTransport_SendWrapper_m4225720830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_SendWrapper_m4225720830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)");
	bool retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___size4, ___error5);
	return retVal;
}
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C" IL2CPP_METHOD_ATTR int32_t NetworkTransport_Receive_m3894959003 (RuntimeObject * __this /* static, unused */, int32_t* ___hostId0, int32_t* ___connectionId1, int32_t* ___channelId2, ByteU5BU5D_t4116647657* ___buffer3, int32_t ___bufferSize4, int32_t* ___receivedSize5, uint8_t* ___error6, const RuntimeMethod* method)
{
	typedef int32_t (*NetworkTransport_Receive_m3894959003_ftn) (int32_t*, int32_t*, int32_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t*, uint8_t*);
	static NetworkTransport_Receive_m3894959003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (NetworkTransport_Receive_m3894959003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)");
	int32_t retVal = _il2cpp_icall_func(___hostId0, ___connectionId1, ___channelId2, ___buffer3, ___bufferSize4, ___receivedSize5, ___error6);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
