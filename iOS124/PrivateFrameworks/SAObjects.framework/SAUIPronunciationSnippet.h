//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString;

@interface SAUIPronunciationSnippet : SAUISnippet
{
}

+ (id)pronunciationSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)pronunciationSnippet;
@property(copy, nonatomic) NSString *selectNoneText;
@property(copy, nonatomic) NSArray *selectNoneCommands;
@property(copy, nonatomic) NSArray *pronunciations;
@property(copy, nonatomic) NSString *orthography;
@property(copy, nonatomic) NSString *interactionId;
@property(copy, nonatomic) NSArray *cancelCommands;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

