//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UIColor;

@interface UIInterfaceActionHighlightAttributes : NSObject <NSCopying>
{
    double _opacity;
    NSArray *_filters;
    UIColor *_backgroundColor;
}

@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (_Bool)_hasNonClearBackgroundColor;
- (id)newBackgroundHighlightView;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

