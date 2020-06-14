//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFServiceTreeMatching-Protocol.h>

@class NSArray, NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching>
{
    id <HFServiceTreeMatching> _rootServicePredicate;
    NSArray *_childServicePredicates;
}

+ (id)na_identity;
@property(readonly, copy, nonatomic) NSArray *childServicePredicates; // @synthesize childServicePredicates=_childServicePredicates;
@property(readonly, nonatomic) id <HFServiceTreeMatching> rootServicePredicate; // @synthesize rootServicePredicate=_rootServicePredicate;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)matchingServicesForRootService:(id)arg1;
- (id)initWithRootServicePredicate:(id)arg1 childServicePredicates:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
