//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface CKEntity : NSObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *store;
}

- (void).cxx_destruct;
- (id)init;
- (id)linksTo:(id)arg1 matchType:(long long)arg2 error:(id *)arg3;
- (void)linksTo:(id)arg1 matchType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unlinkTo:(id)arg1 withPredicate:(id)arg2 ignoreWeights:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)linkTo:(id)arg1 withPredicate:(id)arg2 error:(id *)arg3;
- (void)linkTo:(id)arg1 withPredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeValueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setValuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)valuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)valueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)valueForKey:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;

@end

