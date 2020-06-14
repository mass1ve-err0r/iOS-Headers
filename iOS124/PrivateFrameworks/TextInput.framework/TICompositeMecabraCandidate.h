//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIMecabraCandidate.h>

@class NSArray, NSString;

@interface TICompositeMecabraCandidate : TIMecabraCandidate
{
    NSString *_remainderCandidateString;
    NSArray *_autoconvertedCandidatePointerValues;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *autoconvertedCandidatePointerValues; // @synthesize autoconvertedCandidatePointerValues=_autoconvertedCandidatePointerValues;
@property(copy, nonatomic) NSString *remainderCandidateString; // @synthesize remainderCandidateString=_remainderCandidateString;
- (void).cxx_destruct;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)label;

@end

