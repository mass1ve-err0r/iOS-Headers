//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUControlPanelConfiguration-Protocol.h>

@class NSString;
@protocol HUControlPanelRule;

@interface HUMultiStateControlPanelConfiguration : NSObject <HUControlPanelConfiguration>
{
}

- (void)setupControlsForCell:(id)arg1 item:(id)arg2;
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) id <HUControlPanelRule> rule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

