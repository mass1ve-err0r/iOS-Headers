//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASyncGetCachedSyncAnchors : SABaseClientBoundCommand
{
}

+ (id)getCachedSyncAnchorsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getCachedSyncAnchors;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *interactionId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

