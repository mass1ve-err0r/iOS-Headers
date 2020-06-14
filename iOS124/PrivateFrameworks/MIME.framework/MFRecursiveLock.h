//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSRecursiveLock.h>

#import <MIME/MFLockObject-Protocol.h>

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject>
{
    NSString *_name;
    id _delegate;
}

+ (void)initialize;
- (void)dealloc;
- (id)description;
- (void)unlock;
- (_Bool)lockBeforeDate:(id)arg1;
- (_Bool)tryLock;
- (void)lock;
- (_Bool)isLockedByMe;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (id)init;

@end

