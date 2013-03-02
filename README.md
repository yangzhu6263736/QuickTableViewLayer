##说明
这个类是一个朋友的朋友写的,版权是他的，俺问清楚了名字加进去，是针对cococs2d-x 2.0版本的 因为2.1的luabinding接口有变动所以我做了一些修正<br/>
这里使用是针对quick-cocos2d-x的，我c++水平有限，等廖大后面看了再弄到quick主线里

<br/>

##使用方法

<br />

1:将所有文件拷贝到quick-cocos2d-x/lib/cocos2dx_extensions_luabinding目录下

<br />

2:在项目中引入上述所有文件

<br />

3:在AppDelegate.cpp中添加
<br />

	#include "cocos2dx_extensions_tableviewbinding.h"

<br />

4:在bool AppDelegate::applicationDidFinishLaunching()方法中添加
<br />

	luaopen_cocos2dx_extensions_tableviewbinding(L);

<br />

5:在CCLuaStack.h中添加
<br />

    virtual void* executeFunctionByRet(int numArgs);
    virtual void* executeFunctionByHandlerByRet(int nHandler, int numArgs);

<br />

6:在CCLuaStack.cpp中添加对应方法

<br />

void* CCLuaStack::executeFunctionByRet(int numArgs)
{
    int functionIndex = -(numArgs + 1);
    if (!lua_isfunction(m_state, functionIndex))
    {
        CCLOG("value at stack [%d] is not function", functionIndex);
        return 0;
    }
    
    int traceback = 0;
    lua_getglobal(m_state, "__G__TRACKBACK__");                         /* L: ... func arg1 arg2 ... G */
    if (!lua_isfunction(m_state, -1))
    {
        lua_pop(m_state, 1);                                            /* L: ... func arg1 arg2 ... */
    }
    else
    {
        lua_insert(m_state, functionIndex - 1);                         /* L: ... G func arg1 arg2 ... */
        traceback = functionIndex - 1;
    }
    
    int error = 0;
    ++m_callFromLua;
    error = lua_pcall(m_state, numArgs, 1, traceback);                  /* L: ... ret */
    --m_callFromLua;
    if (error)
    {
        if (traceback == 0)
        {
            CCLOG("[LUA ERROR] %s", lua_tostring(m_state, - 1));        /* L: ... error */
            lua_pop(m_state, 1); // remove error message from stack
        }
        return 0;
    }
    
    // get return value
    // get return value
    void* ret = NULL;
    if (lua_isuserdata(m_state, -1))
    {
        ret = *((void**)lua_touserdata(m_state, -1));
    }
    
    lua_pop(m_state, 1); // remove return value from stack
    return ret;
}


<br />


void* CCLuaStack::executeFunctionByRet(int numArgs)
{
    int functionIndex = -(numArgs + 1);
    if (!lua_isfunction(m_state, functionIndex))
    {
        CCLOG("value at stack [%d] is not function", functionIndex);
        return 0;
    }
    
    int traceback = 0;
    lua_getglobal(m_state, "__G__TRACKBACK__");                         /* L: ... func arg1 arg2 ... G */
    if (!lua_isfunction(m_state, -1))
    {
        lua_pop(m_state, 1);                                            /* L: ... func arg1 arg2 ... */
    }
    else
    {
        lua_insert(m_state, functionIndex - 1);                         /* L: ... G func arg1 arg2 ... */
        traceback = functionIndex - 1;
    }
    
    int error = 0;
    ++m_callFromLua;
    error = lua_pcall(m_state, numArgs, 1, traceback);                  /* L: ... ret */
    --m_callFromLua;
    if (error)
    {
        if (traceback == 0)
        {
            CCLOG("[LUA ERROR] %s", lua_tostring(m_state, - 1));        /* L: ... error */
            lua_pop(m_state, 1); // remove error message from stack
        }
        return 0;
    }
    
    // get return value
    // get return value
    void* ret = NULL;
    if (lua_isuserdata(m_state, -1))
    {
        ret = *((void**)lua_touserdata(m_state, -1));
    }
    
    lua_pop(m_state, 1); // remove return value from stack
    return ret;
}


