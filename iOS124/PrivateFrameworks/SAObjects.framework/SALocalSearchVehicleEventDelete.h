//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SALocalSearchVehicleEventDelete : SADomainCommand
{
}

+ (id)vehicleEventDeleteWithDictionary:(id)arg1 context:(id)arg2;
+ (id)vehicleEventDelete;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *eventIds;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

