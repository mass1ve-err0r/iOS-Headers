//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SANPGetNowPlayingQueueDetails;

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand
{
}

+ (id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNowPlayingQueueDetailsRemote;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(nonatomic) double routeTimeout;
@property(retain, nonatomic) SANPGetNowPlayingQueueDetails *queueDetails;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

