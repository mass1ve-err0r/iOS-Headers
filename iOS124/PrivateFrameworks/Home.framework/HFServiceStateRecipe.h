//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class NSSet, NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceStateRecipe : NSObject <NAIdentifiable, NSCopying>
{
    id <HFServiceTreeMatching> _predicate;
    NSSet *_characteristicRecipes;
}

+ (id)na_identity;
@property(readonly, nonatomic) NSSet *characteristicRecipes; // @synthesize characteristicRecipes=_characteristicRecipes;
@property(readonly, nonatomic) id <HFServiceTreeMatching> predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)matchResultForServices:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPredicate:(id)arg1 characteristicRecipes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

