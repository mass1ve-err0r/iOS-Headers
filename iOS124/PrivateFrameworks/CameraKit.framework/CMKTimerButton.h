//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKExpandableMenuButton.h>

@class UIImageView;
@protocol CMKTimerButtonDelegate;

@interface CMKTimerButton : CMKExpandableMenuButton
{
    _Bool _hideOffWhenCollapsed;
    id <CMKTimerButtonDelegate> _delegate;
    UIImageView *__glyphView;
}

@property(readonly, nonatomic) UIImageView *_glyphView; // @synthesize _glyphView=__glyphView;
@property(nonatomic) _Bool hideOffWhenCollapsed; // @synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed;
@property(nonatomic) __weak id <CMKTimerButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)hiddenIndexesWhileCollapsed;
- (id)headerView;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (long long)numberOfMenuItems;
- (void)setDuration:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long duration;
- (id)initWithExpansionOrientation:(long long)arg1;
- (void)_commonCMKTimerButtonInitialization;

@end

