//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFSpeechPhrase : NSObject <NSSecureCoding>
{
    _Bool _isLowConfidence;
    NSArray *_interpretations;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isLowConfidence; // @synthesize isLowConfidence=_isLowConfidence;
@property(copy, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (void).cxx_destruct;
- (id)initWithInterpretations:(id)arg1 isLowConfidence:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct NSDictionary *)allInterpretationStringsAndScores;
- (id)bestInterpretation;
- (id)firstInterpretation;

@end

