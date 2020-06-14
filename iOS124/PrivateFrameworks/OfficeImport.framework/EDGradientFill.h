//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDFill.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EDGradientFill : EDFill
{
    int mType;
    NSMutableDictionary *mStops;
    double mDegree;
    struct CGRect mFocusRect;
}

+ (id)gradientWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect)arg3 stops:(id)arg4 resources:(id)arg5;
+ (id)gradientWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;
- (id)colorForStopAtPosition:(id)arg1;
- (struct CGRect)focusRect;
- (id)stops;
- (double)degree;
- (int)type;
- (_Bool)isEmpty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToGradientFill:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (id)initWithType:(int)arg1 degree:(double)arg2 focusRect:(struct CGRect)arg3 stops:(id)arg4 resources:(id)arg5;
- (id)initWithType:(int)arg1 degree:(double)arg2 top:(double)arg3 bottom:(double)arg4 right:(double)arg5 left:(double)arg6 stops:(id)arg7 resources:(id)arg8;
- (void)setStopColor:(id)arg1 atPosition:(id)arg2;
- (void)setStops:(id)arg1;
- (void)setFocusRect:(struct CGRect)arg1;
- (void)setDegree:(double)arg1;
- (void)setType:(int)arg1;

@end

