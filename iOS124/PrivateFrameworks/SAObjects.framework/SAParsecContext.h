//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSData, NSDictionary, NSString;

@interface SAParsecContext : SADomainObject
{
}

+ (id)parsecContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)parsecContext;
@property(copy, nonatomic) NSString *httpUrl;
@property(copy, nonatomic) NSString *httpMethod;
@property(copy, nonatomic) NSDictionary *httpHeaders;
@property(copy, nonatomic) NSData *httpBody;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

