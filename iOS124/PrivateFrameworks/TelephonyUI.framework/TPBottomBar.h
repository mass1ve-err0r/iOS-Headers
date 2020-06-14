//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface TPBottomBar : UIView
{
    long long _orientation;
    long long _style;
}

+ (long long)overlayStyle;
+ (long long)fullscreenStyle;
+ (double)defaultHeight;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1;
+ (double)defaultHeightForStyle:(long long)arg1 orientation:(long long)arg2;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 updateFrame:(_Bool)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDefaultSizeForOrientation:(long long)arg1;
- (id)initWithDefaultSize;

@end

