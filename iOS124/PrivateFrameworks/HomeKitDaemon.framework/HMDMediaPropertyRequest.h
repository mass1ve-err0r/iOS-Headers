//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaProfile, NSString;

@interface HMDMediaPropertyRequest : HMFObject
{
    NSString *_property;
    HMDMediaProfile *_mediaProfile;
    id _previousValue;
}

+ (id)deserializeReadRequests:(id)arg1 mediaProfile:(id)arg2;
+ (id)serializeReadRequests:(id)arg1;
+ (id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2;
@property(readonly, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(id)arg1 mediaProfile:(id)arg2;

@end

