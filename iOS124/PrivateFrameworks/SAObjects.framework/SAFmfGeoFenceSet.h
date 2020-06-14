//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber, NSString, SALocation, SAPerson;

@interface SAFmfGeoFenceSet : SADomainCommand
{
}

+ (id)geoFenceSetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geoFenceSet;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SALocation *requestedLocation;
@property(copy, nonatomic) NSNumber *oneTimeOnly;
@property(copy, nonatomic) NSString *geoFenceTrigger;
@property(retain, nonatomic) SAPerson *friend;
@property(copy, nonatomic) NSString *fenceType;
@property(copy, nonatomic) NSNumber *enable;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

