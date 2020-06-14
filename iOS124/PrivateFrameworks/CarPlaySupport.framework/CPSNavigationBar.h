//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

#import <CarPlaySupport/CPSLinearFocusProviding-Protocol.h>

@class NSMapTable, NSString;

@interface CPSNavigationBar : UINavigationBar <CPSLinearFocusProviding>
{
    NSMapTable *_lastFocusedItems;
}

@property(retain, nonatomic) NSMapTable *lastFocusedItems; // @synthesize lastFocusedItems=_lastFocusedItems;
- (void).cxx_destruct;
- (id)_linearFocusItems;
- (id)preferredFocusEnvironments;
- (id)popNavigationItemAnimated:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

