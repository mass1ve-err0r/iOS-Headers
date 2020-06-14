//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarDateTimeItemView : UIStatusBarItemView
{
    _Bool _useCustomFadeAnimation;
    NSString *_dateTimeString;
}

+ (const char *)_cStringFromData:(CDStruct_1916f467 *)arg1;
@property(copy, nonatomic) NSString *dateTimeString; // @synthesize dateTimeString=_dateTimeString;
@property(nonatomic) _Bool useCustomFadeAnimation; // @synthesize useCustomFadeAnimation=_useCustomFadeAnimation;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (double)extraRightPadding;
- (void)setFrame:(struct CGRect)arg1;
- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (long long)textStyle;
- (id)contentsImage;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (_Bool)shouldTintContentImage;

@end

