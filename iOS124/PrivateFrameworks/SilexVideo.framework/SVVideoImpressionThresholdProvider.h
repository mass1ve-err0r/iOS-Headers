//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoImpressionThresholdProviding-Protocol.h>

@class NSString;

@interface SVVideoImpressionThresholdProvider : NSObject <SVVideoImpressionThresholdProviding>
{
    double _impressionThreshold;
}

@property(readonly, nonatomic) double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
- (id)initWithImpressionThreshold:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

