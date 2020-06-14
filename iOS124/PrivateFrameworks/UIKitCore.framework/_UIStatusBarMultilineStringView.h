//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIStatusBarDisplayable-Protocol.h>

@class NSArray, NSString, UIAccessibilityHUDItem, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarMultilineStringView : UIView <_UIStatusBarDisplayable>
{
    long long _numberOfLines;
    UIStackView *_stackView;
}

@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
- (void).cxx_destruct;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)applyStyleAttributes:(id)arg1;
@property(readonly, nonatomic) NSArray *stringViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsCrossfade;

@end

