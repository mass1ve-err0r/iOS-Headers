//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject
{
    FCChannelMembershipRecordSource *_recordSource;
}

@property(readonly, nonatomic) FCChannelMembershipRecordSource *recordSource; // @synthesize recordSource=_recordSource;
- (void).cxx_destruct;
- (id)cachedChannelMembershipsForIDs:(id)arg1;
- (id)channelMembershipsFromHeldRecords:(id)arg1;
- (void)fetchChannelMembershipsForIDs:(id)arg1 maximumCachedAge:(double)arg2 callbackQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithChannelMembershipRecordSource:(id)arg1;

@end

