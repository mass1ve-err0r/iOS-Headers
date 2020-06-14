//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SafariServices/UINavigationBarDelegate-Protocol.h>

@class NSString, UINavigationBar, UIToolbar;

__attribute__((visibility("hidden")))
@interface SFSafariLaunchPlaceholderView : UIView <UINavigationBarDelegate>
{
    UINavigationBar *_topNavigationBar;
    UIToolbar *_bottomToolbar;
    double _topLayoutGuideInset;
}

@property(nonatomic) double topLayoutGuideInset; // @synthesize topLayoutGuideInset=_topLayoutGuideInset;
- (void).cxx_destruct;
- (void)updateBarTintColor:(id)arg1;
- (long long)positionForBar:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

