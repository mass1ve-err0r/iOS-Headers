//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCNetworkAgent : NSObject
{
    int _assertionRefCount;
}

+ (id)agentFromData:(id)arg1;
+ (id)agentType;
+ (id)agentDomain;
+ (id)sharedInstance;
- (id)copyAgentData;
- (void)removeAssertion;
- (void)addAssertion;
- (void)dealloc;
- (id)init;

@end

