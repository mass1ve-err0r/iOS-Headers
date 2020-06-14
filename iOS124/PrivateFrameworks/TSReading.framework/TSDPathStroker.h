//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUColor;

@interface TSDPathStroker : NSObject
{
    TSUColor *mColor;
    double mWidth;
    TSDPathStroker *mPrecedingStroker;
}

@property(nonatomic) double width; // @synthesize width=mWidth;
- (void)strokePath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2 inColor:(id)arg3;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void *)arg3 precedingStroker:(id)arg4;

@end

