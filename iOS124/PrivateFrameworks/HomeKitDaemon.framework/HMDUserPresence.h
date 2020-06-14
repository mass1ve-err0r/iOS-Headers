//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDUser, HMDUserPresenceRegion, NSDate;

@interface HMDUserPresence : HMFObject <NSSecureCoding>
{
    HMDUser *_user;
    HMDUserPresenceRegion *_presenceRegionStatus;
    NSDate *_updateTimestamp;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *updateTimestamp; // @synthesize updateTimestamp=_updateTimestamp;
@property(retain, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isNotAtHome) _Bool notAtHome;
@property(readonly, nonatomic, getter=isAtHome) _Bool atHome;
- (id)description;
- (id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2;

@end

