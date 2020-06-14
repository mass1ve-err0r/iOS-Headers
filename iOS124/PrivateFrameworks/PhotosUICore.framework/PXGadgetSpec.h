//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface PXGadgetSpec : NSObject
{
    _Bool _shouldInsetAllContent;
    _Bool _forceTouchCapabilityAvailable;
    long long _scrollDirection;
    double _interItemSpacing;
    long long _layoutSizeClass;
    long long _layoutOrientation;
    double _layoutReferenceWidth;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _accessoryViewInset;
}

+ (void)initialize;
@property(readonly, nonatomic) struct UIEdgeInsets accessoryViewInset; // @synthesize accessoryViewInset=_accessoryViewInset;
@property(readonly, nonatomic) _Bool forceTouchCapabilityAvailable; // @synthesize forceTouchCapabilityAvailable=_forceTouchCapabilityAvailable;
@property(readonly, nonatomic) double layoutReferenceWidth; // @synthesize layoutReferenceWidth=_layoutReferenceWidth;
@property(readonly, nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(readonly, nonatomic) long long layoutSizeClass; // @synthesize layoutSizeClass=_layoutSizeClass;
@property(readonly, nonatomic) double interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(readonly, nonatomic) _Bool shouldInsetAllContent; // @synthesize shouldInsetAllContent=_shouldInsetAllContent;
@property(readonly, nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (double)columnSpacingForColumnSpan:(long long)arg1;
- (double)columnWidthForColumnSpan:(long long)arg1;
- (_Bool)isEqualToGadgetSpec:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) UIImage *accessoryImage;
- (id)initWithTraitCollection:(id)arg1 scrollDirection:(long long)arg2;

@end

