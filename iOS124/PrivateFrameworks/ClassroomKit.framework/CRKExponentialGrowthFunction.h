//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKGrowthFunction-Protocol.h>

@interface CRKExponentialGrowthFunction : NSObject <CRKGrowthFunction>
{
    double _growthRate;
}

@property(readonly, nonatomic) double growthRate; // @synthesize growthRate=_growthRate;
- (double)evaluateWithValue:(double)arg1;
- (id)initWithGrowthRate:(double)arg1;

@end

