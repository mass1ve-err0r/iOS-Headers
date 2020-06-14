//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FAFamilyDetailsCache : NSObject
{
    unsigned long long _pendingInviteCount;
    _Bool _isValid;
    _Bool _isValidating;
}

+ (id)sharedCache;
- (void)_setPendingInviteCount:(unsigned long long)arg1;
- (void)_fetchPendingInviteCount;
@property(readonly, nonatomic) unsigned long long pendingInviteCount;
- (void)invalidate;

@end

