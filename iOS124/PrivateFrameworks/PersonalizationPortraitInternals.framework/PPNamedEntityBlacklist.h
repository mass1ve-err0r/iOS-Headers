//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPNamedEntityBlacklist : NSObject
{
    _PASLock *_lock;
    unsigned long long _maxRegexMatchingTicks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)blacklistedSetFromEntities:(id)arg1;
- (void)_loadAssetData;
- (id)init_;

@end

