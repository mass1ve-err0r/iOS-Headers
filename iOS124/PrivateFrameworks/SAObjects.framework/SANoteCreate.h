//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SANoteCreate : SADomainCommand
{
}

+ (id)createWithDictionary:(id)arg1 context:(id)arg2;
+ (id)create;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *contents;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

