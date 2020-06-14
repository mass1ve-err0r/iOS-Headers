//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TUPrivacyManager : NSObject
{
}

+ (id)sharedPrivacyManager;
- (id)allBlacklistRules;
- (_Bool)isIncomingCommunicationBlockedForEmailAddress:(id)arg1;
- (_Bool)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1;
- (void)removeRule:(id)arg1;
- (void)addRule:(id)arg1;
- (void)setBlockIncomingCommunication:(_Bool)arg1 forEmailAddress:(id)arg2;
- (void)setBlockIncomingCommunication:(_Bool)arg1 forPhoneNumber:(id)arg2;
- (void)_handleBlockListChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

