//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SAGuidanceGuideSnippet, SAGuidanceSuggestedUtterances;

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand
{
}

+ (id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)guideUpdate;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAGuidanceSuggestedUtterances *suggestedUtterances;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSNumber *guideTag;
@property(retain, nonatomic) SAGuidanceGuideSnippet *guideSnippet;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

