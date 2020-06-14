//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSNumber *minute;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSURL *identifier;
@property(copy, nonatomic) NSNumber *hour;
@property(copy, nonatomic) NSArray *frequency;
@property(copy, nonatomic) NSNumber *enabled;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

