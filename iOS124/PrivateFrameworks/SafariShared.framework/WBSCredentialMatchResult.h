//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBSCredentialMatchResult : NSObject
{
    NSArray *_exactMatches;
    NSArray *_potentialMatches;
    NSArray *_associatedDomainMatches;
}

@property(readonly, copy, nonatomic) NSArray *associatedDomainMatches; // @synthesize associatedDomainMatches=_associatedDomainMatches;
@property(readonly, copy, nonatomic) NSArray *potentialMatches; // @synthesize potentialMatches=_potentialMatches;
@property(readonly, copy, nonatomic) NSArray *exactMatches; // @synthesize exactMatches=_exactMatches;
- (void).cxx_destruct;
- (id)initWithExactMatches:(id)arg1 potentialMatches:(id)arg2 associatedDomainMatches:(id)arg3;

@end

