//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SANPRemoveOutputDevicesFromGroup : SABaseClientBoundCommand
{
}

+ (id)removeOutputDevicesFromGroupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)removeOutputDevicesFromGroup;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
@property(copy, nonatomic) NSString *groupID;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

