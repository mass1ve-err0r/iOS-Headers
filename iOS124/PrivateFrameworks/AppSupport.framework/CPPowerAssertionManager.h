//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSString;
@protocol CPPowerAssertionManagerDelegate;

@interface CPPowerAssertionManager : NSObject
{
    NSString *_uuid;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    struct __CFDictionary *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    id <CPPowerAssertionManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property id <CPPowerAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_releaseAssertions;
- (void)_retainAssertions;
- (void)reretainPowerAssertionsForGroupIdentifier:(id)arg1;
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1;
- (id)description;
- (void)releasePowerAssertionWithContext:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2;
- (void)retainPowerAssertionWithContext:(id)arg1;
- (void)setUUIDPrefix:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)retainCountForContext:(id)arg1;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;

@end

