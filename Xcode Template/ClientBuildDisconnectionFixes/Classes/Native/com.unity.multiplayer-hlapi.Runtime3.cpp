#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t9726E68F6F4746440E4FEE6FDF4680AF822FF6D5;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>
struct List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_tC839E605BFB5C2D3A77618A72FA6C58604F5900B;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t9558BF06D724AE60CAAD6BEDC02ECF76025C6D0D;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t11C9FB4A46EC720F57C09B17F0650D1041DD5C01;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.String>
struct SyncListChanged_tC6EB6238731A0992507AA1609FB64702B3EBA7B4;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_tA655772175294233B56D5B22CEE7BD197AEE723A;
// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2;
// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7;
// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_t5EE0D34C3000C746D345F3F874114E670EC5E1C5;
// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9;
// UnityEngine.Networking.SyncList`1<System.String>
struct SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3;
// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]
struct CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Networking.NetworkBehaviour[]
struct NetworkBehaviourU5BU5D_t1DD8C1C599D02EE71244008FBECF372672276DFE;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C;
// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[]
struct PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Networking.NetworkSystem.AddPlayerMessage
struct AddPlayerMessage_t8E94AC8329D77FE6B781E634D451BD6EA6C26D95;
// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_tC923BEF5EDBCFB8729E6AFFC01EB03695815F149;
// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_tC6D5F290A16848FD43008C88405B471B416767AA;
// UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage
struct AnimationTriggerMessage_t4C7632DDB6D76251E75479F468BEC8C7CC6EFA46;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_tFFD742F45EC7E03F1278F1B6D722E62DDF74C3FB;
// UnityEngine.Networking.Channels
struct Channels_t6F3C4F3E402757F4CBB768BBBF2DA6468D570EC5;
// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct ClientAuthorityMessage_tE13DA094E8802F6BE6D7845D06DCF110F83AA39B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct EmptyMessage_t7CB1744BE9D0624FAF94F6C20BEB317850C26C23;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Networking.NetworkSystem.ErrorMessage
struct ErrorMessage_t090D2A233C0B03E10E7FF76E98ABA7B9E3AE9C29;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct IntegerMessage_tC0C55FB9DF3EEB5B2643E7F08C21AB31095468FC;
// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage
struct LobbyReadyToBeginMessage_tC0EB3FC9804E40BD42B04F1C231478C21C7AB4FA;
// UnityEngine.Networking.MessageBase
struct MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Networking.MsgType
struct MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4;
// UnityEngine.Networking.NetBuffer
struct NetBuffer_tAC9483411292630B25B8A69B376486ACF28AD07C;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t24169710A47310BC3FE0CC9C4B572F075D0304E5;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_tF76F5B2DD67B1FB0D0B7B3ED7489C35BFBF0A2FD;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D;
// UnityEngine.Networking.NetworkSystem.NotReadyMessage
struct NotReadyMessage_tCA7E545F5AC6A175451A840D5EE06ED4AE1CA855;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct ObjectDestroyMessage_tD5BEC7016E92F683E030F0E8F7B58AD2270C889C;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_tDEF8DBE3A606AABB4E8550E88102B7618C073ED1;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct ObjectSpawnMessage_tEAD868793F02803713E7D3DDA874880DF52AA800;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct ObjectSpawnSceneMessage_t7F40FE67BE68B3A233695F20FF1E6A75C61F36FA;
// UnityEngine.Networking.NetworkSystem.OverrideTransformMessage
struct OverrideTransformMessage_tE28F9E7E15FE7A9DB12D33D9783B452ADB33DC6E;
// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct OwnerMessage_t3B1FB3E3C93EFAAA88C8B4D0CFA470BC74EFEF9B;
// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct PeerAuthorityMessage_t4D4E36C51C920870AC6E9C4399180A2CBBFE7DC6;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB;
// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t84739010115739B6CB9C61A0B5F8D8E502CB353B;
// UnityEngine.Networking.PlayerController
struct PlayerController_t3FBFA1C76AC5006B840F364AE7B113D70B81A2BD;
// UnityEngine.Networking.NetworkSystem.ReadyMessage
struct ReadyMessage_tACF673A1B0E41B1BA50F1D6C747EAF1EA4E231C6;
// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct ReconnectMessage_t5BE728CB9D727A9C26717030B7B811D8AD14CA5D;
// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_tCAA5095003A51B1AAC798DAE1B9B2E6A6BB3CF4E;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.StringMessage
struct StringMessage_t5C0AA3DDE1D5020866FDD89FD24BE66B007665F4;
// UnityEngine.Networking.SyncListBool
struct SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD;
// UnityEngine.Networking.SyncListFloat
struct SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525;
// UnityEngine.Networking.SyncListInt
struct SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0;
// UnityEngine.Networking.SyncListString
struct SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3;
// UnityEngine.Networking.SyncListUInt
struct SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback
struct ClientAuthorityCallback_t41A010D18AAA237CBB32CCEB2C6B98590B56CDA0;

IL2CPP_EXTERN_C RuntimeClass* CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B7C4FCC1EE86CB6EA27E82D0768F3C5EA9AF9E4;
IL2CPP_EXTERN_C String_t* _stringLiteral1087D59D3BD2B97FB1727D6C81DD87D9DABEAD5F;
IL2CPP_EXTERN_C String_t* _stringLiteral127F90A769FB4C553F77F8D37AADDEC63A09EE3F;
IL2CPP_EXTERN_C String_t* _stringLiteral13994E6527DCB635F1A1EB19C59A5C3019A436BC;
IL2CPP_EXTERN_C String_t* _stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B;
IL2CPP_EXTERN_C String_t* _stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C;
IL2CPP_EXTERN_C String_t* _stringLiteral1ED680B2B3E578FB949C553CC8315947F7C11C9E;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA1B0B295B02690FCCC1785649E50DC946A7CB5;
IL2CPP_EXTERN_C String_t* _stringLiteral234E65E71425FB76B35D3B824090608036A76D13;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2F7120D7CAD4D1020796F12B22BE2DDA4A63DF98;
IL2CPP_EXTERN_C String_t* _stringLiteral3878D403F76D0BAED5AB592B5BA1174C61A4892A;
IL2CPP_EXTERN_C String_t* _stringLiteral3EC449F5B2EAFA85049BADD7C4D0D1673C424E08;
IL2CPP_EXTERN_C String_t* _stringLiteral3FBAA21AA905D4B4EA4D43342AE620A966595D3A;
IL2CPP_EXTERN_C String_t* _stringLiteral45A2803629897DBB2C206F364A3099B875FAF04F;
IL2CPP_EXTERN_C String_t* _stringLiteral4D36A48931D35122B8D125FF8E0CDFFC638DCF62;
IL2CPP_EXTERN_C String_t* _stringLiteral557B7333BE9FE30592B767F16562EA491ECAC716;
IL2CPP_EXTERN_C String_t* _stringLiteral5A7AB4C26835F2B7D9AC2265C336A216EAADAFDA;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5C9DB922F78B95FFD954D673041062B2B1CFFA30;
IL2CPP_EXTERN_C String_t* _stringLiteral632E0FE7854BBC979B4DB06BCE624197CBB6ED4D;
IL2CPP_EXTERN_C String_t* _stringLiteral656E1DEE31CADB55B09AB66611AC4A9FB6282D9E;
IL2CPP_EXTERN_C String_t* _stringLiteral696EE977D0ED598CAE1C700CC8766043622D3B8F;
IL2CPP_EXTERN_C String_t* _stringLiteral74E1F512FCA395E2AF063DD5C08BE4BCB0A94E91;
IL2CPP_EXTERN_C String_t* _stringLiteral82F22AC12CFBA65C105242552D655442B27BA5EE;
IL2CPP_EXTERN_C String_t* _stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8EAAA157D1F5D6977F519F039F9114FBEB79A704;
IL2CPP_EXTERN_C String_t* _stringLiteral9468E6AB2212EBC917A11F74850A6EAC31C9AF12;
IL2CPP_EXTERN_C String_t* _stringLiteral95E092E81BBD1D174346BD2D65962936389A0236;
IL2CPP_EXTERN_C String_t* _stringLiteral9A08A617FCF06FDA3322DF86E11EDAFE8DAE2A18;
IL2CPP_EXTERN_C String_t* _stringLiteralAA32E3195E62F777991EC48916535BB4E4A2F2B2;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4D078F0B204694308CED662D1F26B6468CBC11;
IL2CPP_EXTERN_C String_t* _stringLiteralB621ADB84CF65CE6F7918D90F40829282AD4AE47;
IL2CPP_EXTERN_C String_t* _stringLiteralBF3FA1C48F42A3EE0984F53B24462A5E5C1713F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC735577AECE03EE7B42841C93EEE500B92671B34;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DED19749A48661A81474DE4485C2452F386245;
IL2CPP_EXTERN_C String_t* _stringLiteralCA836067A0DF79A979E3B805D2F0E23310042F7D;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1C39545E708795833576BE2CA997D65A84E8AE;
IL2CPP_EXTERN_C String_t* _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD8E17FB545974B84E3EE00A7391CC68D62F85F75;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63_m6BA12B4C7900A0FA21428FB140B66A0F50E02856_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA7B44268FDAC9F0CA81ED8AE91B8765E0DB784D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mBFD6A929875E559F85AE07F9A97A6D72112894C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDDC1D201BE6BB700CBAF518700978DEFCF9CC6D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_AddInternal_mBEA522EAF3CCF7571CE1CDCBA779CC27B4022A51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_m240E06AF225D388BD9EE3F7CA3CDA2B5B4848262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_m601D79E5F4EB96E7AF24C3AC01BD09E8B943AB9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_mB13663180FB7BBDF6017EF923D8DD09355C78FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_mE825A77E0840DA5F33041728C3CADDFAD59BDEB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_Clear_mFAD9F1F795861AADCADEF92F02849D315C8AB9C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m1AABD95181F936B4C555B9D5019E52AD9050281E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m1D6EF2DC36D2FA215799CDAE810E8FA6AF386418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_m2E8160A8F971FEC304FC673E9A8AFEF712CE3A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_mE11CCC7FD2FB2FC679114D4E187397335F52AC1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1__ctor_mE45F88D477D4E3B4F05BECC961891D6D0B5D89EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_mBCD2E80F46A782A25F9281DAC20BB1811B72B6AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_m233CC1129491F600FAAF9AAA44E4B6AA3FCC6808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_m2C31244B40A36DA4064076DD6D79F9D8635DD9A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_m9394BB687B7FD0429E196651C210CE8997C12E2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_m9B86FAC3B7F86769BE5C016A686776127D6D01DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SyncList_1_get_Item_mCD21DC7939E6112FB67C3EEE6B5DB09B1E73A229_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C;
struct PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>
struct List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* ___s_emptyArray_5;
};

// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t24169710A47310BC3FE0CC9C4B572F075D0304E5* ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_tC839E605BFB5C2D3A77618A72FA6C58604F5900B* ___m_Callback_3;
};

// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t24169710A47310BC3FE0CC9C4B572F075D0304E5* ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t9558BF06D724AE60CAAD6BEDC02ECF76025C6D0D* ___m_Callback_3;
};

// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t24169710A47310BC3FE0CC9C4B572F075D0304E5* ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_t11C9FB4A46EC720F57C09B17F0650D1041DD5C01* ___m_Callback_3;
};

// UnityEngine.Networking.SyncList`1<System.String>
struct SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t24169710A47310BC3FE0CC9C4B572F075D0304E5* ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_tC6EB6238731A0992507AA1609FB64702B3EBA7B4* ___m_Callback_3;
};

// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> UnityEngine.Networking.SyncList`1::m_Objects
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_Objects_0;
	// UnityEngine.Networking.NetworkBehaviour UnityEngine.Networking.SyncList`1::m_Behaviour
	NetworkBehaviour_t24169710A47310BC3FE0CC9C4B572F075D0304E5* ___m_Behaviour_1;
	// System.Int32 UnityEngine.Networking.SyncList`1::m_CmdHash
	int32_t ___m_CmdHash_2;
	// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1::m_Callback
	SyncListChanged_tA655772175294233B56D5B22CEE7BD197AEE723A* ___m_Callback_3;
};
struct Il2CppArrayBounds;

// UnityEngine.Networking.Channels
struct Channels_t6F3C4F3E402757F4CBB768BBBF2DA6468D570EC5  : public RuntimeObject
{
};

// UnityEngine.Networking.MessageBase
struct MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC  : public RuntimeObject
{
};

// UnityEngine.Networking.MsgType
struct MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4  : public RuntimeObject
{
};

struct MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_StaticFields
{
	// System.String[] UnityEngine.Networking.MsgType::msgLabels
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___msgLabels_41;
};

// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4  : public RuntimeObject
{
	// System.Int16 UnityEngine.Networking.NetworkMessage::msgType
	int16_t ___msgType_1;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkMessage::conn
	NetworkConnection_tF76F5B2DD67B1FB0D0B7B3ED7489C35BFBF0A2FD* ___conn_2;
	// UnityEngine.Networking.NetworkReader UnityEngine.Networking.NetworkMessage::reader
	NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader_3;
	// System.Int32 UnityEngine.Networking.NetworkMessage::channelId
	int32_t ___channelId_4;
};

// UnityEngine.Networking.NetworkReader
struct NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF  : public RuntimeObject
{
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkReader::m_buf
	NetBuffer_tAC9483411292630B25B8A69B376486ACF28AD07C* ___m_buf_0;
};

struct NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF_StaticFields
{
	// System.Byte[] UnityEngine.Networking.NetworkReader::s_StringReaderBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_StringReaderBuffer_3;
	// System.Text.Encoding UnityEngine.Networking.NetworkReader::s_Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___s_Encoding_4;
};

// UnityEngine.Networking.PlayerController
struct PlayerController_t3FBFA1C76AC5006B840F364AE7B113D70B81A2BD  : public RuntimeObject
{
	// System.Int16 UnityEngine.Networking.PlayerController::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.PlayerController::unetView
	NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63* ___unetView_2;
	// UnityEngine.GameObject UnityEngine.Networking.PlayerController::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.Networking.NetworkSystem.AddPlayerMessage
struct AddPlayerMessage_t8E94AC8329D77FE6B781E634D451BD6EA6C26D95  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.Int16 UnityEngine.Networking.NetworkSystem.AddPlayerMessage::playerControllerId
	int16_t ___playerControllerId_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.AddPlayerMessage::msgSize
	int32_t ___msgSize_1;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.AddPlayerMessage::msgData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_tFFD742F45EC7E03F1278F1B6D722E62DDF74C3FB  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[] UnityEngine.Networking.NetworkSystem.CRCMessage::scripts
	CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB* ___scripts_0;
};

// UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283 
{
	// System.String UnityEngine.Networking.NetworkSystem.CRCMessageEntry::name
	String_t* ___name_0;
	// System.Byte UnityEngine.Networking.NetworkSystem.CRCMessageEntry::channel
	uint8_t ___channel_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshaled_pinvoke
{
	char* ___name_0;
	uint8_t ___channel_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.NetworkSystem.CRCMessageEntry
struct CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshaled_com
{
	Il2CppChar* ___name_0;
	uint8_t ___channel_1;
};

// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct EmptyMessage_t7CB1744BE9D0624FAF94F6C20BEB317850C26C23  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
};

// UnityEngine.Networking.NetworkSystem.ErrorMessage
struct ErrorMessage_t090D2A233C0B03E10E7FF76E98ABA7B9E3AE9C29  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.Int32 UnityEngine.Networking.NetworkSystem.ErrorMessage::errorCode
	int32_t ___errorCode_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct IntegerMessage_tC0C55FB9DF3EEB5B2643E7F08C21AB31095468FC  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.Int32 UnityEngine.Networking.NetworkSystem.IntegerMessage::value
	int32_t ___value_0;
};

// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage
struct LobbyReadyToBeginMessage_tC0EB3FC9804E40BD42B04F1C231478C21C7AB4FA  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.Byte UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::slotId
	uint8_t ___slotId_0;
	// System.Boolean UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::readyState
	bool ___readyState_1;
};

// UnityEngine.Networking.NetworkHash128
struct NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A 
{
	// System.Byte UnityEngine.Networking.NetworkHash128::i0
	uint8_t ___i0_0;
	// System.Byte UnityEngine.Networking.NetworkHash128::i1
	uint8_t ___i1_1;
	// System.Byte UnityEngine.Networking.NetworkHash128::i2
	uint8_t ___i2_2;
	// System.Byte UnityEngine.Networking.NetworkHash128::i3
	uint8_t ___i3_3;
	// System.Byte UnityEngine.Networking.NetworkHash128::i4
	uint8_t ___i4_4;
	// System.Byte UnityEngine.Networking.NetworkHash128::i5
	uint8_t ___i5_5;
	// System.Byte UnityEngine.Networking.NetworkHash128::i6
	uint8_t ___i6_6;
	// System.Byte UnityEngine.Networking.NetworkHash128::i7
	uint8_t ___i7_7;
	// System.Byte UnityEngine.Networking.NetworkHash128::i8
	uint8_t ___i8_8;
	// System.Byte UnityEngine.Networking.NetworkHash128::i9
	uint8_t ___i9_9;
	// System.Byte UnityEngine.Networking.NetworkHash128::i10
	uint8_t ___i10_10;
	// System.Byte UnityEngine.Networking.NetworkHash128::i11
	uint8_t ___i11_11;
	// System.Byte UnityEngine.Networking.NetworkHash128::i12
	uint8_t ___i12_12;
	// System.Byte UnityEngine.Networking.NetworkHash128::i13
	uint8_t ___i13_13;
	// System.Byte UnityEngine.Networking.NetworkHash128::i14
	uint8_t ___i14_14;
	// System.Byte UnityEngine.Networking.NetworkHash128::i15
	uint8_t ___i15_15;
};

// UnityEngine.Networking.NetworkInstanceId
struct NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 
{
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;
};

struct NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666_StaticFields
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___Zero_2;
};

// UnityEngine.Networking.NetworkSceneId
struct NetworkSceneId_tA78AA0EFCF7AAAD63ED6C40AA9769DA422CD35FF 
{
	// System.UInt32 UnityEngine.Networking.NetworkSceneId::m_Value
	uint32_t ___m_Value_0;
};

// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_tDEF8DBE3A606AABB4E8550E88102B7618C073ED1  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.UInt32 UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::state
	uint32_t ___state_0;
};

// UnityEngine.Networking.NetworkSystem.PeerInfoMessage
struct PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerInfoMessage::connectionId
	int32_t ___connectionId_0;
	// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::address
	String_t* ___address_1;
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerInfoMessage::port
	int32_t ___port_2;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerInfoMessage::isHost
	bool ___isHost_3;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerInfoMessage::isYou
	bool ___isYou_4;
	// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[] UnityEngine.Networking.NetworkSystem.PeerInfoMessage::playerIds
	PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* ___playerIds_5;
};

// UnityEngine.Networking.NetworkSystem.PeerListMessage
struct PeerListMessage_t84739010115739B6CB9C61A0B5F8D8E502CB353B  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkSystem.PeerListMessage::peers
	PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C* ___peers_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerListMessage::oldServerConnectionId
	int32_t ___oldServerConnectionId_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_tCAA5095003A51B1AAC798DAE1B9B2E6A6BB3CF4E  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.Int16 UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::playerControllerId
	int16_t ___playerControllerId_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Networking.NetworkSystem.StringMessage
struct StringMessage_t5C0AA3DDE1D5020866FDD89FD24BE66B007665F4  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.String UnityEngine.Networking.NetworkSystem.StringMessage::value
	String_t* ___value_0;
};

// UnityEngine.Networking.SyncListBool
struct SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD  : public SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2
{
};

// UnityEngine.Networking.SyncListFloat
struct SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525  : public SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9
{
};

// UnityEngine.Networking.SyncListInt
struct SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0  : public SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7
{
};

// UnityEngine.Networking.SyncListString
struct SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3  : public SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3
{
};

// UnityEngine.Networking.SyncListUInt
struct SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E  : public SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98
{
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Networking.UIntFloat
struct UIntFloat_t6D62AD46B8137BFF03174A4F52886FC796289B91 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.Networking.UIntFloat::floatValue
			float ___floatValue_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___floatValue_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 UnityEngine.Networking.UIntFloat::intValue
			uint32_t ___intValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___intValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.Networking.UIntFloat::doubleValue
			double ___doubleValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 UnityEngine.Networking.UIntFloat::longValue
			uint64_t ___longValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___longValue_3_forAlignmentOnly;
		};
	};
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_tC923BEF5EDBCFB8729E6AFFC01EB03695815F149  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.AnimationMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.AnimationMessage::stateHash
	int32_t ___stateHash_1;
	// System.Single UnityEngine.Networking.NetworkSystem.AnimationMessage::normalizedTime
	float ___normalizedTime_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.AnimationMessage::parameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___parameters_3;
};

// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_tC6D5F290A16848FD43008C88405B471B416767AA  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::parameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___parameters_1;
};

// UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage
struct AnimationTriggerMessage_t4C7632DDB6D76251E75479F468BEC8C7CC6EFA46  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// System.Int32 UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::hash
	int32_t ___hash_1;
};

// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct ClientAuthorityMessage_tE13DA094E8802F6BE6D7845D06DCF110F83AA39B  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// System.Boolean UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::authority
	bool ___authority_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D  : public RuntimeObject
{
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_tAC9483411292630B25B8A69B376486ACF28AD07C* ___m_Buffer_1;
};

struct NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D_StaticFields
{
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_t6D62AD46B8137BFF03174A4F52886FC796289B91 ___s_FloatConverter_4;
};

// UnityEngine.Networking.NetworkSystem.NotReadyMessage
struct NotReadyMessage_tCA7E545F5AC6A175451A840D5EE06ED4AE1CA855  : public EmptyMessage_t7CB1744BE9D0624FAF94F6C20BEB317850C26C23
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct ObjectDestroyMessage_tD5BEC7016E92F683E030F0E8F7B58AD2270C889C  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
};

// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct ObjectSpawnMessage_tEAD868793F02803713E7D3DDA874880DF52AA800  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::assetId
	NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___assetId_1;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::payload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload_3;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_4;
};

// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct ObjectSpawnSceneMessage_t7F40FE67BE68B3A233695F20FF1E6A75C61F36FA  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::sceneId
	NetworkSceneId_tA78AA0EFCF7AAAD63ED6C40AA9769DA422CD35FF ___sceneId_1;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::payload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload_3;
};

// UnityEngine.Networking.NetworkSystem.OverrideTransformMessage
struct OverrideTransformMessage_tE28F9E7E15FE7A9DB12D33D9783B452ADB33DC6E  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::payload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload_1;
	// System.Boolean UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::teleport
	bool ___teleport_2;
	// System.Int32 UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::time
	int32_t ___time_3;
};

// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct OwnerMessage_t3B1FB3E3C93EFAAA88C8B4D0CFA470BC74EFEF9B  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.OwnerMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.OwnerMessage::playerControllerId
	int16_t ___playerControllerId_1;
};

// UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage
struct PeerAuthorityMessage_t4D4E36C51C920870AC6E9C4399180A2CBBFE7DC6  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.Int32 UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::connectionId
	int32_t ___connectionId_0;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_1;
	// System.Boolean UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::authorityState
	bool ___authorityState_2;
};

// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer
struct PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 
{
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.PeerInfoPlayer::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.PeerInfoPlayer::playerControllerId
	int16_t ___playerControllerId_1;
};

// UnityEngine.Networking.NetworkSystem.ReadyMessage
struct ReadyMessage_tACF673A1B0E41B1BA50F1D6C747EAF1EA4E231C6  : public EmptyMessage_t7CB1744BE9D0624FAF94F6C20BEB317850C26C23
{
};

// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct ReconnectMessage_t5BE728CB9D727A9C26717030B7B811D8AD14CA5D  : public MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC
{
	// System.Int32 UnityEngine.Networking.NetworkSystem.ReconnectMessage::oldConnectionId
	int32_t ___oldConnectionId_0;
	// System.Int16 UnityEngine.Networking.NetworkSystem.ReconnectMessage::playerControllerId
	int16_t ___playerControllerId_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ReconnectMessage::netId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___netId_2;
	// System.Int32 UnityEngine.Networking.NetworkSystem.ReconnectMessage::msgSize
	int32_t ___msgSize_3;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ReconnectMessage::msgData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___msgData_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4  : public MulticastDelegate_t
{
};

// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C  : public MulticastDelegate_t
{
};

// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkIdentity::m_SceneId
	NetworkSceneId_tA78AA0EFCF7AAAD63ED6C40AA9769DA422CD35FF ___m_SceneId_4;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkIdentity::m_AssetId
	NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___m_AssetId_5;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_ServerOnly
	bool ___m_ServerOnly_6;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_LocalPlayerAuthority
	bool ___m_LocalPlayerAuthority_7;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsClient
	bool ___m_IsClient_8;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsServer
	bool ___m_IsServer_9;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_HasAuthority
	bool ___m_HasAuthority_10;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::m_NetId
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___m_NetId_11;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_IsLocalPlayer
	bool ___m_IsLocalPlayer_12;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToServer
	NetworkConnection_tF76F5B2DD67B1FB0D0B7B3ED7489C35BFBF0A2FD* ___m_ConnectionToServer_13;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ConnectionToClient
	NetworkConnection_tF76F5B2DD67B1FB0D0B7B3ED7489C35BFBF0A2FD* ___m_ConnectionToClient_14;
	// System.Int16 UnityEngine.Networking.NetworkIdentity::m_PlayerId
	int16_t ___m_PlayerId_15;
	// UnityEngine.Networking.NetworkBehaviour[] UnityEngine.Networking.NetworkIdentity::m_NetworkBehaviours
	NetworkBehaviourU5BU5D_t1DD8C1C599D02EE71244008FBECF372672276DFE* ___m_NetworkBehaviours_16;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkIdentity::m_ObserverConnections
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___m_ObserverConnections_17;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkIdentity::m_Observers
	List_1_t9726E68F6F4746440E4FEE6FDF4680AF822FF6D5* ___m_Observers_18;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkIdentity::m_ClientAuthorityOwner
	NetworkConnection_tF76F5B2DD67B1FB0D0B7B3ED7489C35BFBF0A2FD* ___m_ClientAuthorityOwner_19;
	// System.Boolean UnityEngine.Networking.NetworkIdentity::m_Reset
	bool ___m_Reset_20;
};

struct NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63_StaticFields
{
	// System.UInt32 UnityEngine.Networking.NetworkIdentity::s_NextNetworkId
	uint32_t ___s_NextNetworkId_21;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkIdentity::s_UpdateWriter
	NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___s_UpdateWriter_22;
	// UnityEngine.Networking.NetworkIdentity/ClientAuthorityCallback UnityEngine.Networking.NetworkIdentity::clientAuthorityCallback
	ClientAuthorityCallback_t41A010D18AAA237CBB32CCEB2C6B98590B56CDA0* ___clientAuthorityCallback_23;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// UnityEngine.Networking.NetworkSystem.PeerInfoPlayer[]
struct PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004  : public RuntimeArray
{
	ALIGN_FIELD (8) PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 m_Items[1];

	inline PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C  : public RuntimeArray
{
	ALIGN_FIELD (8) PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* m_Items[1];

	inline PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]
struct CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB  : public RuntimeArray
{
	ALIGN_FIELD (8) CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283 m_Items[1];

