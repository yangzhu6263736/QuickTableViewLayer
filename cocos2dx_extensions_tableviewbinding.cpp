/*
** Lua binding: cocos2dx_extensions_luabinding
** Generated automatically by tolua++-1.0.92 on Thu Feb 28 19:10:39 2013.
*/
#include "cocos2dx_extensions_tableviewbinding.h"
#include "CCLuaEngine.h"

using namespace cocos2d;

#include "FYTableViewLayer.h"
using namespace cocos2d::extension;

/* function to release collected object via destructor */
#ifdef __cplusplus

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"FYTableViewLayer");
}

static int tolua_collect_FYTableViewLayer (lua_State* tolua_S)
{
 FYTableViewLayer* self = (FYTableViewLayer*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* method: new of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_new00
static int tolua_FYTableViewLayer_FYTableViewLayer_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   FYTableViewLayer* tolua_ret = (FYTableViewLayer*)  Mtolua_new((FYTableViewLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"FYTableViewLayer");
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

/* method: new_local of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_new00_local
static int tolua_FYTableViewLayer_FYTableViewLayer_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   FYTableViewLayer* tolua_ret = (FYTableViewLayer*)  Mtolua_new((FYTableViewLayer)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"FYTableViewLayer");
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

/* method: delete of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_delete00
static int tolua_FYTableViewLayer_FYTableViewLayer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_init00
static int tolua_FYTableViewLayer_FYTableViewLayer_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_create00
static int tolua_FYTableViewLayer_FYTableViewLayer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   FYTableViewLayer* tolua_ret = (FYTableViewLayer*)  FYTableViewLayer::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"FYTableViewLayer");
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

/* method: getTableView of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_getTableView00
static int tolua_FYTableViewLayer_FYTableViewLayer_getTableView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const FYTableViewLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const FYTableViewLayer* self = (const FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setTableViewPriority of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_setTableViewPriority00
static int tolua_FYTableViewLayer_FYTableViewLayer_setTableViewPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setTableViewLayerSize of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_setTableViewLayerSize00
static int tolua_FYTableViewLayer_FYTableViewLayer_setTableViewLayerSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setTableCellTouchedCallBack of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_setTableCellTouchedCallBack00
static int tolua_FYTableViewLayer_FYTableViewLayer_setTableCellTouchedCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setCellSizeForTableCallBack of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_setCellSizeForTableCallBack00
static int tolua_FYTableViewLayer_FYTableViewLayer_setCellSizeForTableCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
    (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setTableCellAtIndexCallBack of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_setTableCellAtIndexCallBack00
static int tolua_FYTableViewLayer_FYTableViewLayer_setTableCellAtIndexCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setNumberOfCellsInTableViewCallBack of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_setNumberOfCellsInTableViewCallBack00
static int tolua_FYTableViewLayer_FYTableViewLayer_setNumberOfCellsInTableViewCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setScrollViewDidScrollCallBack of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_setScrollViewDidScrollCallBack00
static int tolua_FYTableViewLayer_FYTableViewLayer_setScrollViewDidScrollCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setScrollViewDidZoomCallBack of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_FYTableViewLayer_FYTableViewLayer_setScrollViewDidZoomCallBack00
static int tolua_FYTableViewLayer_FYTableViewLayer_setScrollViewDidZoomCallBack00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FYTableViewLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION" ,0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: __CCTableViewDataSource__ of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_get_FYTableViewLayer___CCTableViewDataSource__
static int tolua_get_FYTableViewLayer___CCTableViewDataSource__(lua_State* tolua_S)
{
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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

/* get function: __CCTableViewDelegate__ of class  FYTableViewLayer */
#ifndef TOLUA_DISABLE_tolua_get_FYTableViewLayer___CCTableViewDelegate__
static int tolua_get_FYTableViewLayer___CCTableViewDelegate__(lua_State* tolua_S)
{
  FYTableViewLayer* self = (FYTableViewLayer*)  tolua_tousertype(tolua_S,1,0);
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
   tolua_cclass(tolua_S,"FYTableViewLayer","FYTableViewLayer","CCLayer",tolua_collect_FYTableViewLayer);
   #else
   tolua_cclass(tolua_S,"FYTableViewLayer","FYTableViewLayer","CCLayer",NULL);
   #endif
   tolua_beginmodule(tolua_S,"FYTableViewLayer");
    tolua_function(tolua_S,"new",tolua_FYTableViewLayer_FYTableViewLayer_new00);
    tolua_function(tolua_S,"new_local",tolua_FYTableViewLayer_FYTableViewLayer_new00_local);
    tolua_function(tolua_S,".call",tolua_FYTableViewLayer_FYTableViewLayer_new00_local);
    tolua_function(tolua_S,"delete",tolua_FYTableViewLayer_FYTableViewLayer_delete00);
    tolua_function(tolua_S,"init",tolua_FYTableViewLayer_FYTableViewLayer_init00);
    tolua_function(tolua_S,"create",tolua_FYTableViewLayer_FYTableViewLayer_create00);
    tolua_function(tolua_S,"setTableViewPriority",tolua_FYTableViewLayer_FYTableViewLayer_setTableViewPriority00);
    tolua_function(tolua_S,"getTableView",tolua_FYTableViewLayer_FYTableViewLayer_getTableView00);
    tolua_function(tolua_S,"setTableViewLayerSize",tolua_FYTableViewLayer_FYTableViewLayer_setTableViewLayerSize00);
    tolua_function(tolua_S,"setTableCellTouchedCallBack",tolua_FYTableViewLayer_FYTableViewLayer_setTableCellTouchedCallBack00);
    tolua_function(tolua_S,"setCellSizeForTableCallBack",tolua_FYTableViewLayer_FYTableViewLayer_setCellSizeForTableCallBack00);
    tolua_function(tolua_S,"setTableCellAtIndexCallBack",tolua_FYTableViewLayer_FYTableViewLayer_setTableCellAtIndexCallBack00);
    tolua_function(tolua_S,"setNumberOfCellsInTableViewCallBack",tolua_FYTableViewLayer_FYTableViewLayer_setNumberOfCellsInTableViewCallBack00);
    tolua_function(tolua_S,"setScrollViewDidScrollCallBack",tolua_FYTableViewLayer_FYTableViewLayer_setScrollViewDidScrollCallBack00);
    tolua_function(tolua_S,"setScrollViewDidZoomCallBack",tolua_FYTableViewLayer_FYTableViewLayer_setScrollViewDidZoomCallBack00);
    tolua_variable(tolua_S,"__CCTableViewDataSource__",tolua_get_FYTableViewLayer___CCTableViewDataSource__,NULL);
    tolua_variable(tolua_S,"__CCTableViewDelegate__",tolua_get_FYTableViewLayer___CCTableViewDelegate__,NULL);
 tolua_endmodule(tolua_S);
 return 1;
}

#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_cocos2dx_extensions_tableviewbinding (lua_State* tolua_S) {
 return tolua_cocos2dx_extensions_tableviewbinding_open(tolua_S);
};
#endif