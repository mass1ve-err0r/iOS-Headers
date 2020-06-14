//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

#import <SearchFoundation/NSCopying-Protocol.h>

@class NSArray, SFResultSection;

@interface SFSectionRankingFeedback : SFFeedback <NSCopying>
{
    NSArray *_results;
    SFResultSection *_section;
    unsigned long long _localSectionPosition;
    double _personalizationScore;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(nonatomic) unsigned long long localSectionPosition; // @synthesize localSectionPosition=_localSectionPosition;
@property(copy, nonatomic) SFResultSection *section; // @synthesize section=_section;
@property(copy, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithResults:(id)arg1 section:(id)arg2 localSectionPosition:(unsigned long long)arg3 personalizationScore:(double)arg4;

@end

