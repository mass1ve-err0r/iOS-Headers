//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASSpeechPartialResult : SABaseClientBoundCommand
{
}

+ (id)speechPartialResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechPartialResult;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *tokens;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

