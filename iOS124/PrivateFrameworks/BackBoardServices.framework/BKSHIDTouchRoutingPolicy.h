//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding>
{
    _Bool _avoidHitTesting;
    NSArray *_contextIDsToAlwaysSendTouches;
    NSArray *_contextIDsToExcludeFromHitTesting;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=shouldAvoidHitTesting) _Bool avoidHitTesting; // @synthesize avoidHitTesting=_avoidHitTesting;
@property(copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting; // @synthesize contextIDsToExcludeFromHitTesting=_contextIDsToExcludeFromHitTesting;
@property(copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches; // @synthesize contextIDsToAlwaysSendTouches=_contextIDsToAlwaysSendTouches;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

