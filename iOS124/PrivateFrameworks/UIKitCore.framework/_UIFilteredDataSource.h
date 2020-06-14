//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSString;
@protocol UITableViewDataSource;

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource>
{
    _Bool _limitingWithSections;
    long long _maxVisibleSection;
    long long _numberOfVisibleItemsInLastSection;
    long long _filterType;
    id <UITableViewDataSource> _tableDataSource;
}

@property(nonatomic) id <UITableViewDataSource> tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

