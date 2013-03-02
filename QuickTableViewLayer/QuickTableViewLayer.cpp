#include "QuickTableViewLayer.h"
#include "CCLuaEngine.h"
#include "CCScriptSupport.h"

USING_NS_CC;
USING_NS_CC_EXT;

QuickTableViewLayer::QuickTableViewLayer(void):
_tableView(NULL)
{
	_tableCellTouchedHandle = 0;
	_cellSizeForTableHandle = 0;
	_tableCellAtIndexHandle = 0;
	_numberOfCellsInTableViewHandle = 0;
	_scrollViewDidScrollHandle = 0;
	_scrollViewDidZoomHandle = 0;
	_tableViewPriorty = -100;
}


QuickTableViewLayer::~QuickTableViewLayer(void)
{
}

bool QuickTableViewLayer::init()
{
	bool bRet = false;
	do 
	{
		CC_BREAK_IF(!CCLayer::init());
		_tableView = CCTableView::create(this, this->getContentSize());
		CC_BREAK_IF(!_tableView);
		_tableView->setDirection(kCCScrollViewDirectionHorizontal);
		_tableView->setDelegate(this);
        
		this->addChild(_tableView);
		bRet = true;
	} while (0);

	return bRet;
}

void QuickTableViewLayer::setTableViewLayerSize(CCSize size)
{
	this->setContentSize(size);
	_tableView->setViewSize(size);
	//改变大小时，必须重新初始化内容偏移值
	if (_tableView->getDirection() == kCCScrollViewDirectionHorizontal)
	{
		_tableView->setContentOffset(ccp(0,0));
	}
	else
	{
		_tableView->setContentOffset(ccp(0,_tableView->minContainerOffset().y));
	}
	_tableView->updateInset();
}

void QuickTableViewLayer::setTableViewPriority(int priorty)
{
	_tableViewPriorty = priorty;
	this->setTouchMode(kCCTouchesOneByOne);
	this->setTouchEnabled(true);
	this->setTouchPriority(_tableViewPriorty);	
	_tableView->setTouchMode(kCCTouchesOneByOne);	
	_tableView->setTouchPriority(_tableViewPriorty);
}

void QuickTableViewLayer::tableCellTouched(CCTableView* table, CCTableViewCell* cell)
{
	if (kScriptTypeNone != m_eScriptType)
	{
		if (_tableCellTouchedHandle)
		{
//			CCLuaEngine * engine = static_cast<CCLuaEngine *>(CCScriptEngineManager::sharedManager()->getScriptEngine());
            CCLuaStack* stack = CCLuaEngine::defaultEngine()->getLuaStack();

			stack->pushCCObject(table, "CCTableView");
			stack->pushCCObject(cell, "CCTableViewCell");		
			stack->executeFunctionByHandler(_tableCellTouchedHandle, 2);
		}
	}
}

CCSize QuickTableViewLayer::cellSizeForTable(CCTableView *table)
{
	if (kScriptTypeNone != m_eScriptType)
	{
		if (_cellSizeForTableHandle)
		{
//			CCLuaEngine * engine = static_cast<CCLuaEngine *>(CCScriptEngineManager::sharedManager()->getScriptEngine());
            CCLuaStack* stack = CCLuaEngine::defaultEngine()->getLuaStack();

			stack->pushCCObject(table, "CCTableView");
            
            
			CCSize* size = (CCSize*)stack->executeFunctionByHandlerByRet(_cellSizeForTableHandle, 1);
			return *size;
		}
	}

	return CCSizeZero;
}

CCTableViewCell* QuickTableViewLayer::tableCellAtIndex(CCTableView *table, unsigned int idx)
{
	if (kScriptTypeNone != m_eScriptType)
	{
		if (_tableCellAtIndexHandle)
		{
//			CCLuaEngine * engine = static_cast<CCLuaEngine *>(CCScriptEngineManager::sharedManager()->getScriptEngine());
            CCLuaStack* stack = CCLuaEngine::defaultEngine()->getLuaStack();

			stack->pushCCObject(table, "CCTableView");
			stack->pushInt(idx);
			CCTableViewCell* cell = (CCTableViewCell*)stack->executeFunctionByHandlerByRet(_tableCellAtIndexHandle, 2);
			return cell;
		}
	}
	return NULL;
}

unsigned int QuickTableViewLayer::numberOfCellsInTableView(CCTableView *table)
{
	if (kScriptTypeNone != m_eScriptType)
	{
		if (_numberOfCellsInTableViewHandle)
		{
//			CCLuaEngine * engine = static_cast<CCLuaEngine *>(CCScriptEngineManager::sharedManager()->getScriptEngine());
            CCLuaStack* stack = CCLuaEngine::defaultEngine()->getLuaStack();

			stack->pushCCObject(table, "CCTableView");
			int num = stack->executeFunctionByHandler(_numberOfCellsInTableViewHandle, 1);
			num = num < 0 ? 0 :num;
			return num;
		}
	}

	return 0;
}

void QuickTableViewLayer::scrollViewDidScroll(CCScrollView* view)
{
	if (kScriptTypeNone != m_eScriptType)
	{
		if (_scrollViewDidScrollHandle)
		{
//			CCLuaEngine * engine = static_cast<CCLuaEngine *>(CCScriptEngineManager::sharedManager()->getScriptEngine());
            CCLuaStack* stack = CCLuaEngine::defaultEngine()->getLuaStack();
			stack->pushCCObject(view, "CCScrollView");
			stack->executeFunctionByHandler(_scrollViewDidScrollHandle, 1);
			return ;
		}
	}
}

void QuickTableViewLayer::scrollViewDidZoom(CCScrollView* view)
{
	if (kScriptTypeNone != m_eScriptType)
	{
		if (_scrollViewDidZoomHandle)
		{
//			CCLuaEngine * engine = static_cast<CCLuaEngine *>(CCScriptEngineManager::sharedManager()->getScriptEngine());
            CCLuaStack* stack = CCLuaEngine::defaultEngine()->getLuaStack();
			stack->pushCCObject(view, "CCScrollView");
			stack->executeFunctionByHandler(_scrollViewDidZoomHandle, 1);
			return ;
		}
	}
}