	inline CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
	inline CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m0319F46196298352D631E21B0D1D91C494D050FA_gshared (SyncList_1_t5EE0D34C3000C746D345F3F874114E670EC5E1C5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mF31E8368FFDAA97C6DD79FFFC443534C6B92442A_gshared (SyncList_1_t5EE0D34C3000C746D345F3F874114E670EC5E1C5* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m3839296DF796D0DB35604C2AB7BA228133BD7950_gshared (SyncList_1_t5EE0D34C3000C746D345F3F874114E670EC5E1C5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SyncList_1_get_Item_m418C5A2B8B30CA29EBF6F599A5B90959807B36B8_gshared (SyncList_1_t5EE0D34C3000C746D345F3F874114E670EC5E1C5* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mCCF33332FACBD9AE31418E31E34C8D3A56F4A06A_gshared (SyncList_1_t5EE0D34C3000C746D345F3F874114E670EC5E1C5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30_gshared (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, float ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_m601D79E5F4EB96E7AF24C3AC01BD09E8B943AB9C_gshared (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355_gshared (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, const RuntimeMethod* method) ;
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncList_1_get_Item_mCD21DC7939E6112FB67C3EEE6B5DB09B1E73A229_gshared (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_mE11CCC7FD2FB2FC679114D4E187397335F52AC1B_gshared (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC_gshared (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mE825A77E0840DA5F33041728C3CADDFAD59BDEB8_gshared (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD_gshared (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Item_m2C31244B40A36DA4064076DD6D79F9D8635DD9A1_gshared (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m1AABD95181F936B4C555B9D5019E52AD9050281E_gshared (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74_gshared (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, uint32_t ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mB13663180FB7BBDF6017EF923D8DD09355C78FD0_gshared (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58_gshared (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, const RuntimeMethod* method) ;
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncList_1_get_Item_m9394BB687B7FD0429E196651C210CE8997C12E2F_gshared (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m1D6EF2DC36D2FA215799CDAE810E8FA6AF386418_gshared (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F_gshared (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, bool ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1_Clear_mFAD9F1F795861AADCADEF92F02849D315C8AB9C7_gshared (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C_gshared (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncList_1_get_Item_m9B86FAC3B7F86769BE5C016A686776127D6D01DB_gshared (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncList_1__ctor_m2E8160A8F971FEC304FC673E9A8AFEF712CE3A8A_gshared (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDDC1D201BE6BB700CBAF518700978DEFCF9CC6D6_gshared (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA7B44268FDAC9F0CA81ED8AE91B8765E0DB784D9_gshared_inline (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* __this, PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* List_1_ToArray_mBFD6A929875E559F85AE07F9A97A6D72112894C9_gshared (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Networking.NetworkIdentity>()
inline NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63* GameObject_GetComponent_TisNetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63_m6BA12B4C7900A0FA21428FB140B66A0F50E02856 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkIdentity::get_netId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 NetworkIdentity_get_netId_m70B0E185B63A6E7876C84FB6ED0B0DB0FC2D4A24_inline (NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.NetworkInstanceId::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkInstanceId_ToString_mA5A89A4FA89883A45AEA4F2D54059869F32C4CE4 (NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m1283CB4B7C3F283DAFD3FD7B66A584D0046BF431 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.NetworkReader::ReadString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkReader_ReadString_m51B525BB83B0742775B2415FFFE427DED5DBEDEA (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Networking.NetworkReader::ReadUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncListString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString__ctor_m4EBF35E382D7F9E3CB85B2B464EC995DCAA26DAB (SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.String>::AddInternal(T)
inline void SyncList_1_AddInternal_mBEA522EAF3CCF7571CE1CDCBA779CC27B4022A51 (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3*, String_t*, const RuntimeMethod*))SyncList_1_AddInternal_m0319F46196298352D631E21B0D1D91C494D050FA_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.String>::Clear()
inline void SyncList_1_Clear_m240E06AF225D388BD9EE3F7CA3CDA2B5B4848262 (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3*, const RuntimeMethod*))SyncList_1_Clear_mF31E8368FFDAA97C6DD79FFFC443534C6B92442A_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.String>::get_Count()
inline int32_t SyncList_1_get_Count_mBCD2E80F46A782A25F9281DAC20BB1811B72B6AF (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3*, const RuntimeMethod*))SyncList_1_get_Count_m3839296DF796D0DB35604C2AB7BA228133BD7950_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, uint16_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Networking.SyncList`1<System.String>::get_Item(System.Int32)
inline String_t* SyncList_1_get_Item_m233CC1129491F600FAAF9AAA44E4B6AA3FCC6808 (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3* __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3*, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m418C5A2B8B30CA29EBF6F599A5B90959807B36B8_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.String>::.ctor()
inline void SyncList_1__ctor_mE45F88D477D4E3B4F05BECC961891D6D0B5D89EB (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tCCD93B88EEDF5CD5EF0B1E3BEE190EBC321CF3F3*, const RuntimeMethod*))SyncList_1__ctor_mCCF33332FACBD9AE31418E31E34C8D3A56F4A06A_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m76CFCD326B81E9B1A928DF900053CF7A4DD4D834 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Networking.NetworkReader::ReadSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkReader_ReadSingle_m2CC38D2B8A8C038598FC78B08EF9CFD7ADD04B30 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat__ctor_m81DA0D127A81ABCAD72AF66948EC85F1CBB8E0A5 (SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
inline void SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30 (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9*, float, const RuntimeMethod*))SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
inline void SyncList_1_Clear_m601D79E5F4EB96E7AF24C3AC01BD09E8B943AB9C (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9*, const RuntimeMethod*))SyncList_1_Clear_m601D79E5F4EB96E7AF24C3AC01BD09E8B943AB9C_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
inline int32_t SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355 (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9*, const RuntimeMethod*))SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
inline float SyncList_1_get_Item_mCD21DC7939E6112FB67C3EEE6B5DB09B1E73A229 (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  float (*) (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9*, int32_t, const RuntimeMethod*))SyncList_1_get_Item_mCD21DC7939E6112FB67C3EEE6B5DB09B1E73A229_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
inline void SyncList_1__ctor_mE11CCC7FD2FB2FC679114D4E187397335F52AC1B (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tEF39404E381EE126E6C9449D8F5037E61CB610E9*, const RuntimeMethod*))SyncList_1__ctor_mE11CCC7FD2FB2FC679114D4E187397335F52AC1B_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncListInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt__ctor_m6B8E4ED4282D9C0FAB1F5AFB3C57B2B69CF802EE (SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
inline void SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7*, int32_t, const RuntimeMethod*))SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
inline void SyncList_1_Clear_mE825A77E0840DA5F33041728C3CADDFAD59BDEB8 (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7*, const RuntimeMethod*))SyncList_1_Clear_mE825A77E0840DA5F33041728C3CADDFAD59BDEB8_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
inline int32_t SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7*, const RuntimeMethod*))SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
inline int32_t SyncList_1_get_Item_m2C31244B40A36DA4064076DD6D79F9D8635DD9A1 (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7*, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m2C31244B40A36DA4064076DD6D79F9D8635DD9A1_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
inline void SyncList_1__ctor_m1AABD95181F936B4C555B9D5019E52AD9050281E (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_tE94B2A2C98E627A092716B8F3FAC02666B5BE8B7*, const RuntimeMethod*))SyncList_1__ctor_m1AABD95181F936B4C555B9D5019E52AD9050281E_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt__ctor_m3705ABCF98ACF69412CECA67F55945E58134865F (SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
inline void SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74 (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, uint32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98*, uint32_t, const RuntimeMethod*))SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
inline void SyncList_1_Clear_mB13663180FB7BBDF6017EF923D8DD09355C78FD0 (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98*, const RuntimeMethod*))SyncList_1_Clear_mB13663180FB7BBDF6017EF923D8DD09355C78FD0_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
inline int32_t SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58 (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98*, const RuntimeMethod*))SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
inline uint32_t SyncList_1_get_Item_m9394BB687B7FD0429E196651C210CE8997C12E2F (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98*, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m9394BB687B7FD0429E196651C210CE8997C12E2F_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
inline void SyncList_1__ctor_m1D6EF2DC36D2FA215799CDAE810E8FA6AF386418 (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t7D24A0172B07C5672B9FD053B93B480505C96E98*, const RuntimeMethod*))SyncList_1__ctor_m1D6EF2DC36D2FA215799CDAE810E8FA6AF386418_gshared)(__this, method);
}
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkReader::ReadBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncListBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool__ctor_mEE7EE2C7AE2E87D0F2D8BE7FE624A15D88CE22E0 (SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
inline void SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, bool ___item0, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2*, bool, const RuntimeMethod*))SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
inline void SyncList_1_Clear_mFAD9F1F795861AADCADEF92F02849D315C8AB9C7 (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2*, const RuntimeMethod*))SyncList_1_Clear_mFAD9F1F795861AADCADEF92F02849D315C8AB9C7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
inline int32_t SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2*, const RuntimeMethod*))SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C_gshared)(__this, method);
}
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
inline bool SyncList_1_get_Item_m9B86FAC3B7F86769BE5C016A686776127D6D01DB (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, int32_t ___i0, const RuntimeMethod* method)
{
	return ((  bool (*) (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2*, int32_t, const RuntimeMethod*))SyncList_1_get_Item_m9B86FAC3B7F86769BE5C016A686776127D6D01DB_gshared)(__this, ___i0, method);
}
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
inline void SyncList_1__ctor_m2E8160A8F971FEC304FC673E9A8AFEF712CE3A8A (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2* __this, const RuntimeMethod* method)
{
	((  void (*) (SyncList_1_t3C9E930F999A59CF27FAD95B9BE269FF6DB037F2*, const RuntimeMethod*))SyncList_1__ctor_m2E8160A8F971FEC304FC673E9A8AFEF712CE3A8A_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Int16::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23 (int16_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.MessageBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83 (MessageBase_t0372B56D425B3624A387FF36ECBF19C5DCE8C6DC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyMessage__ctor_m239CC7DB66F2291350F62C3CB19C35A33F14B63A (EmptyMessage_t7CB1744BE9D0624FAF94F6C20BEB317850C26C23* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytesAndSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NetworkReader_ReadBytesAndSize_mDA88D352B1100BA498F30D09A9B276F6D637E9FD (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesAndSize_m287A81776FFAD7B137EB999EBA8C42A3DBBAE205 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___count1, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkReader::ReadNetworkId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::.ctor()
inline void List_1__ctor_mDDC1D201BE6BB700CBAF518700978DEFCF9CC6D6 (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674*, const RuntimeMethod*))List_1__ctor_mDDC1D201BE6BB700CBAF518700978DEFCF9CC6D6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::Add(T)
inline void List_1_Add_mA7B44268FDAC9F0CA81ED8AE91B8765E0DB784D9_inline (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* __this, PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674*, PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878, const RuntimeMethod*))List_1_Add_mA7B44268FDAC9F0CA81ED8AE91B8765E0DB784D9_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.Networking.NetworkSystem.PeerInfoPlayer>::ToArray()
inline PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* List_1_ToArray_mBFD6A929875E559F85AE07F9A97A6D72112894C9 (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* __this, const RuntimeMethod* method)
{
	return ((  PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* (*) (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674*, const RuntimeMethod*))List_1_ToArray_mBFD6A929875E559F85AE07F9A97A6D72112894C9_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerInfoMessage__ctor_m3023854544CC93FCD715EC1FC922AE6BE26DD644 (PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkReader::ReadNetworkHash128()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A NetworkReader_ReadNetworkHash128_m808E1E79413F4EBFD7ED8B07201249FADEC54F63 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkReader::ReadVector3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NetworkReader_ReadVector3_mE4C0E148F7C0AEFEFF34552A53F055C5C649DD00 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkReader::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkReader_get_Length_m948DB5EE31C5EBE8C7920B5BC331CE161DFD7C3D (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.Networking.NetworkReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkReader_get_Position_m1D7B71390C3B02AEF080981278E0CA120E81C656 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkReader::ReadQuaternion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 NetworkReader_ReadQuaternion_mB282906C3516C0A7FE9B36593BE1F8CFD096BB61 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m2E853E80B11406A46C628EC20B4E473BDC5F09CB (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m39D65A26D87F3AC69619BCC9680353DFA7A0A407 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_WriteBytesFull_mE9EF15EA529BF6351D4D988A5201A462FFA63CE3 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m6AF61F86E7EEAC654790BF29464FCA225AE4325D (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkReader::ReadSceneId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSceneId_tA78AA0EFCF7AAAD63ED6C40AA9769DA422CD35FF NetworkReader_ReadSceneId_m5B623B22A965C1AFDDC75AEDAC18342129480741 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_m374FD3EE8A9D361F1625343771CE0A4B495AD0D6 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, NetworkSceneId_tA78AA0EFCF7AAAD63ED6C40AA9769DA422CD35FF ___value0, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t NetworkReader_ReadByte_m74824526FADA7707D3CA59A470666A81EAF62F04 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkWriter_Write_mFD999D46BF6AC4E4BE676A2CD723A5D2E5D418F8 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* __this, uint8_t ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mCFB57CAD612E8462D47EB0511D1729E0DFB29B63 (PlayerController_t3FBFA1C76AC5006B840F364AE7B113D70B81A2BD* __this, const RuntimeMethod* method) 
{
	{
		// public short playerControllerId = -1;
		__this->___playerControllerId_1 = (int16_t)(-1);
		// public PlayerController()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.PlayerController::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_get_IsValid_m9DA33A43EEFDF369828150D4D3432D0584EC4055 (PlayerController_t3FBFA1C76AC5006B840F364AE7B113D70B81A2BD* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsValid { get { return playerControllerId != -1; } }
		int16_t L_0 = __this->___playerControllerId_1;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityEngine.Networking.PlayerController::.ctor(UnityEngine.GameObject,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mA8FDAAE1EF3777BBDCA09DB13FB0E7C8A7EF43AA (PlayerController_t3FBFA1C76AC5006B840F364AE7B113D70B81A2BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, int16_t ___playerControllerId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63_m6BA12B4C7900A0FA21428FB140B66A0F50E02856_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public short playerControllerId = -1;
		__this->___playerControllerId_1 = (int16_t)(-1);
		// internal PlayerController(GameObject go, short playerControllerId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// gameObject = go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		__this->___gameObject_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObject_3), (void*)L_0);
		// unetView = go.GetComponent<NetworkIdentity>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___go0;
		NullCheck(L_1);
		NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63* L_2;
		L_2 = GameObject_GetComponent_TisNetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63_m6BA12B4C7900A0FA21428FB140B66A0F50E02856(L_1, GameObject_GetComponent_TisNetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63_m6BA12B4C7900A0FA21428FB140B66A0F50E02856_RuntimeMethod_var);
		__this->___unetView_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unetView_2), (void*)L_2);
		// this.playerControllerId = playerControllerId;
		int16_t L_3 = ___playerControllerId1;
		__this->___playerControllerId_1 = L_3;
		// }
		return;
	}
}
// System.String UnityEngine.Networking.PlayerController::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerController_ToString_mB11357F296D49153442BCCCE3E60F0DEDAFB879D (PlayerController_t3FBFA1C76AC5006B840F364AE7B113D70B81A2BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EAAA157D1F5D6977F519F039F9114FBEB79A704);
		s_Il2CppMethodInitialized = true;
	}
	NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("ID={0} NetworkIdentity NetID={1} Player={2}", new object[] { playerControllerId, (unetView != null ? unetView.netId.ToString() : "null"), (gameObject != null ? gameObject.name : "null") });
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		int16_t L_2 = __this->___playerControllerId_1;
		int16_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63* L_6 = __this->___unetView_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = 1;
		G_B1_1 = L_5;
		G_B1_2 = L_5;
		G_B1_3 = _stringLiteral8EAAA157D1F5D6977F519F039F9114FBEB79A704;
		if (L_7)
		{
			G_B2_0 = 1;
			G_B2_1 = L_5;
			G_B2_2 = L_5;
			G_B2_3 = _stringLiteral8EAAA157D1F5D6977F519F039F9114FBEB79A704;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_0049;
	}

IL_0030:
	{
		NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63* L_8 = __this->___unetView_2;
		NullCheck(L_8);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_9;
		L_9 = NetworkIdentity_get_netId_m70B0E185B63A6E7876C84FB6ED0B0DB0FC2D4A24_inline(L_8, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = NetworkInstanceId_ToString_mA5A89A4FA89883A45AEA4F2D54059869F32C4CE4((&V_0), NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_0049:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = G_B3_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___gameObject_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = 2;
		G_B4_1 = L_11;
		G_B4_2 = L_11;
		G_B4_3 = G_B3_4;
		if (L_13)
		{
			G_B5_0 = 2;
			G_B5_1 = L_11;
			G_B5_2 = L_11;
			G_B5_3 = G_B3_4;
			goto IL_0061;
		}
	}
	{
		G_B6_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_006c;
	}

IL_0061:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___gameObject_3;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_006c:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject*)G_B6_0);
		String_t* L_16;
		L_16 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B6_4, G_B6_3, NULL);
		return L_16;
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
// System.Void UnityEngine.Networking.SyncListString::SerializeItem(UnityEngine.Networking.NetworkWriter,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString_SerializeItem_m81057DEDA8290DE7C9E95026667D5DB2250FFF26 (SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, String_t* ___item1, const RuntimeMethod* method) 
{
	{
		// writer.Write(item);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		String_t* L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m1283CB4B7C3F283DAFD3FD7B66A584D0046BF431(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.Networking.SyncListString::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SyncListString_DeserializeItem_m45327B8E277CAA01DD34778F2ED8720356A803EC (SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// return reader.ReadString();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = NetworkReader_ReadString_m51B525BB83B0742775B2415FFFE427DED5DBEDEA(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListString UnityEngine.Networking.SyncListString::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* SyncListString_ReadInstance_m48C8BC20EAC34371C650D246441CDAB560FEAEC8 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_mBEA522EAF3CCF7571CE1CDCBA779CC27B4022A51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// var result = new SyncListString();
		SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* L_2 = (SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3*)il2cpp_codegen_object_new(SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SyncListString__ctor_m4EBF35E382D7F9E3CB85B2B464EC995DCAA26DAB(L_2, NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal(reader.ReadString());
		SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* L_3 = V_1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NetworkReader_ReadString_m51B525BB83B0742775B2415FFFE427DED5DBEDEA(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_mBEA522EAF3CCF7571CE1CDCBA779CC27B4022A51(L_3, L_5, SyncList_1_AddInternal_mBEA522EAF3CCF7571CE1CDCBA779CC27B4022A51_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListString::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString_ReadReference_mDAC33AC212761146D29EC02D8DF44D572F0D2907 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* ___syncList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_mBEA522EAF3CCF7571CE1CDCBA779CC27B4022A51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_m240E06AF225D388BD9EE3F7CA3CDA2B5B4848262_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m240E06AF225D388BD9EE3F7CA3CDA2B5B4848262(L_2, SyncList_1_Clear_m240E06AF225D388BD9EE3F7CA3CDA2B5B4848262_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal(reader.ReadString());
		SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* L_3 = ___syncList1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NetworkReader_ReadString_m51B525BB83B0742775B2415FFFE427DED5DBEDEA(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_mBEA522EAF3CCF7571CE1CDCBA779CC27B4022A51(L_3, L_5, SyncList_1_AddInternal_mBEA522EAF3CCF7571CE1CDCBA779CC27B4022A51_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListString::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString_WriteInstance_m6587E6A2385DA32C96EA6A5FD16071667C2DCAE2 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* ___items1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_mBCD2E80F46A782A25F9281DAC20BB1811B72B6AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_m233CC1129491F600FAAF9AAA44E4B6AA3FCC6808_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_mBCD2E80F46A782A25F9281DAC20BB1811B72B6AF(L_1, SyncList_1_get_Count_mBCD2E80F46A782A25F9281DAC20BB1811B72B6AF_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)L_2), NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.Write(items[i]);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_3 = ___writer0;
		SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = SyncList_1_get_Item_m233CC1129491F600FAAF9AAA44E4B6AA3FCC6808(L_4, L_5, SyncList_1_get_Item_m233CC1129491F600FAAF9AAA44E4B6AA3FCC6808_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_m1283CB4B7C3F283DAFD3FD7B66A584D0046BF431(L_3, L_6, NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_mBCD2E80F46A782A25F9281DAC20BB1811B72B6AF(L_9, SyncList_1_get_Count_mBCD2E80F46A782A25F9281DAC20BB1811B72B6AF_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListString__ctor_m4EBF35E382D7F9E3CB85B2B464EC995DCAA26DAB (SyncListString_t6131890C8A0DF04390783BD6972D613324F7D5B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_mE45F88D477D4E3B4F05BECC961891D6D0B5D89EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_mE45F88D477D4E3B4F05BECC961891D6D0B5D89EB(__this, SyncList_1__ctor_mE45F88D477D4E3B4F05BECC961891D6D0B5D89EB_RuntimeMethod_var);
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
// System.Void UnityEngine.Networking.SyncListFloat::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat_SerializeItem_mE3BDC1D0F114113A1649B55B5062B7A7A3AB2977 (SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, float ___item1, const RuntimeMethod* method) 
{
	{
		// writer.Write(item);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		float L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_m76CFCD326B81E9B1A928DF900053CF7A4DD4D834(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Single UnityEngine.Networking.SyncListFloat::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SyncListFloat_DeserializeItem_mE6DE3D015E78DDC9798D73E62EDF9039A9802AAC (SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// return reader.ReadSingle();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		float L_1;
		L_1 = NetworkReader_ReadSingle_m2CC38D2B8A8C038598FC78B08EF9CFD7ADD04B30(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListFloat UnityEngine.Networking.SyncListFloat::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* SyncListFloat_ReadInstance_m7B43DE9F00DEE507D66D7A379488146270CE3414 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// var result = new SyncListFloat();
		SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* L_2 = (SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525*)il2cpp_codegen_object_new(SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SyncListFloat__ctor_m81DA0D127A81ABCAD72AF66948EC85F1CBB8E0A5(L_2, NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal(reader.ReadSingle());
		SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* L_3 = V_1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		float L_5;
		L_5 = NetworkReader_ReadSingle_m2CC38D2B8A8C038598FC78B08EF9CFD7ADD04B30(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30(L_3, L_5, SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat_ReadReference_m4AC5FAF598166A7769CDC90EBF7F0FCE0EFA2F40 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* ___syncList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_m601D79E5F4EB96E7AF24C3AC01BD09E8B943AB9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_m601D79E5F4EB96E7AF24C3AC01BD09E8B943AB9C(L_2, SyncList_1_Clear_m601D79E5F4EB96E7AF24C3AC01BD09E8B943AB9C_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal(reader.ReadSingle());
		SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* L_3 = ___syncList1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		float L_5;
		L_5 = NetworkReader_ReadSingle_m2CC38D2B8A8C038598FC78B08EF9CFD7ADD04B30(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30(L_3, L_5, SyncList_1_AddInternal_mA52C1D783F8C442924F43407F311E04531A06B30_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat_WriteInstance_m44623F9155BAB834DD0E09163D184D7AED311D5C (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* ___items1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_mCD21DC7939E6112FB67C3EEE6B5DB09B1E73A229_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355(L_1, SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)L_2), NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.Write(items[i]);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_3 = ___writer0;
		SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		float L_6;
		L_6 = SyncList_1_get_Item_mCD21DC7939E6112FB67C3EEE6B5DB09B1E73A229(L_4, L_5, SyncList_1_get_Item_mCD21DC7939E6112FB67C3EEE6B5DB09B1E73A229_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_m76CFCD326B81E9B1A928DF900053CF7A4DD4D834(L_3, L_6, NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355(L_9, SyncList_1_get_Count_mF0CCCA8E7E01E11C9B552C3632420AF4558EE355_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListFloat__ctor_m81DA0D127A81ABCAD72AF66948EC85F1CBB8E0A5 (SyncListFloat_t4742AEF0486C0F4BC7413E3243B9C2AFF1E5C525* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_mE11CCC7FD2FB2FC679114D4E187397335F52AC1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_mE11CCC7FD2FB2FC679114D4E187397335F52AC1B(__this, SyncList_1__ctor_mE11CCC7FD2FB2FC679114D4E187397335F52AC1B_RuntimeMethod_var);
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
// System.Void UnityEngine.Networking.SyncListInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt_SerializeItem_m7555D1448063B2777C807F2D3944903BF5A89082 (SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, int32_t ___item1, const RuntimeMethod* method) 
{
	{
		// writer.WritePackedUInt32((uint)item);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int32_t L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Networking.SyncListInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SyncListInt_DeserializeItem_m921A9B4FC997AE2B4FD880D36AD4D4CE464B97B8 (SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// return (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListInt UnityEngine.Networking.SyncListInt::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* SyncListInt_ReadInstance_m44C9E10C1A2067E633F933C748FBDE9B5F96D511 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// var result = new SyncListInt();
		SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* L_2 = (SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0*)il2cpp_codegen_object_new(SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SyncListInt__ctor_m6B8E4ED4282D9C0FAB1F5AFB3C57B2B69CF802EE(L_2, NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal((int)reader.ReadPackedUInt32());
		SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* L_3 = V_1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC(L_3, L_5, SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt_ReadReference_m4B8203B35FC30F3E2602F02CAA05FB3714563A6E (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* ___syncList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_mE825A77E0840DA5F33041728C3CADDFAD59BDEB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_mE825A77E0840DA5F33041728C3CADDFAD59BDEB8(L_2, SyncList_1_Clear_mE825A77E0840DA5F33041728C3CADDFAD59BDEB8_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal((int)reader.ReadPackedUInt32());
		SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* L_3 = ___syncList1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC(L_3, L_5, SyncList_1_AddInternal_m9CF2146A7AF510ED7C30DAFCFA121CB369550AAC_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt_WriteInstance_m7027B5D1259BF143134901B83813B18E97D4E8F8 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* ___items1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_m2C31244B40A36DA4064076DD6D79F9D8635DD9A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD(L_1, SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)L_2), NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.WritePackedUInt32((uint)items[i]);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_3 = ___writer0;
		SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = SyncList_1_get_Item_m2C31244B40A36DA4064076DD6D79F9D8635DD9A1(L_4, L_5, SyncList_1_get_Item_m2C31244B40A36DA4064076DD6D79F9D8635DD9A1_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_3, L_6, NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD(L_9, SyncList_1_get_Count_mEF4115B2208314384349E67224E99A626DA695FD_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListInt__ctor_m6B8E4ED4282D9C0FAB1F5AFB3C57B2B69CF802EE (SyncListInt_t021CAE9905C36FA386B722A8618BFC0DB8FE63F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m1AABD95181F936B4C555B9D5019E52AD9050281E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m1AABD95181F936B4C555B9D5019E52AD9050281E(__this, SyncList_1__ctor_m1AABD95181F936B4C555B9D5019E52AD9050281E_RuntimeMethod_var);
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
// System.Void UnityEngine.Networking.SyncListUInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt_SerializeItem_mD3916D051B2836EB233699EA3FFABB560687C1B9 (SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, uint32_t ___item1, const RuntimeMethod* method) 
{
	{
		// writer.WritePackedUInt32(item);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		uint32_t L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.UInt32 UnityEngine.Networking.SyncListUInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t SyncListUInt_DeserializeItem_mDD701372E7A41D33B2C9A59F35A884EA6564A33E (SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// return reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListUInt UnityEngine.Networking.SyncListUInt::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* SyncListUInt_ReadInstance_mA39CEA3B75E1F75C29F8F7B773EFA86DBD6C1DED (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// var result = new SyncListUInt();
		SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* L_2 = (SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E*)il2cpp_codegen_object_new(SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SyncListUInt__ctor_m3705ABCF98ACF69412CECA67F55945E58134865F(L_2, NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal(reader.ReadPackedUInt32());
		SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* L_3 = V_1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74(L_3, L_5, SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt_ReadReference_mF402A944FF9CA886D15B5C4870FF3738DF43D668 (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* ___syncList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_mB13663180FB7BBDF6017EF923D8DD09355C78FD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_mB13663180FB7BBDF6017EF923D8DD09355C78FD0(L_2, SyncList_1_Clear_mB13663180FB7BBDF6017EF923D8DD09355C78FD0_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal(reader.ReadPackedUInt32());
		SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* L_3 = ___syncList1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74(L_3, L_5, SyncList_1_AddInternal_m4CEE50B362EDC1CAEA3B23D360B5BC879156BD74_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListUInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt_WriteInstance_m5A7A577987973DCC4935192FAFB6FA1BD8297FE6 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* ___items1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_m9394BB687B7FD0429E196651C210CE8997C12E2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58(L_1, SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)L_2), NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.WritePackedUInt32(items[i]);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_3 = ___writer0;
		SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		uint32_t L_6;
		L_6 = SyncList_1_get_Item_m9394BB687B7FD0429E196651C210CE8997C12E2F(L_4, L_5, SyncList_1_get_Item_m9394BB687B7FD0429E196651C210CE8997C12E2F_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_3, L_6, NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58(L_9, SyncList_1_get_Count_mC818BC5652AECDCFC5C3DBB5DA2C8978EDA4EB58_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListUInt__ctor_m3705ABCF98ACF69412CECA67F55945E58134865F (SyncListUInt_t6A009EF49D406519E7F8A6DEC19EAA6008B30F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m1D6EF2DC36D2FA215799CDAE810E8FA6AF386418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m1D6EF2DC36D2FA215799CDAE810E8FA6AF386418(__this, SyncList_1__ctor_m1D6EF2DC36D2FA215799CDAE810E8FA6AF386418_RuntimeMethod_var);
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
// System.Void UnityEngine.Networking.SyncListBool::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool_SerializeItem_m02126865C44B7FE85947C0802F5CB11B78EAC88F (SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, bool ___item1, const RuntimeMethod* method) 
{
	{
		// writer.Write(item);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		bool L_1 = ___item1;
		NullCheck(L_0);
		NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Networking.SyncListBool::DeserializeItem(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SyncListBool_DeserializeItem_m0C10D0D04983D2147332E700B3BB9FA6E5DCC434 (SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// return reader.ReadBoolean();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		bool L_1;
		L_1 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Networking.SyncListBool UnityEngine.Networking.SyncListBool::ReadInstance(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* SyncListBool_ReadInstance_m260032A26953B1FB852CF647AC3B4F4A6FE215CA (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* V_1 = NULL;
	uint16_t V_2 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// var result = new SyncListBool();
		SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* L_2 = (SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD*)il2cpp_codegen_object_new(SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SyncListBool__ctor_mEE7EE2C7AE2E87D0F2D8BE7FE624A15D88CE22E0(L_2, NULL);
		V_1 = L_2;
		// for (ushort i = 0; i < count; i++)
		V_2 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// result.AddInternal(reader.ReadBoolean());
		SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* L_3 = V_1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F(L_3, L_5, SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_2;
		V_2 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_2;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* L_9 = V_1;
		return L_9;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool_ReadReference_mCBD2BFADD4A04E2164F9BC95A7EB55D2D76CF05D (NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* ___syncList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_Clear_mFAD9F1F795861AADCADEF92F02849D315C8AB9C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// ushort count = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// syncList.Clear();
		SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* L_2 = ___syncList1;
		NullCheck(L_2);
		SyncList_1_Clear_mFAD9F1F795861AADCADEF92F02849D315C8AB9C7(L_2, SyncList_1_Clear_mFAD9F1F795861AADCADEF92F02849D315C8AB9C7_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		V_1 = (uint16_t)0;
		goto IL_0022;
	}

IL_0011:
	{
		// syncList.AddInternal(reader.ReadBoolean());
		SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* L_3 = ___syncList1;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_4, NULL);
		NullCheck(L_3);
		SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F(L_3, L_5, SyncList_1_AddInternal_m2D6365AD762C4BAE2716B34F6F76F0BA8BB4130F_RuntimeMethod_var);
		// for (ushort i = 0; i < count; i++)
		uint16_t L_6 = V_1;
		V_1 = (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, 1)));
	}

IL_0022:
	{
		// for (ushort i = 0; i < count; i++)
		uint16_t L_7 = V_1;
		uint16_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool_WriteInstance_m0585899E9DD511B2A01C15E76FC0085BF40C0107 (NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* ___items1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1_get_Item_m9B86FAC3B7F86769BE5C016A686776127D6D01DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)items.Count);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* L_1 = ___items1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C(L_1, SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C_RuntimeMethod_var);
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)L_2), NULL);
		// for (int i = 0; i < items.Count; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_0011:
	{
		// writer.Write(items[i]);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_3 = ___writer0;
		SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* L_4 = ___items1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = SyncList_1_get_Item_m9B86FAC3B7F86769BE5C016A686776127D6D01DB(L_4, L_5, SyncList_1_get_Item_m9B86FAC3B7F86769BE5C016A686776127D6D01DB_RuntimeMethod_var);
		NullCheck(L_3);
		NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A(L_3, L_6, NULL);
		// for (int i = 0; i < items.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0022:
	{
		// for (int i = 0; i < items.Count; i++)
		int32_t L_8 = V_0;
		SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* L_9 = ___items1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C(L_9, SyncList_1_get_Count_m072EEEA67B0745055F64D60F49A60654B75CDA1C_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.SyncListBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncListBool__ctor_mEE7EE2C7AE2E87D0F2D8BE7FE624A15D88CE22E0 (SyncListBool_tB2ADCE282A586D618D782FF9DABF1870AAE83DAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SyncList_1__ctor_m2E8160A8F971FEC304FC673E9A8AFEF712CE3A8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SyncList_1__ctor_m2E8160A8F971FEC304FC673E9A8AFEF712CE3A8A(__this, SyncList_1__ctor_m2E8160A8F971FEC304FC673E9A8AFEF712CE3A8A_RuntimeMethod_var);
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
void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_Multicast(NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* currentDelegate = reinterpret_cast<NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___netMsg0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_Open(NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___netMsg0, method);
}
void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenStaticInvoker(NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* >::Invoke(__this->___method_ptr_0, method, NULL, ___netMsg0);
}
void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_ClosedStaticInvoker(NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___netMsg0);
}
void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenVirtual(NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___netMsg0);
}
void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenInterface(NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___netMsg0);
}
void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenGenericVirtual(NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___netMsg0);
}
void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenGenericInterface(NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___netMsg0);
}
// System.Void UnityEngine.Networking.NetworkMessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageDelegate__ctor_m7078CD5B69447FDCBC532D78A88C3EF01C2D705A (NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82_Multicast;
}
// System.Void UnityEngine.Networking.NetworkMessageDelegate::Invoke(UnityEngine.Networking.NetworkMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageDelegate_Invoke_m5F2617AE72F815C04CA97D25DE6C425873C1BF82 (NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___netMsg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Networking.NetworkMessageDelegate::BeginInvoke(UnityEngine.Networking.NetworkMessage,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkMessageDelegate_BeginInvoke_m120E735DE6EDEE9B7ECAD3785B0ECEE08CEA6CA9 (NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* ___netMsg0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___netMsg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Networking.NetworkMessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessageDelegate_EndInvoke_mFDCA4490EB2A83BAF6CBFB0850280202CC0C1269 (NetworkMessageDelegate_tB554D7816B6A48692CD9F4D6AEF4C67EFE305BB4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9_Multicast(SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___assetId1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* currentDelegate = reinterpret_cast<SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C*>(delegatesToInvoke[i]);
		typedef GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, ___assetId1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9_Open(SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___assetId1, const RuntimeMethod* method)
{
	typedef GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, ___assetId1, method);
}
GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9_OpenStaticInvoker(SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___assetId1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A >::Invoke(__this->___method_ptr_0, method, NULL, ___position0, ___assetId1);
}
GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9_ClosedStaticInvoker(SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___assetId1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0, ___assetId1);
}
// System.Void UnityEngine.Networking.SpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnDelegate__ctor_mC1E9B220A47F0C1922F601C41D00485F5408283B (SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9_Multicast;
}
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::Invoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnDelegate_Invoke_m202D80972237990F445BC2FA8295D1DEEC79B2B9 (SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___assetId1, const RuntimeMethod* method) 
{
	typedef GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___assetId1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Networking.SpawnDelegate::BeginInvoke(UnityEngine.Vector3,UnityEngine.Networking.NetworkHash128,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpawnDelegate_BeginInvoke_m0C56299F1E8321612133053132AF2464D59F176D (SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A ___assetId1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A_il2cpp_TypeInfo_var, &___assetId1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// UnityEngine.GameObject UnityEngine.Networking.SpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SpawnDelegate_EndInvoke_m54349AB1EADF6B5906FB5155CFFF96FF962AC716 (SpawnDelegate_t713C6469E5EF27FACCB0029DB93FC16038D0BF6C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_Multicast(UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawned0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* currentDelegate = reinterpret_cast<UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___spawned0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_Open(UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawned0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___spawned0, method);
}
void UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_OpenStaticInvoker(UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawned0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___spawned0);
}
void UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_ClosedStaticInvoker(UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawned0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___spawned0);
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate__ctor_m154BCE164CA29501FC8D0815076291B468C766AF (UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC_Multicast;
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate_Invoke_m24E1B4FE1E1D1E0B7E154FBEC6EEA849D069C7DC (UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawned0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___spawned0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityEngine.Networking.UnSpawnDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnSpawnDelegate_BeginInvoke_mEA0A12130C30AEEDEE32C175AE3CF6D9D0A9839B (UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawned0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___spawned0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Networking.UnSpawnDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnSpawnDelegate_EndInvoke_m7B2112D95E3EAF3732C3CB4B06CE6AB0B2920A68 (UnSpawnDelegate_tF12BB901A18EF0D41F0FFDDBB15A88F2B3B2877F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.Networking.MsgType::MsgTypeToString(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MsgType_MsgTypeToString_m0E8102D575712F0555651B97F718AD77D6CE1036 (int16_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (value < 0 || value > Highest)
		int16_t L_0 = ___value0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		int16_t L_1 = ___value0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)47))))
		{
			goto IL_000f;
		}
	}

IL_0009:
	{
		// return String.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000f:
	{
		// string result =  msgLabels[value];
		il2cpp_codegen_runtime_class_init_inline(MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ((MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_StaticFields*)il2cpp_codegen_static_fields_for(MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_il2cpp_TypeInfo_var))->___msgLabels_41;
		int16_t L_4 = ___value0;
		NullCheck(L_3);
		int16_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		// if (string.IsNullOrEmpty(result))
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (!L_8)
		{
			goto IL_0036;
		}
	}
	{
		// result = "[" + value + "]";
		String_t* L_9;
		L_9 = Int16_ToString_mD65153B762673B865D4F8FF9B567BECC1ABF6D23((&___value0), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_9, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_0 = L_10;
	}

IL_0036:
	{
		// return result;
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.Void UnityEngine.Networking.MsgType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgType__ctor_mCF04AF759C75D6CF7D949ED77AA1C8E927C750A6 (MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.MsgType::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MsgType__cctor_m906DF714B6789D58952643079C651EE47FEB218B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B7C4FCC1EE86CB6EA27E82D0768F3C5EA9AF9E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1087D59D3BD2B97FB1727D6C81DD87D9DABEAD5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral127F90A769FB4C553F77F8D37AADDEC63A09EE3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13994E6527DCB635F1A1EB19C59A5C3019A436BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ED680B2B3E578FB949C553CC8315947F7C11C9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral234E65E71425FB76B35D3B824090608036A76D13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F7120D7CAD4D1020796F12B22BE2DDA4A63DF98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3878D403F76D0BAED5AB592B5BA1174C61A4892A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FBAA21AA905D4B4EA4D43342AE620A966595D3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A2803629897DBB2C206F364A3099B875FAF04F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D36A48931D35122B8D125FF8E0CDFFC638DCF62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral557B7333BE9FE30592B767F16562EA491ECAC716);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A7AB4C26835F2B7D9AC2265C336A216EAADAFDA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C9DB922F78B95FFD954D673041062B2B1CFFA30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral632E0FE7854BBC979B4DB06BCE624197CBB6ED4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral696EE977D0ED598CAE1C700CC8766043622D3B8F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74E1F512FCA395E2AF063DD5C08BE4BCB0A94E91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F22AC12CFBA65C105242552D655442B27BA5EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9468E6AB2212EBC917A11F74850A6EAC31C9AF12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95E092E81BBD1D174346BD2D65962936389A0236);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A08A617FCF06FDA3322DF86E11EDAFE8DAE2A18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA32E3195E62F777991EC48916535BB4E4A2F2B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4D078F0B204694308CED662D1F26B6468CBC11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB621ADB84CF65CE6F7918D90F40829282AD4AE47);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF3FA1C48F42A3EE0984F53B24462A5E5C1713F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC735577AECE03EE7B42841C93EEE500B92671B34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9DED19749A48661A81474DE4485C2452F386245);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC1C39545E708795833576BE2CA997D65A84E8AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E17FB545974B84E3EE00A7391CC68D62F85F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static internal string[] msgLabels =
		// {
		//     "none",
		//     "ObjectDestroy",
		//     "Rpc",
		//     "ObjectSpawn",
		//     "Owner",
		//     "Command",
		//     "LocalPlayerTransform",
		//     "SyncEvent",
		//     "UpdateVars",
		//     "SyncList",
		//     "ObjectSpawnScene", // 10
		//     "NetworkInfo",
		//     "SpawnFinished",
		//     "ObjectHide",
		//     "CRC",
		//     "LocalClientAuthority",
		//     "LocalChildTransform",
		//     "Fragment",
		//     "PeerClientAuthority",
		//     "",
		//     "", // 20
		//     "",
		//     "",
		//     "",
		//     "",
		//     "",
		//     "",
		//     "",
		//     "",
		//     "",
		//     "", // 30
		//     "", // - SystemInternalHighest
		//     "Connect", // 32,
		//     "Disconnect",
		//     "Error",
		//     "Ready",
		//     "NotReady",
		//     "AddPlayer",
		//     "RemovePlayer",
		//     "Scene",
		//     "Animation", // 40
		//     "AnimationParams",
		//     "AnimationTrigger",
		//     "LobbyReadyToBegin",
		//     "LobbySceneLoaded",
		//     "LobbyAddPlayerFailed", // 45
		//     "LobbyReturnToLobby", // 46
		//     "ReconnectPlayer", // 47
		// };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral9468E6AB2212EBC917A11F74850A6EAC31C9AF12);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9468E6AB2212EBC917A11F74850A6EAC31C9AF12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralBF3FA1C48F42A3EE0984F53B24462A5E5C1713F8);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBF3FA1C48F42A3EE0984F53B24462A5E5C1713F8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralD8E17FB545974B84E3EE00A7391CC68D62F85F75);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD8E17FB545974B84E3EE00A7391CC68D62F85F75);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralAB4D078F0B204694308CED662D1F26B6468CBC11);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralAB4D078F0B204694308CED662D1F26B6468CBC11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral95E092E81BBD1D174346BD2D65962936389A0236);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral95E092E81BBD1D174346BD2D65962936389A0236);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3FBAA21AA905D4B4EA4D43342AE620A966595D3A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3FBAA21AA905D4B4EA4D43342AE620A966595D3A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral4D36A48931D35122B8D125FF8E0CDFFC638DCF62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral4D36A48931D35122B8D125FF8E0CDFFC638DCF62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral632E0FE7854BBC979B4DB06BCE624197CBB6ED4D);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral632E0FE7854BBC979B4DB06BCE624197CBB6ED4D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralCC1C39545E708795833576BE2CA997D65A84E8AE);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralCC1C39545E708795833576BE2CA997D65A84E8AE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral13994E6527DCB635F1A1EB19C59A5C3019A436BC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral13994E6527DCB635F1A1EB19C59A5C3019A436BC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral127F90A769FB4C553F77F8D37AADDEC63A09EE3F);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteral127F90A769FB4C553F77F8D37AADDEC63A09EE3F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral234E65E71425FB76B35D3B824090608036A76D13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral234E65E71425FB76B35D3B824090608036A76D13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral3878D403F76D0BAED5AB592B5BA1174C61A4892A);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)_stringLiteral3878D403F76D0BAED5AB592B5BA1174C61A4892A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral45A2803629897DBB2C206F364A3099B875FAF04F);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral45A2803629897DBB2C206F364A3099B875FAF04F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral696EE977D0ED598CAE1C700CC8766043622D3B8F);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)_stringLiteral696EE977D0ED598CAE1C700CC8766043622D3B8F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC735577AECE03EE7B42841C93EEE500B92671B34);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralC735577AECE03EE7B42841C93EEE500B92671B34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral9A08A617FCF06FDA3322DF86E11EDAFE8DAE2A18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)_stringLiteral9A08A617FCF06FDA3322DF86E11EDAFE8DAE2A18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral74E1F512FCA395E2AF063DD5C08BE4BCB0A94E91);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral74E1F512FCA395E2AF063DD5C08BE4BCB0A94E91);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (String_t*)_stringLiteral15F30E0AC0217F04C47A90E499E8480B94E2CD1B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (String_t*)_stringLiteral8611EF5A0C5591E334B1A7C6ADAE2D5E4417747A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (String_t*)_stringLiteralD6DCC897C02A857315752249765CB47ADDF4E5C7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralC9DED19749A48661A81474DE4485C2452F386245);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (String_t*)_stringLiteralC9DED19749A48661A81474DE4485C2452F386245);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral82F22AC12CFBA65C105242552D655442B27BA5EE);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (String_t*)_stringLiteral82F22AC12CFBA65C105242552D655442B27BA5EE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteral5A7AB4C26835F2B7D9AC2265C336A216EAADAFDA);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (String_t*)_stringLiteral5A7AB4C26835F2B7D9AC2265C336A216EAADAFDA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral1087D59D3BD2B97FB1727D6C81DD87D9DABEAD5F);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (String_t*)_stringLiteral1087D59D3BD2B97FB1727D6C81DD87D9DABEAD5F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (String_t*)_stringLiteralFEE98AE951E48A41902FA80D8D0A8CFDFB24DBFD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, _stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (String_t*)_stringLiteral176BEFE2A0F92FE381E066080E73F6DC94069E4C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_41;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral557B7333BE9FE30592B767F16562EA491ECAC716);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (String_t*)_stringLiteral557B7333BE9FE30592B767F16562EA491ECAC716);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteralB621ADB84CF65CE6F7918D90F40829282AD4AE47);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (String_t*)_stringLiteralB621ADB84CF65CE6F7918D90F40829282AD4AE47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteralAA32E3195E62F777991EC48916535BB4E4A2F2B2);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (String_t*)_stringLiteralAA32E3195E62F777991EC48916535BB4E4A2F2B2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteral0B7C4FCC1EE86CB6EA27E82D0768F3C5EA9AF9E4);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (String_t*)_stringLiteral0B7C4FCC1EE86CB6EA27E82D0768F3C5EA9AF9E4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteral1ED680B2B3E578FB949C553CC8315947F7C11C9E);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (String_t*)_stringLiteral1ED680B2B3E578FB949C553CC8315947F7C11C9E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteral5C9DB922F78B95FFD954D673041062B2B1CFFA30);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (String_t*)_stringLiteral5C9DB922F78B95FFD954D673041062B2B1CFFA30);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral2F7120D7CAD4D1020796F12B22BE2DDA4A63DF98);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (String_t*)_stringLiteral2F7120D7CAD4D1020796F12B22BE2DDA4A63DF98);
		((MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_StaticFields*)il2cpp_codegen_static_fields_for(MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_il2cpp_TypeInfo_var))->___msgLabels_41 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_StaticFields*)il2cpp_codegen_static_fields_for(MsgType_t0ADF00252356BB4D36768CA648A02506BE4411A4_il2cpp_TypeInfo_var))->___msgLabels_41), (void*)L_48);
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
// System.String UnityEngine.Networking.NetworkMessage::Dump(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkMessage_Dump_m9F1E3CD796B387B12A7C453C419223322DA32EFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload0, int32_t ___sz1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string outStr = "[";
		V_0 = _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
		// for (int i = 0; i < sz; i++)
		V_1 = 0;
		goto IL_0026;
	}

IL_000a:
	{
		// outStr += (payload[i] + " ");
		String_t* L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___payload0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_3, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_4;
		// for (int i = 0; i < sz; i++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < sz; i++)
		int32_t L_6 = V_1;
		int32_t L_7 = ___sz1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000a;
		}
	}
	{
		// outStr += "]";
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_0 = L_9;
		// return outStr;
		String_t* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.Networking.NetworkMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkMessage__ctor_mDBB6C197E0C0967FADF692FC1646C2D53602BF42 (NetworkMessage_t3F0B68418D6AD2AE8834801567731D1812C406F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Networking.Channels::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Channels__ctor_m5302D583411C1978E202754172567C8888BE5BF8 (Channels_t6F3C4F3E402757F4CBB768BBBF2DA6468D570EC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage__ctor_mFDC7AA3B07786B67E53D710F76FDBD6F69C1343C (StringMessage_t5C0AA3DDE1D5020866FDD89FD24BE66B007665F4* __this, const RuntimeMethod* method) 
{
	{
		// public StringMessage()
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage__ctor_mA3B4051B4C3C4039383AE013A2C06F0F13EDC534 (StringMessage_t5C0AA3DDE1D5020866FDD89FD24BE66B007665F4* __this, String_t* ___v0, const RuntimeMethod* method) 
{
	{
		// public StringMessage(string v)
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
		// value = v;
		String_t* L_0 = ___v0;
		__this->___value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage_Deserialize_mB3FF833751FFD81A2042D5B6DB57298F0ECB600B (StringMessage_t5C0AA3DDE1D5020866FDD89FD24BE66B007665F4* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// value = reader.ReadString();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = NetworkReader_ReadString_m51B525BB83B0742775B2415FFFE427DED5DBEDEA(L_0, NULL);
		__this->___value_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringMessage_Serialize_m75FCC9D6C48C6384BD48E1D8E6106FA7A6507618 (StringMessage_t5C0AA3DDE1D5020866FDD89FD24BE66B007665F4* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(value);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		String_t* L_1 = __this->___value_0;
		NullCheck(L_0);
		NetworkWriter_Write_m1283CB4B7C3F283DAFD3FD7B66A584D0046BF431(L_0, L_1, NULL);
		// }
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
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMessage__ctor_m9553E5D32B3307D43D83887673198A89AF027633 (IntegerMessage_tC0C55FB9DF3EEB5B2643E7F08C21AB31095468FC* __this, const RuntimeMethod* method) 
{
	{
		// public IntegerMessage()
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMessage__ctor_mD65725A2EA53EB3DDB5AC0BFE972ADF2AF295406 (IntegerMessage_tC0C55FB9DF3EEB5B2643E7F08C21AB31095468FC* __this, int32_t ___v0, const RuntimeMethod* method) 
{
	{
		// public IntegerMessage(int v)
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
		// value = v;
		int32_t L_0 = ___v0;
		__this->___value_0 = L_0;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMessage_Deserialize_m42E4A14D1E518A8A1F6F571CA4DC77510CE0E389 (IntegerMessage_tC0C55FB9DF3EEB5B2643E7F08C21AB31095468FC* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// value = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_0, NULL);
		__this->___value_0 = L_1;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.IntegerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerMessage_Serialize_m3F2C414E95CA21F8678201BF09FC31FEA8236E08 (IntegerMessage_tC0C55FB9DF3EEB5B2643E7F08C21AB31095468FC* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.WritePackedUInt32((uint)value);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int32_t L_1 = __this->___value_0;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_0, L_1, NULL);
		// }
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
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyMessage_Deserialize_m86CEEC4977C071133739B9B2ED11C24ABC655C66 (EmptyMessage_t7CB1744BE9D0624FAF94F6C20BEB317850C26C23* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyMessage_Serialize_mC3023DA2643FC9C492CC6DF35B64857B90600DE4 (EmptyMessage_t7CB1744BE9D0624FAF94F6C20BEB317850C26C23* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyMessage__ctor_m239CC7DB66F2291350F62C3CB19C35A33F14B63A (EmptyMessage_t7CB1744BE9D0624FAF94F6C20BEB317850C26C23* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_Deserialize_mED894C07268EFC371D8003B35E7268EDD896FD7E (ErrorMessage_t090D2A233C0B03E10E7FF76E98ABA7B9E3AE9C29* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// errorCode = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		__this->___errorCode_0 = L_1;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage_Serialize_mF37C44E2C2C88AAAF57C4B77C9D84D219EEA78E8 (ErrorMessage_t090D2A233C0B03E10E7FF76E98ABA7B9E3AE9C29* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write((ushort)errorCode);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int32_t L_1 = __this->___errorCode_0;
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)L_1), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorMessage__ctor_mD3F33F3CC857AA52F9414D23DBE1DCB176A4D7D2 (ErrorMessage_t090D2A233C0B03E10E7FF76E98ABA7B9E3AE9C29* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ReadyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyMessage__ctor_mF7D3A70A23BD158541217A828FB2203E0CE3A602 (ReadyMessage_tACF673A1B0E41B1BA50F1D6C747EAF1EA4E231C6* __this, const RuntimeMethod* method) 
{
	{
		EmptyMessage__ctor_m239CC7DB66F2291350F62C3CB19C35A33F14B63A(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.NotReadyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotReadyMessage__ctor_mBB14996CAD0E3C89CF3E9ABEF2558C456F188F1B (NotReadyMessage_tCA7E545F5AC6A175451A840D5EE06ED4AE1CA855* __this, const RuntimeMethod* method) 
{
	{
		EmptyMessage__ctor_m239CC7DB66F2291350F62C3CB19C35A33F14B63A(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayerMessage_Deserialize_m957153FB7F66E7037CB2354A54AF342914C694AA (AddPlayerMessage_t8E94AC8329D77FE6B781E634D451BD6EA6C26D95* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// playerControllerId = (short)reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		__this->___playerControllerId_0 = ((int16_t)L_1);
		// msgData = reader.ReadBytesAndSize();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = NetworkReader_ReadBytesAndSize_mDA88D352B1100BA498F30D09A9B276F6D637E9FD(L_2, NULL);
		__this->___msgData_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msgData_2), (void*)L_3);
		// if (msgData == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___msgData_2;
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		// msgSize = 0;
		__this->___msgSize_1 = 0;
		return;
	}

IL_0029:
	{
		// msgSize = msgData.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___msgData_2;
		NullCheck(L_5);
		__this->___msgSize_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayerMessage_Serialize_m4AF77524E47EEE49E8A2AC53B719106533C6F91E (AddPlayerMessage_t8E94AC8329D77FE6B781E634D451BD6EA6C26D95* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write((ushort)playerControllerId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int16_t L_1 = __this->___playerControllerId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)L_1), NULL);
		// writer.WriteBytesAndSize(msgData, msgSize);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___msgData_2;
		int32_t L_4 = __this->___msgSize_1;
		NullCheck(L_2);
		NetworkWriter_WriteBytesAndSize_m287A81776FFAD7B137EB999EBA8C42A3DBBAE205(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddPlayerMessage__ctor_mA693868BFADE773E703957667475A180AF70F679 (AddPlayerMessage_t8E94AC8329D77FE6B781E634D451BD6EA6C26D95* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemovePlayerMessage_Deserialize_m34BDC305274AB48C700A3A328936B37B9091D164 (RemovePlayerMessage_tCAA5095003A51B1AAC798DAE1B9B2E6A6BB3CF4E* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// playerControllerId = (short)reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		__this->___playerControllerId_0 = ((int16_t)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemovePlayerMessage_Serialize_m5DA92EEFD0F13C1A7E540D49BBA8F621696C0C35 (RemovePlayerMessage_tCAA5095003A51B1AAC798DAE1B9B2E6A6BB3CF4E* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write((ushort)playerControllerId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int16_t L_1 = __this->___playerControllerId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)L_1), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemovePlayerMessage__ctor_m16B3BA32C9266182E5055840DAE65DEDC238183D (RemovePlayerMessage_tCAA5095003A51B1AAC798DAE1B9B2E6A6BB3CF4E* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerAuthorityMessage_Deserialize_mEF2985420E58C181BED80E38C687A18F7096F03C (PeerAuthorityMessage_t4D4E36C51C920870AC6E9C4399180A2CBBFE7DC6* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// connectionId = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_0, NULL);
		__this->___connectionId_0 = L_1;
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_3;
		L_3 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_2, NULL);
		__this->___netId_1 = L_3;
		// authorityState = reader.ReadBoolean();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_4, NULL);
		__this->___authorityState_2 = L_5;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerAuthorityMessage_Serialize_m77405E3929E5F68C1B5B5A2871A422C23347BFC5 (PeerAuthorityMessage_t4D4E36C51C920870AC6E9C4399180A2CBBFE7DC6* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.WritePackedUInt32((uint)connectionId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int32_t L_1 = __this->___connectionId_0;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_0, L_1, NULL);
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_3 = __this->___netId_1;
		NullCheck(L_2);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_2, L_3, NULL);
		// writer.Write(authorityState);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_4 = ___writer0;
		bool L_5 = __this->___authorityState_2;
		NullCheck(L_4);
		NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerAuthorityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerAuthorityMessage__ctor_m4A0FA4505D3D335F6F95B00F3539F6540B98484A (PeerAuthorityMessage_t4D4E36C51C920870AC6E9C4399180A2CBBFE7DC6* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerInfoMessage_Deserialize_m06B1372424A1F3167D18FB9F7A4CB61CF5251B39 (PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA7B44268FDAC9F0CA81ED8AE91B8765E0DB784D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mBFD6A929875E559F85AE07F9A97A6D72112894C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDDC1D201BE6BB700CBAF518700978DEFCF9CC6D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* V_1 = NULL;
	uint32_t V_2 = 0;
	PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// connectionId = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_0, NULL);
		__this->___connectionId_0 = L_1;
		// address = reader.ReadString();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = NetworkReader_ReadString_m51B525BB83B0742775B2415FFFE427DED5DBEDEA(L_2, NULL);
		__this->___address_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___address_1), (void*)L_3);
		// port = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		uint32_t L_5;
		L_5 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_4, NULL);
		__this->___port_2 = L_5;
		// isHost = reader.ReadBoolean();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_6 = ___reader0;
		NullCheck(L_6);
		bool L_7;
		L_7 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_6, NULL);
		__this->___isHost_3 = L_7;
		// isYou = reader.ReadBoolean();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_8 = ___reader0;
		NullCheck(L_8);
		bool L_9;
		L_9 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_8, NULL);
		__this->___isYou_4 = L_9;
		// uint numPlayers = reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_10 = ___reader0;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_10, NULL);
		V_0 = L_11;
		// if (numPlayers > 0)
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) > ((uint32_t)0))))
		{
			goto IL_0087;
		}
	}
	{
		// List<PeerInfoPlayer> ids = new List<PeerInfoPlayer>();
		List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* L_13 = (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674*)il2cpp_codegen_object_new(List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_mDDC1D201BE6BB700CBAF518700978DEFCF9CC6D6(L_13, List_1__ctor_mDDC1D201BE6BB700CBAF518700978DEFCF9CC6D6_RuntimeMethod_var);
		V_1 = L_13;
		// for (uint i = 0; i < numPlayers; i++)
		V_2 = 0;
		goto IL_0077;
	}

IL_0051:
	{
		// info.netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_14 = ___reader0;
		NullCheck(L_14);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_15;
		L_15 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_14, NULL);
		(&V_3)->___netId_0 = L_15;
		// info.playerControllerId = (short)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_16 = ___reader0;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_16, NULL);
		(&V_3)->___playerControllerId_1 = ((int16_t)L_17);
		// ids.Add(info);
		List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* L_18 = V_1;
		PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 L_19 = V_3;
		NullCheck(L_18);
		List_1_Add_mA7B44268FDAC9F0CA81ED8AE91B8765E0DB784D9_inline(L_18, L_19, List_1_Add_mA7B44268FDAC9F0CA81ED8AE91B8765E0DB784D9_RuntimeMethod_var);
		// for (uint i = 0; i < numPlayers; i++)
		uint32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, 1));
	}

IL_0077:
	{
		// for (uint i = 0; i < numPlayers; i++)
		uint32_t L_21 = V_2;
		uint32_t L_22 = V_0;
		if ((!(((uint32_t)L_21) >= ((uint32_t)L_22))))
		{
			goto IL_0051;
		}
	}
	{
		// playerIds = ids.ToArray();
		List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* L_23 = V_1;
		NullCheck(L_23);
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_24;
		L_24 = List_1_ToArray_mBFD6A929875E559F85AE07F9A97A6D72112894C9(L_23, List_1_ToArray_mBFD6A929875E559F85AE07F9A97A6D72112894C9_RuntimeMethod_var);
		__this->___playerIds_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerIds_5), (void*)L_24);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerInfoMessage_Serialize_m68D7F60A12945C0326B07861C37736B90FC47161 (PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// writer.WritePackedUInt32((uint)connectionId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int32_t L_1 = __this->___connectionId_0;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_0, L_1, NULL);
		// writer.Write(address);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		String_t* L_3 = __this->___address_1;
		NullCheck(L_2);
		NetworkWriter_Write_m1283CB4B7C3F283DAFD3FD7B66A584D0046BF431(L_2, L_3, NULL);
		// writer.WritePackedUInt32((uint)port);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_4 = ___writer0;
		int32_t L_5 = __this->___port_2;
		NullCheck(L_4);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_4, L_5, NULL);
		// writer.Write(isHost);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_6 = ___writer0;
		bool L_7 = __this->___isHost_3;
		NullCheck(L_6);
		NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A(L_6, L_7, NULL);
		// writer.Write(isYou);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_8 = ___writer0;
		bool L_9 = __this->___isYou_4;
		NullCheck(L_8);
		NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A(L_8, L_9, NULL);
		// if (playerIds == null)
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_10 = __this->___playerIds_5;
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		// writer.WritePackedUInt32(0);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_11 = ___writer0;
		NullCheck(L_11);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_11, 0, NULL);
		return;
	}

IL_004c:
	{
		// writer.WritePackedUInt32((uint)playerIds.Length);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_12 = ___writer0;
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_13 = __this->___playerIds_5;
		NullCheck(L_13);
		NullCheck(L_12);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		// for (int i = 0; i < playerIds.Length; i++)
		V_0 = 0;
		goto IL_0090;
	}

IL_005e:
	{
		// writer.Write(playerIds[i].netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_14 = ___writer0;
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_15 = __this->___playerIds_5;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___netId_0;
		NullCheck(L_14);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_14, L_17, NULL);
		// writer.WritePackedUInt32((uint)playerIds[i].playerControllerId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_18 = ___writer0;
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_19 = __this->___playerIds_5;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int16_t L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___playerControllerId_1;
		NullCheck(L_18);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_18, L_21, NULL);
		// for (int i = 0; i < playerIds.Length; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0090:
	{
		// for (int i = 0; i < playerIds.Length; i++)
		int32_t L_23 = V_0;
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_24 = __this->___playerIds_5;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_005e;
		}
	}
	{
		// }
		return;
	}
}
// System.String UnityEngine.Networking.NetworkSystem.PeerInfoMessage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PeerInfoMessage_ToString_m23AC05C015F6244F77E0089D4DEDF82DD951CBB5 (PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA1B0B295B02690FCCC1785649E50DC946A7CB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EC449F5B2EAFA85049BADD7C4D0D1673C424E08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral656E1DEE31CADB55B09AB66611AC4A9FB6282D9E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA836067A0DF79A979E3B805D2F0E23310042F7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "PeerInfo conn:" + connectionId + " addr:" + address + ":" + port + " host:" + isHost + " isYou:" + isYou;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral1FA1B0B295B02690FCCC1785649E50DC946A7CB5);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1FA1B0B295B02690FCCC1785649E50DC946A7CB5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (&__this->___connectionId_0);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral656E1DEE31CADB55B09AB66611AC4A9FB6282D9E);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral656E1DEE31CADB55B09AB66611AC4A9FB6282D9E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7 = __this->___address_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		int32_t* L_10 = (&__this->___port_2);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_9;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3EC449F5B2EAFA85049BADD7C4D0D1673C424E08);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral3EC449F5B2EAFA85049BADD7C4D0D1673C424E08);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		bool* L_14 = (&__this->___isHost_3);
		String_t* L_15;
		L_15 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralCA836067A0DF79A979E3B805D2F0E23310042F7D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralCA836067A0DF79A979E3B805D2F0E23310042F7D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		bool* L_18 = (&__this->___isYou_4);
		String_t* L_19;
		L_19 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_18, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_17, NULL);
		return L_20;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerInfoMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerInfoMessage__ctor_m3023854544CC93FCD715EC1FC922AE6BE26DD644 (PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerListMessage_Deserialize_m239A252844DD8819B7C5CCDDCC4549D61D537F56 (PeerListMessage_t84739010115739B6CB9C61A0B5F8D8E502CB353B* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* V_2 = NULL;
	{
		// oldServerConnectionId = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_0, NULL);
		__this->___oldServerConnectionId_1 = L_1;
		// int numPeers = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		uint16_t L_3;
		L_3 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_2, NULL);
		V_0 = L_3;
		// peers = new PeerInfoMessage[numPeers];
		int32_t L_4 = V_0;
		PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C* L_5 = (PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C*)(PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C*)SZArrayNew(PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___peers_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___peers_0), (void*)L_5);
		// for (int i = 0; i < peers.Length; ++i)
		V_1 = 0;
		goto IL_003d;
	}

IL_0023:
	{
		// var peerInfo = new PeerInfoMessage();
		PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* L_6 = (PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB*)il2cpp_codegen_object_new(PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		PeerInfoMessage__ctor_m3023854544CC93FCD715EC1FC922AE6BE26DD644(L_6, NULL);
		V_2 = L_6;
		// peerInfo.Deserialize(reader);
		PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* L_7 = V_2;
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_8 = ___reader0;
		NullCheck(L_7);
		VirtualActionInvoker1< NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* >::Invoke(4 /* System.Void UnityEngine.Networking.MessageBase::Deserialize(UnityEngine.Networking.NetworkReader) */, L_7, L_8);
		// peers[i] = peerInfo;
		PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C* L_9 = __this->___peers_0;
		int32_t L_10 = V_1;
		PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* L_11 = V_2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB*)L_11);
		// for (int i = 0; i < peers.Length; ++i)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003d:
	{
		// for (int i = 0; i < peers.Length; ++i)
		int32_t L_13 = V_1;
		PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C* L_14 = __this->___peers_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerListMessage_Serialize_m42277B3D9D9502BB1DB2AF112E778177B8B17D9C (PeerListMessage_t84739010115739B6CB9C61A0B5F8D8E502CB353B* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// writer.WritePackedUInt32((uint)oldServerConnectionId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int32_t L_1 = __this->___oldServerConnectionId_1;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_0, L_1, NULL);
		// writer.Write((ushort)peers.Length);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C* L_3 = __this->___peers_0;
		NullCheck(L_3);
		NullCheck(L_2);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_2, (uint16_t)((int32_t)(uint16_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), NULL);
		// for (int i = 0; i < peers.Length; i++)
		V_0 = 0;
		goto IL_0031;
	}

IL_001f:
	{
		// peers[i].Serialize(writer);
		PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C* L_4 = __this->___peers_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		PeerInfoMessage_tDEC3E6BEE3A24F63D4F01A29BC1D128BFDFD9CCB* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_8 = ___writer0;
		NullCheck(L_7);
		VirtualActionInvoker1< NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* >::Invoke(5 /* System.Void UnityEngine.Networking.MessageBase::Serialize(UnityEngine.Networking.NetworkWriter) */, L_7, L_8);
		// for (int i = 0; i < peers.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0031:
	{
		// for (int i = 0; i < peers.Length; i++)
		int32_t L_10 = V_0;
		PeerInfoMessageU5BU5D_t12896B755A4433D13C78C4B2CD072D4E61051A2C* L_11 = __this->___peers_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_001f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.PeerListMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PeerListMessage__ctor_m70E8972A868C0C774A7C77197290C0A7B5111DD7 (PeerListMessage_t84739010115739B6CB9C61A0B5F8D8E502CB353B* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectMessage_Deserialize_m2D4806F2CFEB92552779DA01FE97BD80BA068BA8 (ReconnectMessage_t5BE728CB9D727A9C26717030B7B811D8AD14CA5D* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// oldConnectionId = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_0, NULL);
		__this->___oldConnectionId_0 = L_1;
		// playerControllerId = (short)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_2, NULL);
		__this->___playerControllerId_1 = ((int16_t)L_3);
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_5;
		L_5 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_4, NULL);
		__this->___netId_2 = L_5;
		// msgData = reader.ReadBytesAndSize();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NetworkReader_ReadBytesAndSize_mDA88D352B1100BA498F30D09A9B276F6D637E9FD(L_6, NULL);
		__this->___msgData_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___msgData_4), (void*)L_7);
		// msgSize = msgData.Length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___msgData_4;
		NullCheck(L_8);
		__this->___msgSize_3 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectMessage_Serialize_m9609727CFA9B59F1891EA8DDA7596453D2566E5F (ReconnectMessage_t5BE728CB9D727A9C26717030B7B811D8AD14CA5D* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.WritePackedUInt32((uint)oldConnectionId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		int32_t L_1 = __this->___oldConnectionId_0;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_0, L_1, NULL);
		// writer.WritePackedUInt32((uint)playerControllerId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		int16_t L_3 = __this->___playerControllerId_1;
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_2, L_3, NULL);
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_4 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_5 = __this->___netId_2;
		NullCheck(L_4);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_4, L_5, NULL);
		// writer.WriteBytesAndSize(msgData, msgSize);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_6 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___msgData_4;
		int32_t L_8 = __this->___msgSize_3;
		NullCheck(L_6);
		NetworkWriter_WriteBytesAndSize_m287A81776FFAD7B137EB999EBA8C42A3DBBAE205(L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReconnectMessage__ctor_m779DFB53001DFF1D12319D3ADD97107648D2D650 (ReconnectMessage_t5BE728CB9D727A9C26717030B7B811D8AD14CA5D* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnMessage_Deserialize_m33FC35AA8F33708CF744A322D0539DF7359B61D9 (ObjectSpawnMessage_tEAD868793F02803713E7D3DDA874880DF52AA800* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// assetId = reader.ReadNetworkHash128();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A L_3;
		L_3 = NetworkReader_ReadNetworkHash128_m808E1E79413F4EBFD7ED8B07201249FADEC54F63(L_2, NULL);
		__this->___assetId_1 = L_3;
		// position = reader.ReadVector3();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = NetworkReader_ReadVector3_mE4C0E148F7C0AEFEFF34552A53F055C5C649DD00(L_4, NULL);
		__this->___position_2 = L_5;
		// payload = reader.ReadBytesAndSize();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NetworkReader_ReadBytesAndSize_mDA88D352B1100BA498F30D09A9B276F6D637E9FD(L_6, NULL);
		__this->___payload_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___payload_3), (void*)L_7);
		// uint extraPayloadSize = sizeof(uint) * 4;
		V_0 = ((int32_t)16);
		// if ((reader.Length - reader.Position) >= extraPayloadSize)
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_8 = ___reader0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = NetworkReader_get_Length_m948DB5EE31C5EBE8C7920B5BC331CE161DFD7C3D(L_8, NULL);
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_10 = ___reader0;
		NullCheck(L_10);
		uint32_t L_11;
		L_11 = NetworkReader_get_Position_m1D7B71390C3B02AEF080981278E0CA120E81C656(L_10, NULL);
		uint32_t L_12 = V_0;
		if ((((int64_t)((int64_t)il2cpp_codegen_subtract(((int64_t)L_9), ((int64_t)(uint64_t)L_11)))) < ((int64_t)((int64_t)(uint64_t)L_12))))
		{
			goto IL_0052;
		}
	}
	{
		// rotation = reader.ReadQuaternion();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_13 = ___reader0;
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = NetworkReader_ReadQuaternion_mB282906C3516C0A7FE9B36593BE1F8CFD096BB61(L_13, NULL);
		__this->___rotation_4 = L_14;
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnMessage_Serialize_m5BC076B2326C6660A9C60BB938539193A55C4AFE (ObjectSpawnMessage_tEAD868793F02803713E7D3DDA874880DF52AA800* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// writer.Write(assetId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		NetworkHash128_tFC7FE5A7A0136AB75F1F852D44F9C1706CCBB76A L_3 = __this->___assetId_1;
		NullCheck(L_2);
		NetworkWriter_Write_m2E853E80B11406A46C628EC20B4E473BDC5F09CB(L_2, L_3, NULL);
		// writer.Write(position);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_4 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___position_2;
		NullCheck(L_4);
		NetworkWriter_Write_m39D65A26D87F3AC69619BCC9680353DFA7A0A407(L_4, L_5, NULL);
		// writer.WriteBytesFull(payload);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_6 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___payload_3;
		NullCheck(L_6);
		NetworkWriter_WriteBytesFull_mE9EF15EA529BF6351D4D988A5201A462FFA63CE3(L_6, L_7, NULL);
		// writer.Write(rotation);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_8 = ___writer0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___rotation_4;
		NullCheck(L_8);
		NetworkWriter_Write_m6AF61F86E7EEAC654790BF29464FCA225AE4325D(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnMessage__ctor_m3283745C6D48E20591F92D9271E14BD79B97F9B8 (ObjectSpawnMessage_tEAD868793F02803713E7D3DDA874880DF52AA800* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage_Deserialize_mCB39F588BCD65D1C38B7C4CE445EE57E212DB6C2 (ObjectSpawnSceneMessage_t7F40FE67BE68B3A233695F20FF1E6A75C61F36FA* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// sceneId = reader.ReadSceneId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		NetworkSceneId_tA78AA0EFCF7AAAD63ED6C40AA9769DA422CD35FF L_3;
		L_3 = NetworkReader_ReadSceneId_m5B623B22A965C1AFDDC75AEDAC18342129480741(L_2, NULL);
		__this->___sceneId_1 = L_3;
		// position = reader.ReadVector3();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = NetworkReader_ReadVector3_mE4C0E148F7C0AEFEFF34552A53F055C5C649DD00(L_4, NULL);
		__this->___position_2 = L_5;
		// payload = reader.ReadBytesAndSize();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NetworkReader_ReadBytesAndSize_mDA88D352B1100BA498F30D09A9B276F6D637E9FD(L_6, NULL);
		__this->___payload_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___payload_3), (void*)L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage_Serialize_m3A5F29D1A991234E49DA2D3D6AF4AA8C2E0CE3BC (ObjectSpawnSceneMessage_t7F40FE67BE68B3A233695F20FF1E6A75C61F36FA* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// writer.Write(sceneId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		NetworkSceneId_tA78AA0EFCF7AAAD63ED6C40AA9769DA422CD35FF L_3 = __this->___sceneId_1;
		NullCheck(L_2);
		NetworkWriter_Write_m374FD3EE8A9D361F1625343771CE0A4B495AD0D6(L_2, L_3, NULL);
		// writer.Write(position);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_4 = ___writer0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___position_2;
		NullCheck(L_4);
		NetworkWriter_Write_m39D65A26D87F3AC69619BCC9680353DFA7A0A407(L_4, L_5, NULL);
		// writer.WriteBytesFull(payload);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_6 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___payload_3;
		NullCheck(L_6);
		NetworkWriter_WriteBytesFull_mE9EF15EA529BF6351D4D988A5201A462FFA63CE3(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnSceneMessage__ctor_m22A11B3B4A9EB954AE90F7F8347C03707B07A7E7 (ObjectSpawnSceneMessage_t7F40FE67BE68B3A233695F20FF1E6A75C61F36FA* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage_Deserialize_m50F66EC5C8D34E196818695D0416CCD4ABCBC260 (ObjectSpawnFinishedMessage_tDEF8DBE3A606AABB4E8550E88102B7618C073ED1* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// state = reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint32_t L_1;
		L_1 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_0, NULL);
		__this->___state_0 = L_1;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage_Serialize_m32E2B9ECBA39CDA51D2B43B9EE327CC61F1F1EDB (ObjectSpawnFinishedMessage_tDEF8DBE3A606AABB4E8550E88102B7618C073ED1* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.WritePackedUInt32(state);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		uint32_t L_1 = __this->___state_0;
		NullCheck(L_0);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawnFinishedMessage__ctor_m5822BBE910FD6C08D1421F916A2968794F55C495 (ObjectSpawnFinishedMessage_tDEF8DBE3A606AABB4E8550E88102B7618C073ED1* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage_Deserialize_m42252CE9E276CDF8716F84F3E3003FA3E72CFCB1 (ObjectDestroyMessage_tD5BEC7016E92F683E030F0E8F7B58AD2270C889C* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage_Serialize_m7898C23587642C2988C8E350B35B2DB8EED78D06 (ObjectDestroyMessage_tD5BEC7016E92F683E030F0E8F7B58AD2270C889C* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDestroyMessage__ctor_m68ADFBB1B52C9754C1209CFB4AB917846DB92527 (ObjectDestroyMessage_tD5BEC7016E92F683E030F0E8F7B58AD2270C889C* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage_Deserialize_mACB5CBE28DA5981AFF887701BEC75F74B88CEC66 (OwnerMessage_t3B1FB3E3C93EFAAA88C8B4D0CFA470BC74EFEF9B* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// playerControllerId = (short)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_2, NULL);
		__this->___playerControllerId_1 = ((int16_t)L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage_Serialize_m7959645DFCDFE542F92894846CDD93930B0FF8DE (OwnerMessage_t3B1FB3E3C93EFAAA88C8B4D0CFA470BC74EFEF9B* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// writer.WritePackedUInt32((uint)playerControllerId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		int16_t L_3 = __this->___playerControllerId_1;
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OwnerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OwnerMessage__ctor_m1248B093B30D2A58BCF263FABD0BE8B233F0FE53 (OwnerMessage_t3B1FB3E3C93EFAAA88C8B4D0CFA470BC74EFEF9B* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityMessage_Deserialize_m882734A9066EE1A96EBAAB38FD33AC124C0B1B49 (ClientAuthorityMessage_tE13DA094E8802F6BE6D7845D06DCF110F83AA39B* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// authority = reader.ReadBoolean();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_2, NULL);
		__this->___authority_1 = L_3;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityMessage_Serialize_mF89D03DFF4BE79613FF66102EB366997C202C517 (ClientAuthorityMessage_tE13DA094E8802F6BE6D7845D06DCF110F83AA39B* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// writer.Write(authority);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		bool L_3 = __this->___authority_1;
		NullCheck(L_2);
		NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientAuthorityMessage__ctor_m55EB6ACDEAE7F6BA63632B80B979FF40C8B0F556 (ClientAuthorityMessage_tE13DA094E8802F6BE6D7845D06DCF110F83AA39B* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideTransformMessage_Deserialize_m186F0EC4EE393986B31C7EACDD2F6C17EE2D81CA (OverrideTransformMessage_tE28F9E7E15FE7A9DB12D33D9783B452ADB33DC6E* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// payload = reader.ReadBytesAndSize();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = NetworkReader_ReadBytesAndSize_mDA88D352B1100BA498F30D09A9B276F6D637E9FD(L_2, NULL);
		__this->___payload_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___payload_1), (void*)L_3);
		// teleport = reader.ReadBoolean();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		bool L_5;
		L_5 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_4, NULL);
		__this->___teleport_2 = L_5;
		// time = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_6 = ___reader0;
		NullCheck(L_6);
		uint32_t L_7;
		L_7 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_6, NULL);
		__this->___time_3 = L_7;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideTransformMessage_Serialize_mE3403BBAD2EF35915A99D90203150FC0D2076020 (OverrideTransformMessage_tE28F9E7E15FE7A9DB12D33D9783B452ADB33DC6E* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// writer.WriteBytesFull(payload);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___payload_1;
		NullCheck(L_2);
		NetworkWriter_WriteBytesFull_mE9EF15EA529BF6351D4D988A5201A462FFA63CE3(L_2, L_3, NULL);
		// writer.Write(teleport);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_4 = ___writer0;
		bool L_5 = __this->___teleport_2;
		NullCheck(L_4);
		NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A(L_4, L_5, NULL);
		// writer.WritePackedUInt32((uint)time);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_6 = ___writer0;
		int32_t L_7 = __this->___time_3;
		NullCheck(L_6);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.OverrideTransformMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideTransformMessage__ctor_m2A8FA3AB4995FF88F01B7871A09E42DD2FDD3C85 (OverrideTransformMessage_tE28F9E7E15FE7A9DB12D33D9783B452ADB33DC6E* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage_Deserialize_m7826ED7F3E275EAF9CD98EECD8E11969501F354C (AnimationMessage_tC923BEF5EDBCFB8729E6AFFC01EB03695815F149* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// stateHash = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_2, NULL);
		__this->___stateHash_1 = L_3;
		// normalizedTime = reader.ReadSingle();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		float L_5;
		L_5 = NetworkReader_ReadSingle_m2CC38D2B8A8C038598FC78B08EF9CFD7ADD04B30(L_4, NULL);
		__this->___normalizedTime_2 = L_5;
		// parameters = reader.ReadBytesAndSize();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_6 = ___reader0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = NetworkReader_ReadBytesAndSize_mDA88D352B1100BA498F30D09A9B276F6D637E9FD(L_6, NULL);
		__this->___parameters_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_3), (void*)L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage_Serialize_m126A11E3D103FA0DA72E14D2EC7A2BB725FC2385 (AnimationMessage_tC923BEF5EDBCFB8729E6AFFC01EB03695815F149* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// writer.WritePackedUInt32((uint)stateHash);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		int32_t L_3 = __this->___stateHash_1;
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_2, L_3, NULL);
		// writer.Write(normalizedTime);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_4 = ___writer0;
		float L_5 = __this->___normalizedTime_2;
		NullCheck(L_4);
		NetworkWriter_Write_m76CFCD326B81E9B1A928DF900053CF7A4DD4D834(L_4, L_5, NULL);
		// if (parameters == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___parameters_3;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		// writer.WriteBytesAndSize(parameters, 0);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_7 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___parameters_3;
		NullCheck(L_7);
		NetworkWriter_WriteBytesAndSize_m287A81776FFAD7B137EB999EBA8C42A3DBBAE205(L_7, L_8, 0, NULL);
		return;
	}

IL_003a:
	{
		// writer.WriteBytesAndSize(parameters, parameters.Length);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_9 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___parameters_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___parameters_3;
		NullCheck(L_11);
		NullCheck(L_9);
		NetworkWriter_WriteBytesAndSize_m287A81776FFAD7B137EB999EBA8C42A3DBBAE205(L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage__ctor_mCF4A1E0192CD7F87C4DC02014C8B0558E2E34AB5 (AnimationMessage_tC923BEF5EDBCFB8729E6AFFC01EB03695815F149* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationParametersMessage_Deserialize_mDC8444E233E9A06725336E1E4085ACD096C67D98 (AnimationParametersMessage_tC6D5F290A16848FD43008C88405B471B416767AA* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// parameters = reader.ReadBytesAndSize();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = NetworkReader_ReadBytesAndSize_mDA88D352B1100BA498F30D09A9B276F6D637E9FD(L_2, NULL);
		__this->___parameters_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_1), (void*)L_3);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationParametersMessage_Serialize_m47E3ED051E038201ED2AC1706796F37E5D9B20B0 (AnimationParametersMessage_tC6D5F290A16848FD43008C88405B471B416767AA* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// if (parameters == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___parameters_1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// writer.WriteBytesAndSize(parameters, 0);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_3 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___parameters_1;
		NullCheck(L_3);
		NetworkWriter_WriteBytesAndSize_m287A81776FFAD7B137EB999EBA8C42A3DBBAE205(L_3, L_4, 0, NULL);
		return;
	}

IL_0022:
	{
		// writer.WriteBytesAndSize(parameters, parameters.Length);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_5 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___parameters_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___parameters_1;
		NullCheck(L_7);
		NullCheck(L_5);
		NetworkWriter_WriteBytesAndSize_m287A81776FFAD7B137EB999EBA8C42A3DBBAE205(L_5, L_6, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationParametersMessage__ctor_m895313F1D5B639FA449BE4A7AF07B3997AB57A12 (AnimationParametersMessage_tC6D5F290A16848FD43008C88405B471B416767AA* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_Deserialize_mBDB8E6AD31BD42E65B9B79F5952F02B7A0B73309 (AnimationTriggerMessage_t4C7632DDB6D76251E75479F468BEC8C7CC6EFA46* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// netId = reader.ReadNetworkId();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1;
		L_1 = NetworkReader_ReadNetworkId_mD23098EE9A404CD2CE71536A048B63DFE9F48AA6(L_0, NULL);
		__this->___netId_0 = L_1;
		// hash = (int)reader.ReadPackedUInt32();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		uint32_t L_3;
		L_3 = NetworkReader_ReadPackedUInt32_mA803D3A09F9A65D1DD8BAA4D6EDB984911932927(L_2, NULL);
		__this->___hash_1 = L_3;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_Serialize_m5A621666DCB659840EA43390CB4D71B76F0A4ECF (AnimationTriggerMessage_t4C7632DDB6D76251E75479F468BEC8C7CC6EFA46* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(netId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_1 = __this->___netId_0;
		NullCheck(L_0);
		NetworkWriter_Write_m25F4AFAEBF5F946C9C3388F639CC561EEC5499D7(L_0, L_1, NULL);
		// writer.WritePackedUInt32((uint)hash);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		int32_t L_3 = __this->___hash_1;
		NullCheck(L_2);
		NetworkWriter_WritePackedUInt32_m9D18F2518A8EC2FC2EBD39F80CBF65586CB6731A(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage__ctor_mAC898B275C07253948C1D7068A6850AED0084CE2 (AnimationTriggerMessage_t4C7632DDB6D76251E75479F468BEC8C7CC6EFA46* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyReadyToBeginMessage_Deserialize_m18C03F713F3E50E2F5654F726FA2F9C85972CEBA (LobbyReadyToBeginMessage_tC0EB3FC9804E40BD42B04F1C231478C21C7AB4FA* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	{
		// slotId = reader.ReadByte();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint8_t L_1;
		L_1 = NetworkReader_ReadByte_m74824526FADA7707D3CA59A470666A81EAF62F04(L_0, NULL);
		__this->___slotId_0 = L_1;
		// readyState = reader.ReadBoolean();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_2 = ___reader0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NetworkReader_ReadBoolean_m52DA635A0321F126A327FD98462D126FCF44EC00(L_2, NULL);
		__this->___readyState_1 = L_3;
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyReadyToBeginMessage_Serialize_m424B25237BE854D14C52289F8711D6192ED0267C (LobbyReadyToBeginMessage_tC0EB3FC9804E40BD42B04F1C231478C21C7AB4FA* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	{
		// writer.Write(slotId);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		uint8_t L_1 = __this->___slotId_0;
		NullCheck(L_0);
		NetworkWriter_Write_mFD999D46BF6AC4E4BE676A2CD723A5D2E5D418F8(L_0, L_1, NULL);
		// writer.Write(readyState);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		bool L_3 = __this->___readyState_1;
		NullCheck(L_2);
		NetworkWriter_Write_mB7A66C50A9589CAD586214263274F80D77CB4D3A(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LobbyReadyToBeginMessage__ctor_mB820F0489349BB80A5AEDAFC27E31F4D4B80AC4E (LobbyReadyToBeginMessage_tC0EB3FC9804E40BD42B04F1C231478C21C7AB4FA* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
IL2CPP_EXTERN_C void CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshal_pinvoke(const CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283& unmarshaled, CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___channel_1 = unmarshaled.___channel_1;
}
IL2CPP_EXTERN_C void CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshal_pinvoke_back(const CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshaled_pinvoke& marshaled, CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	uint8_t unmarshaledchannel_temp_1 = 0x0;
	unmarshaledchannel_temp_1 = marshaled.___channel_1;
	unmarshaled.___channel_1 = unmarshaledchannel_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
IL2CPP_EXTERN_C void CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshal_pinvoke_cleanup(CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
IL2CPP_EXTERN_C void CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshal_com(const CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283& unmarshaled, CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___channel_1 = unmarshaled.___channel_1;
}
IL2CPP_EXTERN_C void CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshal_com_back(const CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshaled_com& marshaled, CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	uint8_t unmarshaledchannel_temp_1 = 0x0;
	unmarshaledchannel_temp_1 = marshaled.___channel_1;
	unmarshaled.___channel_1 = unmarshaledchannel_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.NetworkSystem.CRCMessageEntry
IL2CPP_EXTERN_C void CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshal_com_cleanup(CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Deserialize(UnityEngine.Networking.NetworkReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRCMessage_Deserialize_m2DEFE36C90BDA1E6A282CE1BEEB154A42198196B (CRCMessage_tFFD742F45EC7E03F1278F1B6D722E62DDF74C3FB* __this, NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int numScripts = reader.ReadUInt16();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_0 = ___reader0;
		NullCheck(L_0);
		uint16_t L_1;
		L_1 = NetworkReader_ReadUInt16_m74773875CCF88C00FB8043E6420BE5B67EF3F96C(L_0, NULL);
		V_0 = L_1;
		// scripts = new CRCMessageEntry[numScripts];
		int32_t L_2 = V_0;
		CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB* L_3 = (CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB*)(CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB*)SZArrayNew(CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___scripts_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scripts_0), (void*)L_3);
		// for (int i = 0; i < scripts.Length; ++i)
		V_1 = 0;
		goto IL_004a;
	}

IL_0017:
	{
		// var entry = new CRCMessageEntry();
		il2cpp_codegen_initobj((&V_2), sizeof(CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283));
		// entry.name = reader.ReadString();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_4 = ___reader0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = NetworkReader_ReadString_m51B525BB83B0742775B2415FFFE427DED5DBEDEA(L_4, NULL);
		(&V_2)->___name_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___name_0), (void*)L_5);
		// entry.channel = reader.ReadByte();
		NetworkReader_tC0B633922D3D660F01C2A4414B1DA393F90805FF* L_6 = ___reader0;
		NullCheck(L_6);
		uint8_t L_7;
		L_7 = NetworkReader_ReadByte_m74824526FADA7707D3CA59A470666A81EAF62F04(L_6, NULL);
		(&V_2)->___channel_1 = L_7;
		// scripts[i] = entry;
		CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB* L_8 = __this->___scripts_0;
		int32_t L_9 = V_1;
		CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283 L_10 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (CRCMessageEntry_t7F5DB9D9E69CA01BDBB6B302EA2807E34330F283)L_10);
		// for (int i = 0; i < scripts.Length; ++i)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < scripts.Length; ++i)
		int32_t L_12 = V_1;
		CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB* L_13 = __this->___scripts_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Serialize(UnityEngine.Networking.NetworkWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRCMessage_Serialize_m7EAAC62AEFAE032B92B53EA371ABFB7FFED838C4 (CRCMessage_tFFD742F45EC7E03F1278F1B6D722E62DDF74C3FB* __this, NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* ___writer0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// writer.Write((ushort)scripts.Length);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_0 = ___writer0;
		CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB* L_1 = __this->___scripts_0;
		NullCheck(L_1);
		NullCheck(L_0);
		NetworkWriter_Write_m0267FC83157B4AD8D9F98525F4227365B3D792F3(L_0, (uint16_t)((int32_t)(uint16_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), NULL);
		// for (int i = 0; i < scripts.Length; i++)
		V_0 = 0;
		goto IL_0045;
	}

IL_0013:
	{
		// writer.Write(scripts[i].name);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_2 = ___writer0;
		CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB* L_3 = __this->___scripts_0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		String_t* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)))->___name_0;
		NullCheck(L_2);
		NetworkWriter_Write_m1283CB4B7C3F283DAFD3FD7B66A584D0046BF431(L_2, L_5, NULL);
		// writer.Write(scripts[i].channel);
		NetworkWriter_tF47B58080F1507C5CAD4565BDD3EEDF87AB6BC7D* L_6 = ___writer0;
		CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB* L_7 = __this->___scripts_0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		uint8_t L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___channel_1;
		NullCheck(L_6);
		NetworkWriter_Write_mFD999D46BF6AC4E4BE676A2CD723A5D2E5D418F8(L_6, L_9, NULL);
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < scripts.Length; i++)
		int32_t L_11 = V_0;
		CRCMessageEntryU5BU5D_tB234AE9DEC1F0E0CEDC59E441B88490686BA83BB* L_12 = __this->___scripts_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRCMessage__ctor_m29D264649479140ED8F530E94C53D86219B14D51 (CRCMessage_tFFD742F45EC7E03F1278F1B6D722E62DDF74C3FB* __this, const RuntimeMethod* method) 
{
	{
		MessageBase__ctor_mF308385EEAD27765AE7524691F70FBF6AC296D83(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 NetworkIdentity_get_netId_m70B0E185B63A6E7876C84FB6ED0B0DB0FC2D4A24_inline (NetworkIdentity_t0AEA035B486ACB2F53A46610EC3822E80699FA63* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkInstanceId netId { get { return m_NetId; } }
		NetworkInstanceId_t04AE59DB96596368D73416F6E714711AB11DA666 L_0 = __this->___m_NetId_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mA7B44268FDAC9F0CA81ED8AE91B8765E0DB784D9_gshared_inline (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674* __this, PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 ___item0, const RuntimeMethod* method) 
{
	PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_1 = (PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		PeerInfoPlayerU5BU5D_t4AD11F911562E11D0516781AE872EE94C5CF3004* L_6 = V_0;
		int32_t L_7 = V_1;
		PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878)L_8);
		return;
	}

IL_0034:
	{
		PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878 L_9 = ___item0;
		((  void (*) (List_1_tCDA69D4A58486AFD3360A16462CF5AD25231A674*, PeerInfoPlayer_tE752217372A2A8A8BE10E0231BD60CE337DB9878, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
