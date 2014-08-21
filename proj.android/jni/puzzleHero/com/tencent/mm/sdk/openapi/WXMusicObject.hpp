/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.openapi.WXMusicObject
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_OPENAPI_WXMUSICOBJECT_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_OPENAPI_WXMUSICOBJECT_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace sdk { namespace openapi { namespace WXMediaMessage_ { class IMediaObject; } } } } } } }


#include <android/os/Bundle.hpp>
#include <com/tencent/mm/sdk/openapi/WXMediaMessage.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace openapi {

	class WXMusicObject;
	class WXMusicObject
		: public object<WXMusicObject>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit WXMusicObject(jobject jobj)
		: object<WXMusicObject>(jobj)
		, musicUrl(jobj)
		, musicLowBandUrl(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<com::tencent::mm::sdk::openapi::WXMediaMessage_::IMediaObject>() const;


		WXMusicObject();
		void serialize(local_ref< android::os::Bundle >  const&);
		void unserialize(local_ref< android::os::Bundle >  const&);
		jint type();
		jboolean checkArgs();

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > musicUrl;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > musicLowBandUrl;
	}; //class WXMusicObject

} //namespace openapi
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_OPENAPI_WXMUSICOBJECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_OPENAPI_WXMUSICOBJECT_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_OPENAPI_WXMUSICOBJECT_HPP_IMPL

namespace j2cpp {



com::tencent::mm::sdk::openapi::WXMusicObject::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

com::tencent::mm::sdk::openapi::WXMusicObject::operator local_ref<com::tencent::mm::sdk::openapi::WXMediaMessage_::IMediaObject>() const
{
	return local_ref<com::tencent::mm::sdk::openapi::WXMediaMessage_::IMediaObject>(get_jobject());
}


com::tencent::mm::sdk::openapi::WXMusicObject::WXMusicObject()
: object<com::tencent::mm::sdk::openapi::WXMusicObject>(
	call_new_object<
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, musicUrl(get_jobject())
, musicLowBandUrl(get_jobject())
{
}


void com::tencent::mm::sdk::openapi::WXMusicObject::serialize(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void com::tencent::mm::sdk::openapi::WXMusicObject::unserialize(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0);
}

jint com::tencent::mm::sdk::openapi::WXMusicObject::type()
{
	return call_method<
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_SIGNATURE(3), 
		jint
	>(get_jobject());
}

jboolean com::tencent::mm::sdk::openapi::WXMusicObject::checkArgs()
{
	return call_method<
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::openapi::WXMusicObject::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::openapi::WXMusicObject,"com/tencent/mm/sdk/openapi/WXMusicObject")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::WXMusicObject,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::WXMusicObject,1,"serialize","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::WXMusicObject,2,"unserialize","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::WXMusicObject,3,"type","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::WXMusicObject,4,"checkArgs","()Z")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::WXMusicObject,0,"musicUrl","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::WXMusicObject,1,"musicLowBandUrl","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_OPENAPI_WXMUSICOBJECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION