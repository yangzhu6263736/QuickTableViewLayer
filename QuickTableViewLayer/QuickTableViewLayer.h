#pragma once
#include "cocos2d.h"
#include "cocos-ext.h"

class QuickTableViewLayer : public cocos2d::CCLayer, public cocos2d::extension::CCTableViewDataSource, public cocos2d::extension::CCTableViewDelegate
{
public:
	QuickTableViewLayer(void);
	~QuickTableViewLayer(void);

	virtual bool init();  

	CREATE_FUNC(QuickTableViewLayer);

	virtual void scrollViewDidScroll(cocos2d::extension::CCScrollView* view) ;
	virtual void scrollViewDidZoom(cocos2d::extension::CCScrollView* view);
	virtual void tableCellTouched(cocos2d::extension::CCTableView* table, cocos2d::extension::CCTableViewCell* cell);
	virtual cocos2d::CCSize cellSizeForTable(cocos2d::extension::CCTableView *table);
	virtual cocos2d::extension::CCTableViewCell* tableCellAtIndex(cocos2d::extension::CCTableView *table, unsigned int idx);
	virtual unsigned int numberOfCellsInTableView(cocos2d::extension::CCTableView *table);
	
	void setTableViewPriority(int priorty);
	int getTableViewPriority(){return _tableViewPriorty;}
	cocos2d::extension::CCTableView* getTableView() const{return _tableView;};
	void setTableViewLayerSize(cocos2d::CCSize size);
	void setTableCellTouchedCallBack(int tableCellTouchedHandle){_tableCellTouchedHandle=tableCellTouchedHandle;};
	void setCellSizeForTableCallBack(int cellSizeForTableHandle){_cellSizeForTableHandle=cellSizeForTableHandle;};
	void setTableCellAtIndexCallBack(int tableCellAtIndexHandle){_tableCellAtIndexHandle=tableCellAtIndexHandle;};
	void setNumberOfCellsInTableViewCallBack(int numberOfCellsInTableViewHandle){_numberOfCellsInTableViewHandle=numberOfCellsInTableViewHandle;};
	void setScrollViewDidScrollCallBack(int scrollViewDidScrollHandle){_scrollViewDidScrollHandle=scrollViewDidScrollHandle;};
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