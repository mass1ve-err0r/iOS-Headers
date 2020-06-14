//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class UIColor;

@interface PUPhotoDecoration : NSObject <NSCopying>
{
    UIColor *_borderColor;
    double _borderWidth;
    UIColor *_foregroundColor;
}

+ (id)defaultDecoration;
@property(copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (id)photoDecorationVariantsWithIncreasingBorderBrightness:(long long)arg1;
- (id)photoDecorationVariantsWithIncreasingAlpha:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

