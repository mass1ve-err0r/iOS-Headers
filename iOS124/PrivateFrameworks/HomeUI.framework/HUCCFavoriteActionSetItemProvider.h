//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

#import <HomeUI/HUCCFavoriteItemProvider-Protocol.h>

@class HMHome, NSMutableSet, NSString;

@interface HUCCFavoriteActionSetItemProvider : HFItemProvider <HUCCFavoriteItemProvider>
{
    unsigned long long _maximumNumberOfItems;
    HMHome *_home;
    unsigned long long _actionSetItemStyle;
    NSMutableSet *_actionSetItems;
}

@property(retain, nonatomic) NSMutableSet *actionSetItems; // @synthesize actionSetItems=_actionSetItems;
@property(readonly, nonatomic) unsigned long long actionSetItemStyle; // @synthesize actionSetItemStyle=_actionSetItemStyle;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned long long maximumNumberOfItems; // @synthesize maximumNumberOfItems=_maximumNumberOfItems;
- (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

