//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SASVoiceSearchFinalResult : SABaseClientBoundCommand
{
}

+ (id)voiceSearchFinalResultWithDictionary:(id)arg1 context:(id)arg2;
+ (id)voiceSearchFinalResult;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *voiceSearchResults;
@property(copy, nonatomic) NSString *recognitionText;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

