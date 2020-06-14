//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SALocation;

@interface SAAnswerSearch : SADomainCommand
{
}

+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)search;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *verbType;
@property(copy, nonatomic) NSString *timeQuestion;
@property(copy, nonatomic) NSArray *product;
@property(copy, nonatomic) NSString *placeAttribute;
@property(copy, nonatomic) NSString *miscQuestion;
@property(copy, nonatomic) NSString *attribute;
@property(retain, nonatomic) SALocation *address;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

