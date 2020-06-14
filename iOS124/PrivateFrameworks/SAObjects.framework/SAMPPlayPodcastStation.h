//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPPodcastStation;

@interface SAMPPlayPodcastStation : SADomainCommand
{
}

+ (id)playPodcastStationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)playPodcastStation;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPPodcastStation *station;
@property(nonatomic) _Bool startPlaying;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

