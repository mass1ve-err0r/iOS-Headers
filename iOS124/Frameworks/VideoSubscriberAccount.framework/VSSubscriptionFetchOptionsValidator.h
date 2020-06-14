//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VSSubscriptionPredicateFactory;

__attribute__((visibility("hidden")))
@interface VSSubscriptionFetchOptionsValidator : NSObject
{
    VSSubscriptionPredicateFactory *_predicateFactory;
}

@property(retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory; // @synthesize predicateFactory=_predicateFactory;
- (void).cxx_destruct;
- (id)standardizedFetchOptionsFromOptions:(id)arg1 withSecurityTask:(id)arg2;
- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)arg1;

@end

