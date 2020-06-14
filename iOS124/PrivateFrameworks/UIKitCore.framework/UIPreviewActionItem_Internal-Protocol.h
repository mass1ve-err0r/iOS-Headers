//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, UIColor, UIImage;

@protocol UIPreviewActionItem_Internal <NSObject>
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property(nonatomic) long long style;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *title;
- (UIImage *)_effectiveImage;
- (UIColor *)_effectiveColor;
@end

