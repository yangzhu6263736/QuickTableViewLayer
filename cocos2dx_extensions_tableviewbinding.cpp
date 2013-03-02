/*
** Lua binding: cocos2dx_extensions_luabinding
** Generated automatically by tolua++-1.0.92 on Thu Feb 28 19:10:39 2013.
*/
#include "cocos2dx_extensions_tableviewbinding.h"
#include "CCLuaEngine.h"

using namespace cocos2d;

#include "QuickTableViewLayer.h"
using namespace cocos2d::extension;

/* function to release collected object via destructor */
#ifdef __cplusplus

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"QuickTableViewLayer");
}

static int tolua_collect_QuickTableViewLayer (lua_State* tolua_S)
{
 QuickTableViewLayer* self = (QuickTableViewLayer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* method: new of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_new00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   QuickTableViewLayer* tolua_ret = (QuickTableViewLayer*)  Mtolua_new((QuickTableViewLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"QuickTableViewLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_new00_local
static int tolua_QuickTableViewLayer_QuickTableViewLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   QuickTableViewLayer* tolua_ret = (QuickTableViewLayer*)  Mtolua_new((QuickTableViewLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"QuickTableViewLayer");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_delete00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_init00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_create00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   QuickTableViewLayer* tolua_ret = (QuickTableViewLayer*)  QuickTableViewLayer::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"QuickTableViewLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTableView of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_getTableView00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_getTableView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const QuickTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const QuickTableViewLayer* self = (const QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTableView'", NULL);
#endif
  {
   CCTableView* tolua_ret = (CCTableView*)  self->getTableView();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCTableView");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTableView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTableViewPriority of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_setTableViewPriority00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_setTableViewPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
  int priorty = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTableViewPriority'", NULL);
#endif
  {
   self->setTableViewPriority(priorty);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTableViewPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTableViewLayerSize of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_setTableViewLayerSize00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_setTableViewLayerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTableViewLayerSize'", NULL);
#endif
  {
   self->setTableViewLayerSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTableViewLayerSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTableCellTouchedCallBack of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_setTableCellTouchedCallBack00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_setTableCellTouchedCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION tableCellTouchedHandle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTableCellTouchedCallBack'", NULL);
#endif
  {
   self->setTableCellTouchedCallBack(tableCellTouchedHandle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTableCellTouchedCallBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCellSizeForTableCallBack of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_setCellSizeForTableCallBack00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_setCellSizeForTableCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
    (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION cellSizeForTableHandle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCellSizeForTableCallBack'", NULL);
#endif
  {
   self->setCellSizeForTableCallBack(cellSizeForTableHandle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCellSizeForTableCallBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTableCellAtIndexCallBack of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_setTableCellAtIndexCallBack00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_setTableCellAtIndexCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION tableCellAtIndexHandle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTableCellAtIndexCallBack'", NULL);
#endif
  {
   self->setTableCellAtIndexCallBack(tableCellAtIndexHandle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTableCellAtIndexCallBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumberOfCellsInTableViewCallBack of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_setNumberOfCellsInTableViewCallBack00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_setNumberOfCellsInTableViewCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION numberOfCellsInTableViewHandle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumberOfCellsInTableViewCallBack'", NULL);
#endif
  {
   self->setNumberOfCellsInTableViewCallBack(numberOfCellsInTableViewHandle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumberOfCellsInTableViewCallBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScrollViewDidScrollCallBack of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_setScrollViewDidScrollCallBack00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_setScrollViewDidScrollCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION scrollViewDidScrollHandle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScrollViewDidScrollCallBack'", NULL);
#endif
  {
   self->setScrollViewDidScrollCallBack(scrollViewDidScrollHandle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScrollViewDidScrollCallBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScrollViewDidZoomCallBack of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_QuickTableViewLayer_QuickTableViewLayer_setScrollViewDidZoomCallBack00
static int tolua_QuickTableViewLayer_QuickTableViewLayer_setScrollViewDidZoomCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"QuickTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION scrollViewDidZoomHandle = (  toluafix_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScrollViewDidZoomCallBack'", NULL);
#endif
  {
   self->setScrollViewDidZoomCallBack(scrollViewDidZoomHandle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScrollViewDidZoomCallBack'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCTableViewDataSource__ of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_get_QuickTableViewLayer___CCTableViewDataSource__
static int tolua_get_QuickTableViewLayer___CCTableViewDataSource__(lua_State* tolua_S)
{
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCTableViewDataSource__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCTableViewDataSource*>(self), "CCTableViewDataSource");
#else
   tolua_pushusertype(tolua_S,(void*)((CCTableViewDataSource*)self), "CCTableViewDataSource");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCTableViewDelegate__ of class  QuickTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_get_QuickTableViewLayer___CCTableViewDelegate__
static int tolua_get_QuickTableViewLayer___CCTableViewDelegate__(lua_State* tolua_S)
{
  QuickTableViewLayer* self = (QuickTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCTableViewDelegate__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCTableViewDelegate*>(self), "CCTableViewDelegate");
#else
   tolua_pushusertype(tolua_S,(void*)((CCTableViewDelegate*)self), "CCTableViewDelegate");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE


/* Open function */
TOLUA_API int tolua_cocos2dx_extensions_tableviewbinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 #ifdef __cplusplus
   tolua_cclass(tolua_S,"QuickTableViewLayer","QuickTableViewLayer","CCLayer",tolua_collect_QuickTableViewLayer);
   #else
   tolua_cclass(tolua_S,"QuickTableViewLayer","QuickTableViewLayer","CCLayer",NULL);
   #endif
   tolua_beginmodule(tolua_S,"QuickTableViewLayer");
    tolua_function(tolua_S,"new",tolua_QuickTableViewLayer_QuickTableViewLayer_new00);
    tolua_function(tolua_S,"new_local",tolua_QuickTableViewLayer_QuickTableViewLayer_new00_local);
    tolua_function(tolua_S,".call",tolua_QuickTableViewLayer_QuickTableViewLayer_new00_local);
    tolua_function(tolua_S,"delete",tolua_QuickTableViewLayer_QuickTableViewLayer_delete00);
    tolua_function(tolua_S,"init",tolua_QuickTableViewLayer_QuickTableViewLayer_init00);
    tolua_function(tolua_S,"create",tolua_QuickTableViewLayer_QuickTableViewLayer_create00);
    tolua_function(tolua_S,"setTableViewPriority",tolua_QuickTableViewLayer_QuickTableViewLayer_setTableViewPriority00);
    tolua_function(tolua_S,"getTableView",tolua_QuickTableViewLayer_QuickTableViewLayer_getTableView00);
    tolua_function(tolua_S,"setTableViewLayerSize",tolua_QuickTableViewLayer_QuickTableViewLayer_setTableViewLayerSize00);
    tolua_function(tolua_S,"setTableCellTouchedCallBack",tolua_QuickTableViewLayer_QuickTableViewLayer_setTableCellTouchedCallBack00);
    tolua_function(tolua_S,"setCellSizeForTableCallBack",tolua_QuickTableViewLayer_QuickTableViewLayer_setCellSizeForTableCallBack00);
    tolua_function(tolua_S,"setTableCellAtIndexCallBack",tolua_QuickTableViewLayer_QuickTableViewLayer_setTableCellAtIndexCallBack00);
    tolua_function(tolua_S,"setNumberOfCellsInTableViewCallBack",tolua_QuickTableViewLayer_QuickTableViewLayer_setNumberOfCellsInTableViewCallBack00);
    tolua_function(tolua_S,"setScrollViewDidScrollCallBack",tolua_QuickTableViewLayer_QuickTableViewLayer_setScrollViewDidScrollCallBack00);
    tolua_function(tolua_S,"setScrollViewDidZoomCallBack",tolua_QuickTableViewLayer_QuickTableViewLayer_setScrollViewDidZoomCallBack00);
    tolua_variable(tolua_S,"__CCTableViewDataSource__",tolua_get_QuickTableViewLayer___CCTableViewDataSource__,NULL);
    tolua_variable(tolua_S,"__CCTableViewDelegate__",tolua_get_QuickTableViewLayer___CCTableViewDelegate__,NULL);
 tolua_endmodule(tolua_S);
 return 1;
}

#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_cocos2dx_extensions_tableviewbinding (lua_State* tolua_S) {
 return tolua_cocos2dx_extensions_tableviewbinding_open(tolua_S);
};
#endif