//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNGeminiManager;

@interface IMSenderIdentityManager : NSObject
{
    CNGeminiManager *_geminiManager;
}

+ (_Bool)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) CNGeminiManager *geminiManager; // @synthesize geminiManager=_geminiManager;
- (void).cxx_destruct;
- (id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2;
- (id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2;
- (id)bestSenderIdentityForHandleIDs:(id)arg1;
- (id)init;

@end