<br />

7:编译并运行
	
<br />

8:lua中使用方法




function tableCellTouchedCallBack(tableview,cell)
    local index = cell:getIdx();
	CCLuaLog("=============tableCellTouchedCallBack"..index)
	
end

<br />

--[[
函  数: cellSizeForTableCallBack
功  能: 该函数在初始化tableview时被调用，目的是用于绘制每个cell的大小
参  数: @tableview CCTableView table	指定的tableview
返回值: CCSize							表示返回每个单元格的size
--]]

<br />

function cellSizeForTableCallBack(tableview)
	CCLuaLog("=============cellSizeForTableCallBack")
    --return 100;
	return CCSizeMake(100,100)
end

<br />

--[[
函  数: tableCellAtIndexCallBack
功  能: 该函数在初始化显示tableview时被调用，目的是返回在该索引下的cell内容，传出参数为
参  数: @tableview CCTableView table	指定的tableview
		@index unsigned int				表示当前需要显示的cell索引
返回值: CCTableViewCell					当前需要显示的cell内容
--]]

<br />

function tableCellAtIndexCallBack(tableview, index)
	CCLuaLog("=============tableCellAtIndexCallBack")
	--local cell = tableview:dequeueCell()
    cell = createCell(tableview, index)		
	return cell
end

-- 新建cell数据

<br />

function createCell(tableview, index)
	CCLuaLog("=============createCell")

	local szIndex = "test_string" 
	szIndex = string.format("test_string%d",index)	--测试数据
	local labelTextOffsetY = 20
	local cell = CCTableViewCell:new()

	-- 添加文本框
	--[[local labelText = CCLabelTTF:create(szIndex, default_font_name, 12);
	labelText:setPosition(ccp(0, labelTextOffsetY+tableview_cell_button_size.height));
	labelText:setAnchorPoint(ccp(0, 0));
	labelText:setDimensions(CCSizeMake(100,00))
	labelText:setHorizontalAlignment(kCCTextAlignmentCenter)
	cell:addChild(labelText,1,1);]]--
    
    local test = require("views.TestSpr").new()
    test:setPosition(ccp(50,50))
	cell:addChild(test);
	-- 添加扫荡按钮
	return cell
end

<br />

--[[
函  数: numberOfCellsInTableViewCallBack
功  能: 该函数在初始化显示tableview时被调用，目的是返回在该索引下的cell内容
参  数: @tableview CCTableView table	指定的tableview
返回值: unsigned int			tableview要显示的cell个数
--]]

<br />

function numberOfCellsInTableViewCallBack(tableview)	
	CCLuaLog("=============numberOfCellsInTableViewCallBack")
	return 100
end

<br />

local function onTouch(eventType, x, y)
    CCLuaLog("cctableview onTouch");
end

<br />

	CCLuaLog("=============xxxx")
	local tableview = FYTableViewLayer:create()
	tableview:setTableViewPriority(-130)
	tableview:setTableCellTouchedCallBack(tableCellTouchedCallBack)
	tableview:setCellSizeForTableCallBack(cellSizeForTableCallBack)
	tableview:setTableCellAtIndexCallBack(tableCellAtIndexCallBack)
	tableview:setNumberOfCellsInTableViewCallBack(numberOfCellsInTableViewCallBack)
    tableview:setTableViewLayerSize(CCSizeMake(500,500));
    tableview:registerScriptTouchHandler(onTouch, false)
    --tableview:
    self:addChild(tableview)
    cctv = tableview:getTableView()
   	cctv:setDirection(1)
	cctv:setVerticalFillOrder(0)
	cctv:reloadData()
    --tableview:setIsTouchEnabled(true)  
end

