//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/NSObject-Protocol.h>

@class NSAttributedString, UIViewController;
@protocol HRFeatureRegulatoryPanelDisplayUpdateDelegate;

@protocol HRFeatureRegulatoryPanelDisplayable <NSObject>
@property(readonly, nonatomic) long long cellAccessoryType;
@property(readonly, nonatomic) _Bool isInteractive;
@property(readonly, copy, nonatomic) NSAttributedString *valueString;
@property(readonly, copy, nonatomic) NSAttributedString *titleString;

@optional
@property(nonatomic) __weak id <HRFeatureRegulatoryPanelDisplayUpdateDelegate> updateDelegate;
- (void)handleUserInteractionWithItemWithHostViewController:(UIViewController *)arg1;
@end

