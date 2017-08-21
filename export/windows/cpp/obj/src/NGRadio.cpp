// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_NGRadio
#include <NGRadio.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#include <flixel/system/debug/watch/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_watch_WatchEntryData
#include <flixel/system/debug/watch/WatchEntryData.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9b9f10e687519b17_11_new,"NGRadio","new",0x17ee17f4,"NGRadio.new","NGRadio.hx",11,0xe5b421fc)
HX_LOCAL_STACK_FRAME(_hx_pos_9b9f10e687519b17_15_create,"NGRadio","create",0xf0af13e8,"NGRadio.create","NGRadio.hx",15,0xe5b421fc)
HX_LOCAL_STACK_FRAME(_hx_pos_9b9f10e687519b17_29_update,"NGRadio","update",0xfba532f5,"NGRadio.update","NGRadio.hx",29,0xe5b421fc)

void NGRadio_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_9b9f10e687519b17_11_new)
HXDLIN(  11)		super::__construct(MaxSize);
            	}

Dynamic NGRadio_obj::__CreateEmpty() { return new NGRadio_obj; }

void *NGRadio_obj::_hx_vtable = 0;

Dynamic NGRadio_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NGRadio_obj > _hx_result = new NGRadio_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NGRadio_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x2335d9a7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2335d9a7;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x358f763a || inClassId==(int)0x3634c52c;
	}
}

void NGRadio_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_9b9f10e687519b17_15_create)
HXLINE(  18)		this->snd =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXLINE(  19)		this->snd->loadStream(HX_("http://radio-stream01.ungrounded.net/hiphop",52,e6,ae,98),false,false,null());
HXLINE(  21)		this->snd->play(null(),null(),null());
HXLINE(  25)		this->super::create();
            	}


void NGRadio_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9b9f10e687519b17_29_update)
HXLINE(  31)		{
HXLINE(  31)			 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this = ::flixel::FlxG_obj::watch;
HXDLIN(  31)			 ::flixel::_hx_system::debug::watch::Watch _hx_tmp = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  31)			_hx_tmp->add(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(this->snd,HX_("artist",c7,f2,48,b9)));
            		}
HXLINE(  32)		{
HXLINE(  32)			 ::flixel::_hx_system::frontEnds::WatchFrontEnd _this1 = ::flixel::FlxG_obj::watch;
HXDLIN(  32)			 ::flixel::_hx_system::debug::watch::Watch _hx_tmp1 = ::flixel::FlxG_obj::game->debugger->watch;
HXDLIN(  32)			_hx_tmp1->add(null(),::flixel::_hx_system::debug::watch::WatchEntryData_obj::FIELD(this->snd,HX_("name",4b,72,ff,48)));
            		}
HXLINE(  33)		this->super::update(elapsed);
            	}



hx::ObjectPtr< NGRadio_obj > NGRadio_obj::__new( ::Dynamic MaxSize) {
	hx::ObjectPtr< NGRadio_obj > __this = new NGRadio_obj();
	__this->__construct(MaxSize);
	return __this;
}

hx::ObjectPtr< NGRadio_obj > NGRadio_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	NGRadio_obj *__this = (NGRadio_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NGRadio_obj), true, "NGRadio"));
	*(void **)__this = NGRadio_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

NGRadio_obj::NGRadio_obj()
{
}

void NGRadio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NGRadio);
	HX_MARK_MEMBER_NAME(snd,"snd");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NGRadio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(snd,"snd");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val NGRadio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"snd") ) { return hx::Val( snd ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val NGRadio_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"snd") ) { snd=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NGRadio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("snd","\x69","\xa3","\x57","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo NGRadio_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::_hx_system::FlxSound*/ ,(int)offsetof(NGRadio_obj,snd),HX_HCSTRING("snd","\x69","\xa3","\x57","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *NGRadio_obj_sStaticStorageInfo = 0;
#endif

static ::String NGRadio_obj_sMemberFields[] = {
	HX_HCSTRING("snd","\x69","\xa3","\x57","\x00"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void NGRadio_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NGRadio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NGRadio_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NGRadio_obj::__mClass,"__mClass");
};

#endif

hx::Class NGRadio_obj::__mClass;

void NGRadio_obj::__register()
{
	hx::Object *dummy = new NGRadio_obj;
	NGRadio_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("NGRadio","\x02","\x4e","\x26","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NGRadio_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NGRadio_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NGRadio_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NGRadio_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NGRadio_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NGRadio_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
