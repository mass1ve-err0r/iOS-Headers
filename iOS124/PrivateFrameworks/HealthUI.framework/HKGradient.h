//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSArray, UIColor;

@interface HKGradient : NSObject <NSCopying>
{
    NSArray *_colors;
    NSArray *_locations;
}

+ (id)defaultGradient;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToHKGradient:(id)arg1;
@property(readonly, nonatomic) UIColor *bottomColor;
@property(readonly, nonatomic) UIColor *topColor;
- (id)initWithTopColor:(id)arg1 bottomColor:(id)arg2;
- (id)initWithColors:(id)arg1 locations:(id)arg2;

@end

