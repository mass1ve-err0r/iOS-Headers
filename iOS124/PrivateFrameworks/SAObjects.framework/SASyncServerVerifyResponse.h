//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASyncServerVerifyResponse : SABaseClientBoundCommand
{
}

+ (id)serverVerifyResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)serverVerifyResponse;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *syncDebugInfo;
@property(copy, nonatomic) NSArray *serverChecksums;
@property(copy, nonatomic) NSArray *internalVerifications;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

