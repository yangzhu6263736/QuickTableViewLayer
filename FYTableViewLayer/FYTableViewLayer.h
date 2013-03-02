#pragma once
#include "cocos2d.h"
#include "cocos-ext.h"

class FYTableViewLayer : public cocos2d::CCLayer, public cocos2d::extension::CCTableViewDataSource, public cocos2d::extension::CCTableViewDelegate
{
public:
	FYTableViewLayer(void);
	~FYTableViewLayer(void);

	virtual bool init();  

	CREATE_FUNC(FYTableViewLayer);

	virtual void scrollViewDidScroll(cocos2d::extension::CCScrollView* view) ;
	virtual void scrollViewDidZoom(cocos2d::extension::CCScrollView* view);
	virtual void tableCellTouched(cocos2d::extension::CCTableView* table, cocos2d::extension::CCTableViewCell* cell);
	virtual cocos2d::CCSize cellSizeForTable(cocos2d::extension::CCTableView *table);
	virtual cocos2d::extension::CCTableViewCell* tableCellAtIndex(cocos2d::extension::CCTableView *table, unsigned int idx);
	virtual unsigned int numberOfCellsInTableView(cocos2d::extension::CCTableView *table);
	
	// 功  能：设置tableview的touche优先级
	// 参  数：int 优先级
	// 返回值：无
	void setTableViewPriority(int priorty);
	int getTableViewPriority(){return _tableViewPriorty;}

	// 功  能：获取该层中的tableview
	// 参  数：无
	// 返回值：CCTableView 层中的tableview
	cocos2d::extension::CCTableView* getTableView() const{return _tableView;};

	// 设置tableview的大小
	void setTableViewLayerSize(cocos2d::CCSize size);

	// 设置LUA回调函数
	// 功  能：该函数在点击cell时被调用，传出参数为
	// 参  数：@param1 CCTableView table	指定的tableview
	//		   @param2 CCTableViewCell cell 指定tableview下的cell单元格被点击
	// 返回值：无
	void setTableCellTouchedCallBack(int tableCellTouchedHandle){_tableCellTouchedHandle=tableCellTouchedHandle;};

	// 必须设置
	// 功  能：该函数在初始化tableview时被调用，目的是用于绘制每个cell的大小，传出参数为
	// 参  数：@param1 CCTableView table	指定的tableview	
	// 返回值：CCSize					表示返回每个单元格的size
	void setCellSizeForTableCallBack(int cellSizeForTableHandle){_cellSizeForTableHandle=cellSizeForTableHandle;};

	// 必须设置
	// 功  能：该函数在初始化显示tableview时被调用，目的是返回在该索引下的cell内容，传出参数为
	// 参  数：@param1 CCTableView table	指定的tableview
	//		   @param2 unsigned int			表示当前需要显示的cell索引
	// 返回值：CCTableViewCell		当前需要显示的cell内容
	void setTableCellAtIndexCallBack(int tableCellAtIndexHandle){_tableCellAtIndexHandle=tableCellAtIndexHandle;};

	// 必须设置
	// 功  能：该函数在初始化显示tableview时被调用，目的是返回整个tableview一共有多少cell，传出参数为
	// 参  数：@param1 CCTableView table	指定的tableview
	// 返回值 unsigned int			tableview要显示的cell个数
	void setNumberOfCellsInTableViewCallBack(int numberOfCellsInTableViewHandle){_numberOfCellsInTableViewHandle=numberOfCellsInTableViewHandle;};

	// 功  能：该函数在滚动tableview时被调用，传出参数为
	// 参  数：@param1 CCScrollView 		指定的滚动窗口，即tableview
	// 返回值：无
	// 通常不处理
	void setScrollViewDidScrollCallBack(int scrollViewDidScrollHandle){_scrollViewDidScrollHandle=scrollViewDidScrollHandle;};

	// 函  数：该函数在放大tableview时被调用，传出参数为
	// 参  数：@param1 CCScrollView 		指定的滚动窗口，即tableview
	// 返回值：无
	// 通常不处理
	void setScrollViewDidZoomCallBack(int scrollViewDidZoomHandle){_scrollViewDidZoomHandle=scrollViewDidZoomHandle;};


public:
	cocos2d::extension::CCTableView* _tableView;
	int _tableCellTouchedHandle;
	int _cellSizeForTableHandle;
	int _tableCellAtIndexHandle;
	int _numberOfCellsInTableViewHandle;
	int _scrollViewDidScrollHandle;
	int _scrollViewDidZoomHandle;
	int _tableViewPriorty;
};