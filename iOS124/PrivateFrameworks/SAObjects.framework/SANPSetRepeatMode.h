//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString;

@interface SANPSetRepeatMode : SADomainCommand
{
}

+ (id)setRepeatModeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setRepeatMode;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *repeatMode;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

