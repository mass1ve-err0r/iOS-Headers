//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDVideoResolution, NSNumber;

@interface HMDCameraVideoTier : HMFObject <NSSecureCoding>
{
    HMDVideoResolution *_videoResolution;
    NSNumber *_maxBitRate;
    NSNumber *_minBitRate;
    NSNumber *_rtcpInterval;
    NSNumber *_framerate;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, nonatomic) NSNumber *minBitRate; // @synthesize minBitRate=_minBitRate;
@property(readonly, nonatomic) NSNumber *maxBitRate; // @synthesize maxBitRate=_maxBitRate;
@property(readonly, nonatomic) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithVideoResolution:(id)arg1 framerate:(id)arg2 minBitRate:(id)arg3 maxBitRate:(id)arg4 rtcpInterval:(id)arg5;

@end

