//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand
{
}

+ (id)sessionValidationFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sessionValidationFailed;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *errorCode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

