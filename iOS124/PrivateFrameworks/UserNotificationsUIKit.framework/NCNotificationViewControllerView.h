//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/PLContentSizeManaging-Protocol.h>

@class NSArray, NSString, PLPlatterView;

@interface NCNotificationViewControllerView : UIView <PLContentSizeManaging>
{
    NSArray *_stackedPlatters;
    PLPlatterView *_contentView;
    unsigned long long _coalescedNotificationCount;
}

@property(nonatomic) unsigned long long coalescedNotificationCount; // @synthesize coalescedNotificationCount=_coalescedNotificationCount;
@property(nonatomic) __weak PLPlatterView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (_Bool)_isCoalescedNotificationBundle;
- (void)_layoutStackedPlatters;
- (void)_configureStackedPlatters;
- (unsigned long long)_stackedPlatterCount;
- (unsigned long long)_stackedPlatterCountCoalescedNotificationCount:(unsigned long long)arg1;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

